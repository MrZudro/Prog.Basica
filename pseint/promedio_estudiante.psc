Algoritmo sin_titulo
	escribir "Para matematicas: "
	escribir "Ingrese la nota de su examen: "
	leer exam
	escribir "Ingrese la nota de la tarea 1: "
	leer tar1
	escribir "Ingrese la nota de la tarea 2: "	
	leer tar2
	escribir "Ingrese la nota de la tarea 3: "
	leer tar3
	promtar <- (tar1+tar2+tar3)/3
	calmat<- (exam*0.9)+(promtar*0.1)
	escribir "Para Física: "
	escribir "Ingrese la nota de su examen: "
	leer examf
	escribir "Ingrese la nota de la tarea 1: "
	leer tarf1
	escribir "Ingrese la nota de la tarea 2: "	
	leer tarf2
	promtar2 <- (tarf1+tarf2)/2
	calfis<- (examf*0.8)+(promtar2*0.2)
	escribir "Para programación: "
	escribir "Ingrese la nota de su examen: "
	leer examp
	escribir "Ingrese la nota de la tarea 1: "
	leer tarp1
	escribir "Ingrese la nota de la tarea 2: "	
	leer tarp2
	escribir "Ingrese la nota de la tarea 3: "
	leer tarp3
	promtar3 <- (tarp1+tarp2+tarp3)/3
	calpro<- (examp*0.85)+(promtar3*0.15)
	
	calfinal<-(calmat+calfis+calpro)/3
	escribir "su nota en Matematicas es: ", calmat
	escribir "su nota en Fisica es: ", calfis
	escribir "su nota en Programación es: ", calpro
	escribir "su nota general es: ",calfinal
FinAlgoritmo
