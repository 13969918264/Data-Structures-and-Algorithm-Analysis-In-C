/*
	Name: 赵子豪(Zihao Zhao)
	Date: 2017年12月20日
*/
/*	example_for_sort.c -- open a file and print the output to it	*/
#include <stdio.h>
#include <stdlib.h>			//	exit prototype
#include <string.h>

#define SIZE 81
#define MAX 1000000000			//	the file is about 20g large.

int main(int argc, char * argv[])
{
	int i = 0;
	FILE * fp;
	char filename[SIZE];

	if (argv[1])
		strcpy(filename, argv[1]);
	else
	{
		fputs("Enter the filename you want to store the examples.\n", stdout);
		fgets(filename, SIZE, stdin);
		filename[SIZE - 1] = '\0';
		while (filename[i] != '\n')
			i++;
		filename[i] = '\0';			// the arrary contains the file name must be a string, so it ends with '\0'.
	}
	fp = fopen(filename, "w");	//	when you want to write to file , don't consider if the file not null.
	for (i = 0; i < MAX; i++)
		fprintf(fp, "%ld\n", (long)((long)rand() * (long)rand() * (long)rand()));
	fclose(fp);

	return 0;
}
