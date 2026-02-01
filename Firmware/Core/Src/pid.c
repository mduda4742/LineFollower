#include "pid.h"


void pid_init(cpid_t * pid, float p, float i, float d, uint8_t f, int32_t dt_ms) {
    pid->f = f;
    pid->power = (1 << f);

    pid->p = (int32_t)(p * pid->power);
    pid->i = (int32_t)(i * pid->power);
    pid->d = (int32_t)(d * pid->power);

    pid->p_max = INT32_MAX;
    pid->p_min = INT32_MIN;

    pid->i_max = INT32_MAX;
    pid->i_min = INT32_MIN;

    pid->d_max = INT32_MAX;
    pid->d_min = INT32_MIN;

    pid->dt_ms = dt_ms;

    pid->sum = 0;
    pid->e_last = 0;

    pid->total_max = INT32_MAX;
    pid->total_min = INT32_MIN;
}

int32_t pid_calc(cpid_t * pid, int32_t mv, int32_t dv) {
    int32_t p_term, i_term, d_term, e, total;

    e = dv - mv;

    p_term = pid->p * e;

    if (p_term > pid->p_max)
        p_term = pid->p_max;
    else if (p_term < pid->p_min)
        p_term = pid->p_min;

    i_term = pid->sum;

    i_term += (pid->i * e * pid->dt_ms) / 1000;

    if (i_term > pid->i_max)
        i_term = pid->i_max;
    else if (i_term < pid->i_min)
        i_term = pid->i_min;

    pid->sum = i_term;

    d_term = (pid->d * (e - pid->e_last) * 1000) / pid->dt_ms;

    if (d_term > pid->d_max)
        d_term = pid->d_max;
    else if (d_term < pid->d_min)
        d_term = pid->d_min;

    total = p_term + i_term + d_term;

    if (total > pid->total_max)
        total = pid->total_max;
    else if (total < pid->total_min)
        total = pid->total_min;

    pid->control = total >> pid->f;
    pid->e_last = e;

    return pid->control;
}

int32_t pid_scale(cpid_t * pid, float v) {
	return (int32_t)(v * (float)pid->power);
}
