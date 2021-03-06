#ifndef _FINDCRYPT_HPP_
#define _FINDCRYPT_HPP_

#define IS_LITTLE_ENDIAN

#if defined(__GNUC__) || defined(__MWERKS__)
	#define WORD64_AVAILABLE
	typedef unsigned long long word64;
        typedef unsigned long word32;
        typedef unsigned char byte;
	#define W64LIT(x) x##LL
#elif defined(_MSC_VER) || defined(__BCPLUSPLUS__)
	#define WORD64_AVAILABLE
	typedef unsigned __int64 word64;
        typedef unsigned __int32 word32;
        typedef unsigned __int8 byte;
	#define W64LIT(x) x##ui64
#endif

struct array_info_t
{
  const void *array;
  size_t size;
  const char *name;
  const char *algorithm;
};

extern const array_info_t consts[];

#define ARR(x)  x, sizeof(x), #x

#endif