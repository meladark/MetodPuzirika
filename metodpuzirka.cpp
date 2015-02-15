// metodpuzirka.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <malloc.h>
#include <iostream>
#include <conio.h>

void bubble(int* a, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int kolvo;
	printf("Введите количество символов ");
	scanf_s("%d", &kolvo);
	int *mas = (int *)malloc(sizeof(int)*kolvo);
	for (int i = 0; i < kolvo; i++)
	{
		printf("%d Число = ", i+1);
		scanf_s("%d", &mas[i]);
	}
	bubble(mas, kolvo);
	for (int i = 0; i < kolvo; i++)
	{
		printf("%d ", mas[i]);
	}
	_getch();
	return 0;
}

