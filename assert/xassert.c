#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void _Assert(char *msg) { /* prints assertion message and aborts */
	fputs(msg, stderr);
	fputs(" -- assertion failed\n", stderr);
	abort();
}