
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	
	float a, b, c, d, rd, x1, x2;
	
	
	cout << "Digite o valor de A! \n";
	cin >> a;
	cout << "Digite o valor de B! \n";
	cin >> b;
	cout << "Digite o valor de C! \n";
	cin >> c;
	
	d = (b*b)-(4*a*c);
    if(d!=0){
    	rd = sqrt(d);
    	x1 = ((-b+rd)/(2*a));
    	x2 = ((-b-rd)/(2*a));
		cout << "O valor com o delta positivo é:"<<x1;
		cout << "O valor com o delta negativo é:"<<x2;
	}
	
	system("pause");
	return 0;
}