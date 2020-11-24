#include <iostream>
#include <stdlib.h>

//prototipos
void mostrar();

using namespace std;

//Variables globales
int A[10];
int aux, aux2;

int main(){
	

	
	for(int i=0;i<10;i++){
		cout<<"Ingrese los datos a su vector: ";
		cin>>A[i];
		system("CLS");	
	}

	cout<<"Los datos de su vector son: "<<endl;
	mostrar();	

		
	for(int i=9;i>=0;i=i-1){
		for(int j=10;j>0;j=j-1){
			if(A[i]<A[j]){
				aux = A[i];
				A[i] = A[j];
				A[j]=aux;
			}
		} 
	}
	
	cout<<endl<<"Los datos de su vector ordenado de mayor a menor son: "<<endl;
	mostrar();

	
	for(int i2=1;i2<=9;i2++){
		for(int j2=0;j2<=9;j2++){
			if(A[i2]<A[j2]){
				aux2 = A[i2];
				A[i2] = A[j2];
				A[j2]=aux2;
			}
		} 
	}		
	
	cout<<endl<<"Los datos de su vector ordenado de menor a mayor son: "<<endl;
	mostrar();
	cout<<endl<<"El tamano de su vector es de 10";

}

void mostrar(){
	for(int i=0;i<10;i++){
	cout<<A[i]<<"   ";	
	}
}

