/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月16日
*/
/*	test_file_generator.c -- generate pseudonumbers by calling the standard library	*/
/*	You have to use redirection	*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000000

int main(void)
{
	long int i;

	for (i = 0; i < MAX; i++)
		printf("%ld\n", (long)((long)rand() * (long)rand() * (long)rand()));

	return 0;
}
