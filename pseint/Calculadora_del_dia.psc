Algoritmo Calculadora_del_d�a
	definir dia, a�o, mes2, ks, a�o3 Como Entero
	definir bisiesto como logico
	definir mes como caracter

	
	Mientras (dia <1) o (dia > 31) Hacer
		escribir "Ingrese el d�a: "
		leer dia
	Fin Mientras
	escribir "Ingrese el mes: "
	leer mes 
	Mientras (a�o <1)  Hacer
		escribir "Ingrese el a�o: "
		leer a�o
	Fin Mientras
	A�o3<- a�o
	si a�o mod 4 = 0 y ((a�o mod 100 <> 0) o (a�o mod 400 = 0)) Entonces
		Escribir a�o, " Es bisiesto"
		bisiesto <- verdadero
		a�o <- a�o - 1
	sino 
		Escribir a�o, " No es bisiesto"
		bisiesto <- falso
	FinSi
	
	a�o2<- a�o mod 100
	ks <- trunc(a�o /100) 
	
	si (mes = 'Enero') o (mes = 'enero') o (mes = '01') o (mes = 'ENERO')o (mes = '1')entonces
		mes2 <- 1
	sino 
		si (mes = 'Febrero') o (mes = 'febrero') o (mes = '02') o (mes = 'FEBRERO')o (mes = '2') Entonces
			mes2<-2
		SiNo
			si(mes = 'Marzo') o (mes = 'marzo') o (mes = '03') o (mes = 'MARZO')o (mes = '3')Entonces
				mes2<-3
			sino
				si(mes = 'Abril') o (mes = 'abril') o (mes = '04') o (mes = 'ABRIL')o (mes = '4')Entonces
					mes2<-4
				SiNo
					si(mes = 'Mayo') o (mes = 'mayo') o (mes = '05') o (mes = 'MAYO')o (mes = '5')Entonces
						mes2<-5
					SiNo
						si(mes = 'Junio') o (mes = 'junio') o (mes = '06') o (mes = 'JUNIO')o (mes = '6')Entonces
							mes2<-6
						SiNo
							si(mes = 'Julio') o (mes = 'julio') o (mes = '07') o (mes = 'JULIO')o (mes = '7')Entonces
								mes2<-7
							SiNo
								si(mes = 'Agosto') o (mes = 'agosto') o (mes = '08') o (mes = 'AGOSTO')o (mes = '8')Entonces
									mes2<-8
								SiNo
									si(mes = 'Septiembre') o (mes = 'septiembre') o (mes = '09') o (mes = 'SEPTIEMBRE')o (mes = '9')Entonces
										mes2<-9
									SiNo
										si(mes = 'Octubre') o (mes = 'octubre') o (mes = '10') o (mes = 'OCTUBRE')Entonces
											mes2<-10
										SiNo
											si(mes = 'Noviembre') o (mes = 'noviembre') o (mes = '11') o (mes = 'NOVIEMBRE')Entonces
												mes2<-11
											SiNo
												si(mes = 'Diciembre') o (mes = 'diciembre') o (mes = '12') o (mes = 'DICIEMBRE')Entonces
													mes2<-12
												SiNo
													Escribir "Coma mrd se equivoco"
													
												FinSi
											FinSi
										FinSi
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		
	FinSi
	si (bisiesto = verdadero) y (mes2 = 1)Entonces
		mes2 <- 13	
	sino 
		si (bisiesto = verdadero) y (mes2 = 2)Entonces
			mes2 <- 14
		fin si	
	FinSi 
	diaf <- ((dia + trunc(2.6*(mes2 +1)) + a�o2 + trunc(a�o2/4)+trunc(ks/4)-(2*ks))mod 7)
	si diaf = 0 Entonces
		escribir "El d�a ", dia," del mes " mes, " del a�o ", a�o3, " cay� un Sabado"
	SiNo
		si diaf = 1 Entonces
			escribir "El d�a ", dia," del mes " mes, " del a�o ", a�o3," cay� un Domingo"
		sino
			si diaf = 2 Entonces
				escribir "El d�a ", dia," del mes " mes, " del a�o ", a�o3," cay� un Lunes"
			sino 
				si diaf = 3 Entonces
					escribir "El d�a ", dia," del mes " mes, " del a�o ", a�o3," cay� un Martes"
				sino 
					si diaf = 4 Entonces
						escribir "El d�a ", dia," del mes " mes, " del a�o ", a�o3," cay� un Miercoles"
					sino 
						si diaf = 5 Entonces
							escribir "El d�a ", dia," del mes " mes, " del a�o ", a�o3," cay� un Jueves"
						sino 
							si diaf = 6 Entonces
								escribir "El d�a ", dia," del mes " mes, " del a�o ", a�o3," cay� un Viernes"
							fin si	
						fin si	
					fin si	
				fin si	
			fin si	
		fin si	
	FinSi
FinAlgoritmo


