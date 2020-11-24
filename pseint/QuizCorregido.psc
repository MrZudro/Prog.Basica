Algoritmo Inversión
	Escribir "Digite el Capital que desea ingresar al Banco: "
	Leer C
	
	Escribir "Digite la Tasa de Interés Nominal Anual en términos de Porcentaje (sin el símbolo %): "
	Leer I
	
	Escribir "Digite la cantidad en Años que su Capital se mantendrá en el Banco: "
	Leer n1
	n2 <- n1
	
	Escribir "Escoja uno de los siguientes Sistemas de Capitalización: "
	Escribir "1 - Mensual."
	Escribir "2 - Trimestral."
	Escribir "3 - Semestral."
	Escribir "4 - Anual."
	Leer SC
	Segun SC Hacer
		Caso 1:
			Escribir "Escogió un Sistema de Capitalización Mensual."
			P <- 12
		Caso 2:
			Escribir "Escogió un Sistema de Capitalización Trimestral."
			P <- 4
		Caso 3:
			Escribir "Escogió un Sistema de Capitalización Semestral."
			P <- 2
		Caso 4:
			Escribir "Escogió un Sistema de Capitalización Anual."
			P <- 1
		De Otro Modo:
			Escribir "No escogió un Número de entre 1 y 4."
	Fin Segun
	
	i1 <- I/P
	i2 <- i1/100
	N<- n2*P
	
	VF <- C*(1+i2)^N
	
	Escribir "Dado el Capital ", C, " , con la Tasa de Interés Efectiva Capacitable por cada Periodo de Tiempo ", i1, " con la Tasa de Interés Nominada Anual ", I, " para ", n1, " año (s), su Valor Futuro de la Inversión es: ", VF
FinAlgoritmo
