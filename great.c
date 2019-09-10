//greatest number formed from a given numbers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
	const char *X = (const char *)a;
	const char *Y = (const char *)b;
	int len = strlen(*X) + strlen(*Y) + 1;
	char XY[len];
	strcpy(XY, *X);
	strcat(XY, *Y);
	char YX[len];
	strcpy(YX, *Y);
	strcat(YX, *X);
	return strcmp(YX, XY);
}

int main(void)
{
  char *arr[] = { "56", "65", "93", "92", "34", "82" };
	int n = sizeof(arr)/sizeof(arr[0]);
	qsort(arr, n, sizeof(arr[0]), compare);
	for (int i = 0; i < n ; i++ )
		printf("%s", arr[i]);
	return 0;
}
