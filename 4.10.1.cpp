
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a, max, amax,c;
	a = 1;
	max = 0;
	amax = 0;
	while (a != 0) {
		cout << "������� �����\n";
		cin >> a;
		c = 0;
		for (int i = 2; i < a / 2; i++) {
			
			if (a%i == 0) {
				c++;
			}
		}
		if (c > max) {
			max = c;
			amax = a;
		}
	}
	cout << "���� �����: " << amax;
	cin >> a;
    return 0;
}

