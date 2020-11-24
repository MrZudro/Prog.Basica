#include <iostream>
#include <string>


using namespace std;

int main(){
	
	string placa, desc;
	int i;

	
	for(i=1;i<=5;i++){
		
		cout<<"Ingrese la placa"<<endl;
		getline(cin, placa);
		cout<<endl;
		cout<<"Ingrese la descripcion"<<endl;
		getline(cin, desc);	
		cout<<endl;
		cout<<"Esto es: "<<placa<<" Y "<<desc<<endl;
	}

}
