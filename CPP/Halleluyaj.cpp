//bienvenidos a parqueadero V4.1.0
#include <iostream>
#include <stdio.h>
#include <math.h>
#define MAX_STRLEN 256
//Prototipos
int digitacion();
int digidia();
using namespace std;

//Función main
int main(){
	cout<<"--------------------------------------------"<<endl;
	int n, i, opc, pagar, dias, minutos, vldia, conhor;
	float horas; 
	char placa[MAX_STRLEN], desc[MAX_STRLEN];
	double partent,partdec;
	
	cout<<"Cuantos autos quiere ingresar?"<<endl;
	cout<<"-";cin>>n;cout<<endl<<endl;

	
	for(i=1;i<=n;i+=1){
		
		pagar=0;
		partent=0;
		partdec=0;
		
		cout<<"--------------------------------------------"<<endl;
		cout<<"Ingrese el tipo de cobro que desea: "<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<"1) Dia, cuyo valor es 20.000$ "<<endl;
		cout<<"2) Horas, las primeras tres por un valor de 3000$ las siguiente por 1500$ c/u"<<endl;
		cout<<"3) Minutos, cuyo valor es de 100$"<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<"-";cin>>opc;
		switch(opc){
			
			case 1:
				
			cout<<"--------------------------------------------"<<endl;
			cout<<"Ingrese la placa del vehiculo: "<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"-";cin>>placa;
			cout<<"--------------------------------------------"<<endl;
			cout<<"Ingrese la descripcion: "<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"-";cin>>desc;
				 dias=digidia();
				 pagar = dias*20000;
			break;
			case 2:
			cout<<"--------------------------------------------"<<endl;
			cout<<"Ingrese la placa del vehiculo: "<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"-";cin>>placa;
			cout<<"--------------------------------------------"<<endl;
			cout<<"Ingrese la descripcion: "<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"-";cin>>desc;
				horas=digitacion();
				horas=((horas/60)/60)*-1;
				for(conhor=1;conhor<=horas;conhor++){
					if(conhor>3){
						pagar=pagar+1500;
					}else{
						if(conhor<=3){
							pagar=pagar+1000;	
						}	
					}
				}
				partdec=modf(horas,&partent);
				if((partdec!=0) && (horas <= 3)){
					pagar=pagar+1000;
				}else{
					if((partdec!=0) && (horas > 3)){
					pagar=pagar+1500;
				}
				}
			break;
			case 3:
			cout<<"--------------------------------------------"<<endl;
			cout<<"Ingrese la placa del vehiculo: "<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"-";cin>>placa;
			cout<<"--------------------------------------------"<<endl;
			cout<<"Ingrese la descripcion: "<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"-";cin>>desc;
				minutos=digitacion();
				minutos=(minutos/60)*-1;
				pagar=minutos*100;
			break;	
			default: cout<<"[ERROR 001: Ingreso no valido.]"; return 0;
		}
		
		vldia= vldia+pagar;
		
		cout<<"El automovil de placa: "<<placa<<endl;
		cout<<"Con descripcion: "<<desc<<endl;
		cout<<"Debe pagar: "<<pagar<<endl;
		cout<<"Las ganancias del dia son: "<< vldia<<endl;

	}
	
}

//Funcion digidia
int digidia(){
	
	int diai, mesi, anoi, dias, mess, anos, rdia, rmes, rano, diasfi;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite el dia de ingreso: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>diai;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite el mes de ingreso: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>mesi;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite el año de ingreso:"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>anoi;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite el dia de salida: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>dias;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite el mes de salida: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>mess;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite el año de salida:"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>anos;
	cout<<"--------------------------------------------"<<endl;
	
	rdia= dias-diai;
	rmes=(mess-mesi)*30;
	rano=(anos-anoi)*360;
	diasfi=rdia+rmes+rano;
	return diasfi;
		
}

//funcion digitacion
int digitacion(){
	
	int hri, mini, segi, hrs, mins, segs, rhr, rmin, rseg, segsfin;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite la hora de ingreso: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>hri;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite los minutos de ingreso: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>mini;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite los segundos de ingreso:"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>segi;
	cout<<"--------------------------------------------"<<endl;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite la hora de salida: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>hrs;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite los minutos de salida: "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>mins;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Digite los segundos de salida:"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"-";cin>>segs;
	cout<<"--------------------------------------------"<<endl;
		
	rhr=((hri*60)*60)-((hrs*60)*60);
	rmin=(mini*60)-(mins*60);
	rseg= segi-segs;
	
	segsfin=rhr+rmin+rseg;
	return segsfin;	

}
