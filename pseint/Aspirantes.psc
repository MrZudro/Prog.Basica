Algoritmo Aspirantes
	
	definir nombre, programa, respuesta como cadena
	definir codigo, edad, estatura, act, ad, rec como entero
	definir promedio Como Real
	definir admitido como logico
	
	escribir "Numero de estudiantes a ingresar: "
	leer act
	
	Para i <-1 hasta act Con Paso 1  Hacer
		Escribir "Ingrese su nombre: "
		leer nombre
		Escribir "Ingrese su codigo estudiantil: "
		leer codigo
		Escribir "Ingrese su programa: "
		leer programa
		Escribir "Ingrese su edad: "
		leer edad
		Escribir "Ingrese su peso (KG): "
		leer peso
		Escribir "Ingrese su estatura (CM): "
		leer estatura
		Escribir "Ingrese su promedio acumulado: "
		leer promedio
		
		admitido<-Falso
		si (edad <= 18) y (peso <= 60) Y (estatura >=  180) y (promedio >= 4.5) entonces 
			admitido <- verdadero
		FinSi
		
		si admitido = verdadero Entonces
			respuesta <- "Admitid@"
			ad <- ad +1
		SiNo
			respuesta <- "rechazad@"
			rec <- rec +1
		FinSi
		
		escribir "El(La) estudiante: ", nombre, " fue ", respuesta
	FinPara
	
	escribir "Total de estudiantes que se presentaron: ", act
	escribir "Total de estudiantes que fueron admitidos: ", ad
	escribir "Total de estudiantes que fueron rechazados: ", rec
FinAlgoritmo
