#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	bool result;
	cout << "������� ���������� x = ";
	cin >> x;
	cout << "������� ���������� y = ";
	cin >> y;
	if ((y>=x-1) && (y<=x+1) && (((y<=-x-3) && (y>=-x-5)) || ((y<=x+5) && (y>=x+3))))
	  {
	  	cout << "\n�������� ���������� ��������� ������ ����������� ����";
	  }
	else
	  {
	   cout << "\n�������� ���������� �� ��������� ������ ����������� ����";
      }
	cin.get();
	return 0;	
}
