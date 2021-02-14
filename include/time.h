#ifndef _TIME_H
#define _TIME_H

#include "stddef.h"

struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
}

time_t time(time_t *timer);
char *ctime(const time_t *timer);
clock_t clock(void);
time_t mktime(struct tm *tptr);
struct tm *gmtime(const time_t *timer);
struct tm *localtime(const time_t *timer);
char *asctime(const struct tm *tptr);

#endif //_TIME_H
