# incluir  < iostream >
# incluir  < stdlib.h >
# include  < conio.h >
utilizando el espacio de  nombres  estándar ;

int  principal (){
	int cantidad = 0 ;
	char opcion = '  ' ;
	float precio = 0 , total = 0 ;
	cout << " \n\t ******************************** " << endl;
	cout<< " \t * BIENVENIDO AL ESTADIO CUSCATLAN * " <<endl;
	cout<< " \t ************************************ " << endl;
	cout<< " \t * Sectores del estadio * " <<endl;
	cout<< " \t * A - Sol general * " <<endl;
	cout<< " \t * B - Sol preferente * " <<endl;
	cout<< " \t * C - Sombra * " <<endl;
	cout<< " \t *D - Tribuna* " <<endl;
	cout<< " \t * E - Platea* " <<endl;
	cout<< " \t ************************************ " <<endl;
	cout<< " \n\t Selecciona la letra del sector del estadio : " ;
	opción = obtener ();
	cout<< " \n\t Selecciona la cantidad de entradas requeridas: " ;
	cin>>cantidad;
	si (cantidad< 1 ){
		cout<< " \n\t\a ERROR: Cantidad de entradas debe ser mayor que 1 " <<endl;
	    sistema ( " PAUSA " );
	    devolver  0 ;
	}
	sistema ( " cls " );
cambiar (opcion){
	caso   ' A ' : caso   ' a ' :
		cout<< " \n\t Sector seleccionado: Sol general " << endl;
		precio= 3 ;
		romper ;
	caso   ' B ' : caso   ' b ' :
		cout<< " \n\t Sector seleccionado: Sol preferente " << endl;
		precio= 5 ;
		romper ;
	caso   ' C ' : caso   ' c ' :
		cout<< " \n\t Sector seleccionado: Sombra " << endl;
		precio= 8 ;
		romper ;
	caso   ' D ' : caso   ' d ' :
		cout<< " \n\t Sector seleccionado: Tribuna " << endl;
		precio= 15 ;
		romper ;	
	caso   ' E ' : caso   ' e ' :
		cout<< " \n\t Sector seleccionado: Platea " << endl;
		precio= 20 ;
		romper ;
	sordo:
	cout<< " \n\t\a ERROR: El sector seleccionado no existe " <<endl;
	sistema ( " PAUSA " );
	devolver  0 ;			
}
total=precio*cantidad;
cout<< " \t Precio unitario: $ " <<precio<<endl;
cout<< " \t Cantidad de entradas: " <<cantidad<<endl;
cout<< " \t TOTAL A PAGAR: $ " <<total<<endl;
cout<< " \n\n\t GRACIAS POR VISITARNOS! " <<endl;
sistema ( " PAUSA " );
}
