# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;

int  principal () {
	
	cout << " Ingrese el numero de un mes (1, 2, 3,...) : " ;
	ent mes;
	cin >> mes;
	
	si ( mes > 0 && mes < 13 )
		if ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 )
			cout << " El mes tiene 31 dias. \n " ;
			
		más  si ( mes == 2 )
			cout << " El mes tinen 28 o 29 dias. \n " ;
		
		otra cosa  si ( mes == 4 || mes == 6 || mes == 9 || mes == 11 )
			cout << " El mes tiene 30 dias. \n " ;
		
		más
			cout << " Error. \n " ;
	más 
	cout << " El valor introducido no es valido. \n " ;
	
}
