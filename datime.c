#ifdef __MSDOS__
#define _TIME_
#include "time.h"

fDATIME(X,Y)long *X, *Y; {
	time(X); time(Y);
	*Y /= 2;
	/* it would be even better if the two numbers were totally
	 * unrelated, like if 'time' returned 64 bits of data */
}
#endif

#ifndef _TIME_
#include "sys/time.h"

fDATIME(X,Y)long *X, *Y; {
	struct timeval now;
	gettimeofday(&now, 0);
	*X = now.tv_sec;
	*Y = now.tv_usec;
}
#endif
