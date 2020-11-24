Algoritmo MCD
	
	definir a,b,c,aux1,aux2,aux3,resdu,resd2,resd3 Como Entero
	Escribir "Bienvenido."
	
	repetir
	escribir "Ingrese el primer número a evaluar: "
	leer a
	Hasta Que a >0
	
	repetir
	escribir "Ingrese el segundo número a evaluar: "	
	leer b
	Hasta Que b >0
	
	repetir
	escribir "Ingrese el tercer número a evaluar: "	
	leer c 
	Hasta Que c >0

	Si b>a Entonces
		aux1=b
		b=a
		a=aux1
	fin si
	Si c>a Entonces
	aux2=c
		c=a
		a=aux2
	fin si 
	Si c>b Entonces
		aux3=c
		c=b
		b=aux3
	fin si
	resdu=a mod b
	resd2=a mod c 
	resd3=b mod c 
	escribir "residuo1: ", resdu
	escribir "residuo2: ", resd2
	escribir "residuo3: ", resd3
	Mientras resdu>0 Hacer
		aux1=b
		b=resdu
		a=aux1
		resdu= a mod b
	FinMientras
	Mientras resd2>0 Hacer
		aux2=c
		c=resd2
		a=aux2
		resd2= a mod c 
	FinMientras
	Mientras resd3>0 Hacer
		aux3=c
		c=resd3
		b=aux3
		resd3= b mod c 
	FinMientras
	escribir "el maximo comun divisor del numero 1 y el numero 2 es: ",b
	escribir "el maximo comun divisor del numero 1 y el numero 3 es: ",c
	escribir "el maximo comun divisor del numero 2 y el numero 3 es: ",c


	
FinAlgoritmo
