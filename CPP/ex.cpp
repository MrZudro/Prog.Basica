#include <iostream>



using namespace std;
//prototipos:
double seg(double x[], double a[]);
double dia(double c[], double b[]);

int main()
{
	char desc[100];
	double horai[3], horas[3];
	double fechai [3], fechas[3];
	int tiem, tiem2, cobro, au, i;
	double valor, vldia, tiemdia, conhor, tiempo;
	char placa[10];
	
	cout<<"Cuantos autos ingresara?"<<endl;
	cin>>au;
	
	for(i=1;i<=au;i+=1){
		
		valor=0;
		
		cout<<"-------------------------------------"<<endl;
		cout<<"Como quiere que se le cobre: "<<endl;		
		cout<<"-------------------------------------"<<endl;
		cout<<"0.dias (20.000 por dia)"<<endl;
		cout<<"1.horas (1.000 por hora, despues de tres horas 1.500)"<<endl;
		cout<<"2.minutos (50 pesos el minuto)"<<endl;
		cout<<"-------------------------------------"<<endl;
		cout<<"-";cin>>cobro;
		cout<<"-------------------------------------"<<endl;
		cout<<"Ingrese la placa del automovil: "<<endl;
		cout<<"-------------------------------------"<<endl;
		cout<<"-";
		cin.getline(placa,10,'\n');
		cout<<"-------------------------------------"<<endl;
		cout<<"Ingrese la descripcion del automovil: "<<endl;
		cout<<"-------------------------------------"<<endl;
		cout<<"-";
		cin.getline(desc,100,'\n');

		if(cobro==0){
			for(int contador2=0;contador2<3;contador2++){
			cout<<"Digite la fecha de salida en dias, meses, a�os: ";
			cin>>fechas[contador2];
			cout<<"---------------------------------------------------------"<<endl;
			}
			for(int contador=0;contador<3;contador++){
			cout<<"Digite la fecha de ingreso en dias, meses, a�os: ";
				cin>>fechai[contador];
				cout<<"-----------------------------------------------------"<<endl;
			}
			tiemdia= dia(fechai, fechas);
			if (tiemdia<0){
				tiemdia=tiemdia*-1;
			}
			valor = tiemdia*20000;
		}else{
			for(int contador2=0;contador2<3;contador2++){
			cout<<"Digite la hora de ingreso en horas, minutos, segundos: ";
			cin>>horai[contador2];
			cout<<"---------------------------------------------------------"<<endl;
			}
			for(int contador=0;contador<3;contador++){
				cout<<"Digite la hora de salida en horas, minutos, segundos: ";
				cin>>horas[contador];
				cout<<"-----------------------------------------------------"<<endl;
			}
			
			tiem = seg(horai, horas);
			tiem2= tiem*-1;
			
			switch(cobro){
				
				case 1:
					tiempo=(tiem2/60)/60;
					for(conhor=1;conhor<=tiempo;conhor++){
						if(conhor>3){
							valor=valor+1500;
						}else{
							if(conhor<=3){
								valor=valor+1000;	
							}	
						}
					}
					cout<<"Contador: "<<conhor;cout<<"tiempo: "<<tiempo;
				break;	
				case 2:	
					tiempo=(tiem2/60);
					valor = tiempo * 50;
				break;
				default: cout<<"[ERROR DE INGRESO] - Ingreso una opcion herrada.";	
			}
		}
		
	
		vldia += valor;
		
		cout<<"El automovil cuya placa es: "<< placa<<endl;
		cout<<"El automovil con descripcion: "<< desc<<endl;
		cout<<"Debe pagar: "<< valor<<endl;
		cout<<"Las ganancias del dia son: "<< vldia<<endl;
		cout<<endl;
		cout<<endl;

	}
	

}

double seg(double x[], double a[]){
	double tiem,horaf,minf,segf;
	for (int contador=0;contador<3;contador++){
		for (int contador2=0;contador2<3;contador2++){
			if (x[0] && a[0]){
				horaf=(((x[0]*60)*60)-((a[0]*60)*60));
			}else{
				if(x[1] && a[1]){
					minf=((x[1]*60)-(a[1]*60));
				}else{
					if(x[2] && a[2]){
						segf=(x[2]-a[2]);
					}
				}
				
			}
		}
	}
	tiem = horaf+minf+segf;
	return tiem;
};

double dia(double c[], double b[]){
	double tiem,dias,meses,anio;
	for (int contador=0;contador<3;contador++){
		for (int contador2=0;contador2<3;contador2++){
			if (c[0] && b[0]){
				dias=(c[0])-(b[0]);
			}else{
				if(c[1] && b[1]){
					meses=(c[1]-b[1])*30;
				}else{
					if(c[2] && b[2]){
						anio=(c[2]-b[2])*360;
					}
				}
				
			}
		}
	}
	tiem = anio+meses+dias;
	return tiem;
};

