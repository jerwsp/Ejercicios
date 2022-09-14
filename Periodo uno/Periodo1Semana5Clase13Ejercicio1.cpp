# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;

int  principal (){
	cuerda de diámetro;
	cout << " Ingrese un dia de la semana: " ;
	cin >> dia;
	if (dia == " sabado "  o dia == " Sabado "  o dia == " SABADO " ){
		cout << " Feliz fin de semana " << endl;
	} else  if (dia == " domingo "  o dia == " Domingo "  o dia == " DOMINGO " ){
		cout << " Feliz descanso " ;
	} más {
		cout << " No es un dia valido " ;
	}
}
