#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#define N 100
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double mas[N], ArgP, ArgM;
	int i;
	cout << "������� ������������������ �����: ";
	ArgP = ArgM = 0;
	for (i; i <= N; i = i + 1)
	{
		cin >> mas[i];
		if (mas[i] > 0)
			ArgP = ArgP + 1;
		if (mas[i] < 0)
		    ArgM = ArgM + 1;
		if (mas[i] == 0)
		    break;
	}
	cout << "� ���� ������������������ " 
	     <<	ArgP * 100 / (ArgP + ArgM) 
		 << "% ������������� ��������� � "
		 << ArgM * 100 / (ArgP + ArgM) 
		 << "% ������������� ���������";
    cin.get();
    return 0;
}
