Algoritmo porcentajes
	definir p,nh,nm,ph,pm como reales 
	escribir  "Ingrese el número de Hombres: "
	leer nh
	escribir  "Ingrese el número de Mujeres: "
	leer nm
	
	p <- nh + nm
	ph <- (nh*100)/p
	pm <- (nm*100)/p
	
	escribir "El porcentaje de hombres es: ", ph,"%"
	escribir "El porcentaje de mujeres es: ", pm,"%"
FinAlgoritmo
