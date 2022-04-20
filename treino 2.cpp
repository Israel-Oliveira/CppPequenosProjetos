#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;

int main(int argc, char** argv){
	
	int n1 = 0;
	int n2 = 0;
	int opcao = 0;
	
	cout<<"Escolha a operacao que deseja realizar \n digite 1 para adicao \n digite 2 para subtracao \n digite 3 para divisao \n digite 4 para multiplicaao \n";
	cin >> opcao;
	if( opcao == 1){
		
		cout <<"Digite o primeiro Valor para a soma: \n";
		cin >> n1;
		cout <<"Digite o segundo numero: \n";
		cin>> n2;
		cout << "O resultado eh: " << n1+n2;
	}
	else if( opcao == 2){
		cout <<"Digite o primeiro Valor para a subtracao: \n";
		cin >> n1;
		cout <<"Digite o segundo numero: \n";
		cin>> n2;
		cout << "O resultado eh: " << n1-n2;
	}
	else if( opcao == 3){
		cout <<"Digite o primeiro Valor para a divisao: \n";
		cin >> n1;
		cout <<"Digite o segundo numero: \n";
		cin>> n2;
		cout << "O resultado eh: " << n1/n2;
	}
	else if( opcao == 4){
		cout <<"Digite o primeiro Valor para a multiplicacao: \n";
		cin >> n1;
		cout <<"Digite o segundo numero: \n";
		cin>> n2;
		cout << "O resultado eh: " << n1*n2;
	}
	else{
		cout << "Voce digitou um opcao invalida ou inexistente \n clique enter para encerrar o programa";
	}
	return 0;

}