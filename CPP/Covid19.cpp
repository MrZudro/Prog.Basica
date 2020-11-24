#include <iostream>
#include <cmath>
#include <stdio.h>


//Prototipos
float desviacionTipica(float a[], float b, int c);
void mostrar(float a[]);
//Variables globales
int N,val;
float med,sum,dt;


using namespace std;



int main(){
	
	cout<<"Ingrese el numero de personas que aplicaron a la muestra(N): "<<endl;
	cin>>N;
	N=N-1;
	system("CLS");
	float muestra[N], xi[N];
	
	for(int i=0; i<=N;i++){
		cout<<"Ingrese el indice de efectividad en el paciente: ";
		cin>>muestra[i];
		system("CLS");
	}
	cout<<endl<<"Vector con los datos: "<<endl;
	mostrar(muestra);
	
		
	for(int i=0;i<=N;i++){
		if((muestra[i] >=90.0)&&(muestra[i]<=100.0)){
			val+=1;
			xi[i]=muestra[i];
		}else{
			xi[i]=0;
		}
	}
	cout<<endl<<"Vector con Xi: "<<endl;
	mostrar(xi);
	
	for(int i=0;i<=N;i++){
		sum+=xi[i];
	}
	med=sum/val;
	
	dt=desviacionTipica(xi,med,val);

	
	
	//dt=desviacionTipica(xi,med,valores validos);
	cout<<endl<<"La desviacion tipica es: "<<dt;
	cout<<endl<<"La media es: "<<med;
	cout<<endl<<"La sumatoria xi es: "<<sum;
	cout<<endl<<"el numero de personas validos para la muestra son: "<<val;
	N+=1;
	cout<<endl<<"El numero total de personas son: "<<N;
	
}

void mostrar(float a[]){
	for(int i=0;i<=N;i++){
	cout<<a[i]<<"   ";
		
	}
	
}

float desviacionTipica(float a[], float b, int c){
	for(int i=0;i<=N;i++){
		if(a[i]!=0){
			dt+=pow((a[i]-b),2);
			cout<<endl<<"Desvicion tipica del dato: "<<i<<": "<<dt<<endl;
		}
	}
	dt=sqrt(dt/c);
	
	

	return dt;
}
