Algoritmo sin_titulo
	definir N, I, VF,c, tim2 Como Real
	definir INT, sc Como Entero
	escribir "Capital a ingresar: "
	leer c
	escribir "Tasa de interes nominal: "
	leer INT
	escribir "Cantidada de a�os del capital en el banco : "
	leer tim
	escribir "Sistemas de capitaliaci�n: "
	escribir "1 - Mensual"
	escribir "2 - Trimestral"
	escribir "3 - Semestral"
	escribir "4 - Anual"
	leer sc

	segun sc hacer
		caso 1:
			escribir "Capitalizaci�n mensual"
			p <- 12
		caso 2: 
			escribir "Capitalizaci�n Trimestral"
			p <- 4
		caso 3:
			escribir "Capitalizaci�n Semestral"
			p <- 2
		caso 4:
			escribir "Capitalizaci�n Anual"
			p <- 1
		De Otro Modo:
			escribir "Ingrese un valor valido"
	FinSegun
	I<-INT/p
	i2 <- INT/100
	N <-tim*p
	
	VF<- (C*((1+i2)^N))
	
	escribir "El valor futuro es: ", VF
	Escribir "Capital: ", c
	Escribir "I: ", I
	Escribir "Tasa de interes: ", INT
	Escribir "Tiempo: ", tim
	Escribir "N: ", N
	escribir "P es: ", p

	
FinAlgoritmo
