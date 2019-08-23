#include<stdio.h>
#include "zmalloc.h"
//int usetcmallocFlag = 0;
//int usejemallocFlag = 0;
//int appleFlag = 0;
//int zmalloclibFlag = 0;
//int havaMallocSizeFlag = 0;
int main()
{
	printf("usetcmallocFlag:%d\n", usetcmallocFlag);
	printf("usejemallocFlag:%d\n", usejemallocFlag);
	printf("appleFlag:%d\n", appleFlag);
	printf("zmalloclibFlag:%d\n", zmalloclibFlag);
	printf("havaMallocSizeFlag:%d\n", havaMallocSizeFlag);
	printf("hello world\n");
	return 0;
}