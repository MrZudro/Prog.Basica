#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
	
	double N;
	cout<<"  +---------------------------------------------------------------------------------------------+"<<endl;
	cout<<"    Ingrese el n-esimo termino de pi que desea conocer"<<endl;
	cout<<"  +---------------------------------------------------------------------------------------------+"<<endl;
	cout<<"    Nota: "<<endl;
	cout<<"    Tenga en cuenta que, a mayor numero de digitos,"<<endl; cout<<"    mayor sera la precision del numero pi."<<endl;
	cout<<"  +---------------------------------------------------------------------------------------------+"<<endl;
	cout<<"    Su numero aqui|";cin>>N;
	
	cout<<endl<<"  +---------------------------------------------------------------------------------------------+";
    cout<<endl<<"                           Numero de terminos que quierer sumar : "<<N;
    cout<<endl<<"  +---------------------------------------------------------------------------------------------+";
	
	double S=0;
	for (int i=0; i<N; i++) {  
        S=S+ 1/pow(i+1,2); 
    }
    
    double pi=sqrt(6*S);     
    cout.precision(18);
	cout<<endl<<"                               "<<"Pi = "<<pi;
	cout<<endl;
	cout<<endl ;   
	return 0;    
}


