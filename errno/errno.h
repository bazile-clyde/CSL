#ifndef _ERRNO
#define _errno

#ifndef _YVALS
#include <yvals.h>
#endif

#define EDOM _EDOM
#define ERANGE _ERANGE
#define EFPOS _EFPOS
#define _NERR _ERRMAX

extern int errno;

#endif
