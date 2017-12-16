/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年12月16日
*/
/*	test_file_generator.c -- generate 100 pseudonumber by calling the standard library and sort it	*/
#include <stdio.h>
#include <math.h>

#define MAX 100000

int main(void)
{
	int i;

	for (i = 0; i < MAX; i++)
		printf("%d\n", rand());
	return 0;
}
