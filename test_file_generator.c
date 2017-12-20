/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月16日
*/
/*	test_file_generator.c -- generate pseudonumbers by calling the standard library and for sort	*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000000

int main(void)
{
	long long int i;

	for (i = 0; i < MAX; i++)
		printf("%ld\n", rand() * rand() * rand());

	return 0;

}
