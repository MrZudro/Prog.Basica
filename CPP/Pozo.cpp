#include <iostream> 
#include <iostream> 
#include  <stdio.h> 
#include <math.h>

using namespace std;

int main() {
	
	int base, varilla1, varilla2;
	float cateto1, cateto2, ang1, ang2,ang3, C_interno1, h; 
	
	cout << "Ingrese la longitud de la base en m\n";
	cin >> base;
	cout << "Ingrese la longitud de la primera varilla en m\n";
	cin >> varilla1;
	if (varilla1>base){
		cout << "Ingrese la longitud de la segunda varilla en m\n";
	    cin >> varilla2;
	    if (varilla2>base){
			cateto1 = sqrt((varilla1*varilla1)-(base*base));
	    	cateto2 = sqrt((varilla2*varilla2)-(base*base));
	    	ang1 = asin(cateto1/varilla1); //cateto1*sin(90)=cateto1*1
			ang2 = asin(cateto2/varilla2); //cateto2*sin(90)=cateto2*1
			ang3 = 180-(ang1*180/3.14159265358979323846)-(ang2*180/3.14159265358979323846);
			ang3 = ang3*3.14159265358979323846/180;
			C_interno1 = (base*sin(ang2))/sin(ang3);
	    	h = (C_interno1*sin(ang1)); //(C_interno1*sin(ang1))/sin(90))= operacion/1 
			cout << "\n" << endl;
	    	cout <<"La altura desde la interseccion de las varillas hasta el fondo del pozo es:"  << h << " m" << endl;
	    }
	    else cout<<"La longitud de la segunda varilla debe ser mayor a la base"; 
	 }
	else cout <<"La longitud de la primera varilla debe ser mayor a la base ";  
}
