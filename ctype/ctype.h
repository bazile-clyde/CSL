#ifndef _CTYPE
#define _CTYPE

/* _Ctype code bits */
#define _XA 0x200 /* 0000 0010 0000 0000 extra alphabetic */
#define _XS 0x100 /* 0000 0001 0000 0000 extra space */
#define _BB 0x80  /* 0000 0000 1000 0000 BEL, BS, etc. */
#define _CN 0x40  /* 0000 0000 0100 0000 CR, FF, HT, NL, VT */
#define _DI 0x20  /* 0000 0000 0010 0000 '0'-'9' */
#define _LO 0x10  /* 0000 0000 0001 0000 'a'-'z' */
#define _PU 0x08  /* 0000 0000 0000 1000 punctuation */
#define _SP 0x04  /* 0000 0000 0000 0100 space */
#define _UP 0x02  /* 0000 0000 0000 0010 'A'-'Z' */
#define _XD 0x01  /* 0000 0000 0000 0001 hex, i.e., '0'-'9', A'-'F', 'a'-'f' */

/* declarations */
int isalnum (int), isalpha (int), iscntrl (int), isdigit (int);
int isgraph (int), islower (int), isprint (int), ispunct (int);
int isspace (int), isupper (int), isxdigit (int);
extern const short *_Ctype, *_Tolower, *_Toupper;

/* macro overrides */
#define isalnum(c) (_Ctype[(int)c] & (_DI|_LO|_UP|_XA))
#define isalpha(c) (_Ctype[(int)c] & (_LO|_UP|_XA))
#define iscntrl(c) (_Ctype[(int)c] & (_BB|_CN))
#define isdigit(c) (_Ctype[(int)c] & _DI)
#define isgraph(c) (_Ctype[(int)c] & (_DI|_LO|_PU|_UP|_XA))
#define islower(c) (_Ctype[(int)c] & _LO)
#define isprint(c) (_Ctype[(int)c] & (_DI|_LO|_PU|_SP|_UP|_XA))
#define ispunct(c) (_Ctype[(int)c] & _PU)
#define isspace(c) (_Ctype[(int)c] & (_CN|_SP|_XS))
#define isupper(c) (_Ctype[(int)c] & _UP)
#define isxdigit(c) (_Ctype[(int)c] & _XD)
#define tolower(c) _Tolower[(int)(c)]
#define toupper(c) _Toupper[(int)(c)]

#endif
