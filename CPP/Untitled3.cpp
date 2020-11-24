#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	
	int num;
	int result=1;
	
	cout<< "\t\t\t\t\tCALCULADORA DE FACTORIALES"<<endl<<endl;
	cout<<"\t\t\t------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\t\tIngrese el numero: ";
	cin>>num;
	
	for (int cont=2;cont<=num;cont++){
		result = result*cont;
	}
	cout<<"\t\t\t------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\t  El numero factorial de "<<num<<"! es: "<<result;

	getch();
	return 0;

}
