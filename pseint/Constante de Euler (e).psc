Algoritmo Constante_Of_Euler
	definir num, fac, e como real
	fac <- 1
	escribir "Ingrese el número: "
	leer num
	para i<-1 hasta num con paso 1 Hacer
		fac <- fac * i
		e <- e+(1/fac)
	FinPara
	e <- e+1
	escribir "El factorial de ", num, " es: ", fac
	escribir "El enecimotermino es: ", e
FinAlgoritmo


//para i<-1 hasta num con paso 1 hacer 
//	e<- 1+(1/fac)
//FinPara

