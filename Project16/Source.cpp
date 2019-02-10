#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;
void  AddLeftDigit(int &a, int d)
{
	int g = a;
	int f = 0;
	while (g)
	{
		g = g / 10;
		f++;
	}

	a = (d*pow(10, f)) + a;

}
void task9()
{
	printf("Proc9. Описать процедуру AddLeftDigit(D, K), добавляющую к целому положительному числу K слева цифру D (D — входной параметр целого типа, лежащий в диапазоне 1–9, K — параметр целого типа, являющийся одновременно входным и выходным). С помощью этой процедуры последовательно добавить к данному числу K слева данные цифры D1 и D2, выводя результат каждого добавления.\n");
	int a;
	int d = 1 + rand() % 8;
	cin >> a;
	printf("--------\n");
	AddLeftDigit(a, d);
	cout << a << endl;


}
void AddRightDigit(int &a, int d)
{
	a = (a * 10) + d;
}
void task8()
{
	printf("Proc8◦. Описать процедуру AddRightDigit(D, K), добавляющую к целому положительному числу K справа цифру D (D — входной параметр целого типа, лежащий в диапазоне 0–9, K — параметр целого типа, являющийся одновременно входным и выходным). С помощью этой процедуры последовательно добавить к данному числу K справа данные цифры D1 и D2, выводя результат каждого добавления. \n");
	int a;
	int d = 1 + rand() % 8;
	cin >> a;
	printf("--------\n");
	AddRightDigit(a, d);
	cout << a << endl;

}
void   InvertDigits(int a)
{
	int d[110] = { 0 };
	int f = 0;

	for (size_t i = 0; i < 10; i++)
	{

		d[i] = a % 10;
		a = a / 10;
		if (a >= 1)
		{
			f++;
		}
	}
	for (size_t i = 0; i <= f; i++)
	{
		printf("%d", d[i]);
	}
}
void task7()
{
	printf("Proc7. Описать процедуру InvertDigits(K), меняющую порядок следования цифр целого положительного числа K на обратный (K — параметр целого типа, являющийся одновременно входным и выходным). С помощью этой процедуры поменять порядок следования цифр на обратный для каждого из пяти данных целых чисел. \n");
	int a;
	cin >> a;
	InvertDigits(a);




}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task7(); break;
		case 2: task8(); break;
		case 3: task9(); break;
		
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}