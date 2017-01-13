#include <iostream>
#include "math.h"
using namespace std;
int main(){
	int a,b;
	cout<<"Введите число\n";
	cin>>a;
	b= a % 10;
	a = a / 10;
	b = a*b;
	cout<<"Ответ "<<b;
	return 1;
}
