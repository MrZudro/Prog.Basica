Algoritmo sin_titulo
	escribir "Escoja dependiendo de la actividad que realice:"
	escribir "1. Dormido"
	escribir "2. Sentado en reposo"
	leer estado
	escribir "Ingrese el tiempo en minutos la actividad que realizó:"
	leer tiempo
	
	Segun estado Hacer
		1:
			cal <- tiempo * 1.08
		2:
			cal <- tiempo * 1.66

		De Otro Modo:
			Escribir "Error [404], Ingrese algo valido, Echeeeee >:("
	Fin Segun
	
	escribir "Las calorias consumidas son: ", cal," Kal"
FinAlgoritmo
