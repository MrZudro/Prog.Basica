#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>


using namespace std;

int main (){
	int numeros[100],espacios;
	int contador2;
	int mld;
	int pos;
	int neg;
	
	
	
	
	
	
	cout<<"\nIngrese el numero de numeros a ingresar: ";
	cin>>espacios;
	cout<<endl;
		for(int contador=0;contador<espacios;contador++){
		cout<<"Digite el numero a evaluar: ";
		cin>>numeros[contador];
		cout<<"-------------------------------------"<<endl;
	}
	for(int contador=0;contador<espacios;contador++){
		contador2++;
		if( numeros[contador] < 0){
		cout<<contador2<<". Es un numero negativo: "<<numeros[contador]<<endl;
		neg=neg+1;
		}
		else{
			if(numeros[contador] > 0 ){
				cout<<contador2<<". Es un numero postivo:  "<<numeros[contador]<<endl;
				pos=pos+1;
			}else{
				cout<<contador2<<". Es un numero modulativo:  "<<numeros[contador]<<endl;
				mld = mld+1;
				
			}
		}
	

	}
		cout<<"-------------------------------------"<<endl<<"\nNumero de datos evaluados: "<<espacios<<endl;
		cout<<"Numeros negativos: "<<neg<<endl;
		cout<<"Numeros positivos: "<<pos<<endl;
		cout<<"Numeros modulativos: "<<mld<<endl;
	
	
	getch();
	return 0;
}


