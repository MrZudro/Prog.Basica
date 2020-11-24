Algoritmo Alumno_1
	Definir p1,p2,p3,nf,tf, Notf, parf como reales
	
	escribir  "Ingrese su nota parcial (1): "
	leer p1
	escribir  "Ingrese su nota parcial (2): "
	leer p2	
	escribir  "Ingrese su nota parcial (3): "
	leer p3
	escribir  "Ingrese su nota del examen final: "
	leer nf
	escribir  "Ingrese la nota de su trabajo final: "
	leer tf
	
	parf <- ((p1 + p2 + p3)/3)*0.55
	Notf <-parf + (nf * 0.30) + (tf * 0.15)
	
	escribir  "Su nota final es: ", Notf
FinAlgoritmo
