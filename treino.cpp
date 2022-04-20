#include <iostream>



int main(int argc, char** argv){
	using namespace std;
	for(int i = 0; i < 10; i++){
	
		int x = 0;	
		cout <<"Digite um numero:";
		cin>> x;
		

		if( x > 0 ){
			cout<<"X eh positivo \n";
		}
		else if ( x < 0){
			cout << "X eh negativo \n";
		}
		else{
			cout << "X eh zero \n";
		}
	
	}
	system("pause");
	return 0;
}