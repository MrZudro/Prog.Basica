Algoritmo m_a_s_a
	escribir "Ingrese la presión: "
	leer pr
	escribir "Ingrese el volumen: "
	leer vol
	escribir "Ingrese la temperatura: "
	leer tem
	
	masa <- (pr*vol)/(0.37*(tem+460))
	
	escribir "La masa es: ", masa
	
FinAlgoritmo
