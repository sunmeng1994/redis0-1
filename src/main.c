#include<stdio.h>
#include "zmalloc.h"
//int usetcmallocFlag = 0;
//int usejemallocFlag = 0;
//int appleFlag = 0;
//int zmalloclibFlag = 0;
//int havaMallocSizeFlag = 0;
void checkdefine1()
{
#ifdef HAVE_MALLOC_SIZE
	printf("have malloc size\n");
	#define PREFIX_SIZE (0)
#else
	#if defined(__sun) || defined(__sparc) || defined(__sparc__)
		#define PREFIX_SIZE (sizeof(long long))
		printf("have son or sparc\n");
	#else
		#define PREFIX_SIZE (sizeof(size_t))
		printf("havenothing");
	#endif
#endif
}
int main()
{
	checkdefine1();
	return 0;
}