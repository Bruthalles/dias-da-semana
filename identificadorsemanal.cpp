#include <iostream>
using namespace std;

int main(int argc, char argv){
	int numero;
	cout<< "Identificador de dias da semana"<<endl;
	cout<< "Digite um numero de 1 a 8:"<<endl;
	cin>> numero;
	switch (numero){
		case 1 : cout<<"Domingo"<<endl;break;
		case 2 : cout<<"Segunda-Feira"<<endl;break;
		case 3 : cout<<"Terca-Feira"<<endl;break;
		case 4 : cout<<"Quarta-Feira"<<endl;break;
		case 5 : cout<<"Quinta-Feira"<<endl;break;
		case 6 : cout<<"Sexta-Feira"<<endl;break;
		case 7 : cout<<"Sabado"<<endl;break;
		case 8 : cout<<"ta se achando esperto ? nao vai ter sextou, ainda estamos na terca. Tente novamente!"<<endl;break;
		default : cout<<"Digitou outra coisa"<<endl;	
	}	
	return 0;
}