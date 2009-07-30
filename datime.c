#ifndef _TIME_
#include "sys/time.h"

fDATIME(X,Y)long *X, *Y; {
	struct timeval now;
	gettimeofday(&now, 0);
	*X = now.tv_sec;
	*Y = now.tv_usec;
}
#endif
