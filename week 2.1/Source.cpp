#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[10000];
	int i = 0;
	scanf("%[^\n]", &a);
	while (a[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
	return 0;
}