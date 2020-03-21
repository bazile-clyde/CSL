#undef assert /* remove existing definition */

#ifdef NDEBUG /* not debug */
	#define assert(test) ((void) 0) /* passive form */
#else /* NDEBUG not defined */
	void _Assert(char *);

	#define _STR(x) _VAL(X)
	#define _VAL(x) #x
	#define assert(test) ((test) ? (void)0 \
		: _Assert(__FILE__":"_STR(__LINE__)" "#test)
#endif