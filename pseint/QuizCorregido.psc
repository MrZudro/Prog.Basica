Algoritmo Inversi�n
	Escribir "Digite el Capital que desea ingresar al Banco: "
	Leer C
	
	Escribir "Digite la Tasa de Inter�s Nominal Anual en t�rminos de Porcentaje (sin el s�mbolo %): "
	Leer I
	
	Escribir "Digite la cantidad en A�os que su Capital se mantendr� en el Banco: "
	Leer n1
	n2 <- n1
	
	Escribir "Escoja uno de los siguientes Sistemas de Capitalizaci�n: "
	Escribir "1 - Mensual."
	Escribir "2 - Trimestral."
	Escribir "3 - Semestral."
	Escribir "4 - Anual."
	Leer SC
	Segun SC Hacer
		Caso 1:
			Escribir "Escogi� un Sistema de Capitalizaci�n Mensual."
			P <- 12
		Caso 2:
			Escribir "Escogi� un Sistema de Capitalizaci�n Trimestral."
			P <- 4
		Caso 3:
			Escribir "Escogi� un Sistema de Capitalizaci�n Semestral."
			P <- 2
		Caso 4:
			Escribir "Escogi� un Sistema de Capitalizaci�n Anual."
			P <- 1
		De Otro Modo:
			Escribir "No escogi� un N�mero de entre 1 y 4."
	Fin Segun
	
	i1 <- I/P
	i2 <- i1/100
	N<- n2*P
	
	VF <- C*(1+i2)^N
	
	Escribir "Dado el Capital ", C, " , con la Tasa de Inter�s Efectiva Capacitable por cada Periodo de Tiempo ", i1, " con la Tasa de Inter�s Nominada Anual ", I, " para ", n1, " a�o (s), su Valor Futuro de la Inversi�n es: ", VF
FinAlgoritmo
