#ifndef _TIME_H
#define _TIME_H

time_t time(time_t *timer);
char *ctime(const time_t *timer);
clock_t clock(void);
time_t mktime(struct tm *tptr); //tptr means time pointer
struct tm *gmtime(const time_t *timer);
struct tm *localtime(const time_t *timer);
char *asctime(const struct tm *tptr); //tptr means time pointer

#endif //_TIME_H
