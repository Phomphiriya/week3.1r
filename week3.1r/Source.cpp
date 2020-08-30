#include<stdio.h>
int main()
{
	int x, y, k;
	printf("Enter your num : ");
	scanf_s("%d", &x);
	for (y = x; y > 0; y--)
	{
		for (k = y; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}