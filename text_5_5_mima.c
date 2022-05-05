#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[30];
	arr[1] = 1;
	arr[2] = 1;
	int a = 0;
	int i = 1;
	for (i = 3; i <= 29; i++)
		arr[i] = (i - 1) * arr[i - 1] + (i - 2) * arr[i - 2];
	for (i = 1; 1; i++)
	{
		if (arr[i] <= 3000)
			a++;
		else
		{
			break;
		}
	}
	printf("%d", a);
	return 0;
	
}