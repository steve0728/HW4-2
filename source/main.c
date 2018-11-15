#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int a[5];
	int i, j, temp;
	printf("請輸入5個要排序的數值:");
	for (i = 0; i < 5; i++)	scanf_s("%d", &a[i]);

	for (i = 0; i < 9999; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[j]>a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				for (j = 0; j < 5; j++)
				{
					printf("%d", a[j]);
				}
				printf("\n");
			}

		}

	}
	system("pause");

}