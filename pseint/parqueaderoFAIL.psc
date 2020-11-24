Algoritmo Parqueadero
	
	definir des, plc Como Caracter
	definir hora,minuto,segundoss Como Entero
	
	escribir "Placa del vehiculo: "
	leer plc
	escribir "Descripción del vehiculo: "
	leer des
	escribir "Hora de ingreso del vehiculo: "

	Escribir "Dame la hora actual "
	leer hora1
	Escribir "Dame los minutos "
	leer minuto1
	Escribir "Dame los segundos"
	leer segundos1
	si hora1 = 24 Entonces
		hora1 <- 0
		si hora1 <= 9 Entonces
			escribir "0",hora1 sin saltar
		SiNo
			escribir hora1
		FinSi
	FinSi
	si minuto1 > 59 entonces
		minuto1 <- 0
		si minuto1 <= 9 entonces 
			escribir ":0",minuto1 sin saltar
		SiNo
			escribir ":",minuto1
		FinSi
	FinSi
	si segundos1 < 59 entonces
		segundos1 <- 0
		si segundos1 <= 9 entonces 
			escribir ":0", segundos1 Sin Saltar
		SiNo
			escribir ":",segundos1 Sin Saltar
		FinSi
	FinSi
	
	escribir "Hora de salida del vehiculo: "

	Escribir "Dame la hora actual "
	leer hora2
	Escribir "Dame los minutos "
	leer minuto2
	Escribir "Dame los segundos"
	leer segundos2
	si hora2 = 24 Entonces
		hora2 <- 0
		si hora2 <= 9 Entonces
			escribir "0",hora2 sin saltar
		SiNo
			escribir hora2
		FinSi
	FinSi
	si minuto2 > 59 entonces
		minuto2 <- 0
		si minuto2 <= 9 entonces 
			escribir ":0",minuto2 sin saltar
		SiNo
			escribir ":",minuto2
		FinSi
	FinSi
	si segundos2 < 59 entonces
		segundos2 <- 0
		si segundos2 <= 9 entonces 
			escribir ":0", segundos2 Sin Saltar
		SiNo
			escribir ":",segundos2 Sin Saltar
		FinSi
	FinSi
	hrf <- hora1 - hora2
	minf <- minuto1 - minuto2
	segundf <- segundo1-segundo2
	
	si tiemp <= 3.00 entonces
		
	FinSi
	

	
FinAlgoritmo
