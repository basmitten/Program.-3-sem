#include <iostream>
#include "math.h"
using namespace std;
int main(){
	double n,a,b;
	cout<<"������� N\n";
	cin>>n;
	b=0;
	a=1;
	for (int i=1;i<=n;i++){
		b=b+i*i;
	}
	for (int i=1;i<=n;i++){
		a=a*i;
	}
	n=b/a;
	cout<<"����� "<<n;
	return 1;
}
