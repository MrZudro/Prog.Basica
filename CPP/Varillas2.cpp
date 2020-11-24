#include <iostream> 
#include  <stdio.h> 
#include <stdlib.h> 
#include <math.h>

using namespace std;

int main() {
	
	float base, varilla1, varilla2, cateto1, cateto2, h1, h2, m1, m2, d, x;  
	
	cout << "Longitud primera varilla en cm\n";
	cin >> varilla1;
	cout << "Longitud segunda varilla en cm\n";
	cin >> varilla2;
	cout << "longitud de la base en cm\n";
	cin >> base;
	
	if (varilla1>0 && varilla2>0) {
	  if (base<varilla1 && base<varilla2){
	    cateto1 = (varilla1*varilla1)-(base*base);
	    cateto2 = (varilla2*varilla2)-(base*base);
	    cout << "Valor de a1: "<<cateto1 <<"\n" <<"Valor de a2: "<< cateto2 << endl;
	    h1 = sqrt(a1);
	    h2 = sqrt(a2);
	    cout << "Valor de h1(raiz cuadrada de a1): "<<h1 <<"\n" <<"Valor de h2(raiz cuadrada de a2): "<< h2 << endl;
	    m1 = h1/base;
	    m2 = (-h2/base);
	    cout << "Valor de m1(raiz cuadrada de a1 divida por la base): "<<m1 << "\n"<<"Valor de m2(raiz cuadrada de a2 divida por la base): "<< m2 << endl;
	    x = h2/(m1-m2);
	    cout <<"raiz cuadrada de a2 dividido la resta de m1 y m2: "<<x<< endl;
	    d = m1*x;
	    cout <<"Distancia es igual a: " <<d << " cm" << endl;
	    }
	} 

}
