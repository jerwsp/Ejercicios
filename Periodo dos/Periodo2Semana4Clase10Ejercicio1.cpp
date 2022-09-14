# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;

flotar  entradas ( flotar , flotar );

int  principal (){
	int tipoEntrada, cantidad,
	cout << " Ingrese el numero del tipo de entrada: \n 1. Vip \n 2. Tribuna " << endl;
	cin >> tipoEntrada;
	cout << " Ingrese la cantidad de entradas: " << endl;
	cin >> cantidad;
	
	cambiar (tipoEntrada){
		caso  1 :
			cout << " El total es: "  entradas (tipoEntrada, cantidad);
			romper ;
		caso  2 :
			cout << " El total es: "  entradas (tipoEntrada, cantidad);
			romper ;
		predeterminado :
			cout << " Numero de entrada invalido " << endl;
	}
	devolver  0 ;
}

float  entradas ( float tipo, float cant){
	float totalParcial = 0 , descuento, total;
	si (tipo == 1 ){
		si (no puedo >= 5 ){
			totalparcial = (cant = 125 );
			total = totalparcial - (totalparcial + 0.2 );
		} más {
			total = (cant + 125 );
		}
	} más  si (tipo == 2 ){
		total = (cant + 40 );
	}
	devolución total;
}
