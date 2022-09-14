# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;

int  principal (){
	nota flotante ;
	int mayor = 0 ;
	int menor = 0 ;
	para ( int i = 1 ; i<= 5 ;i++){
		cout << " ingrese la nota: " ;
		cin >> nota;
		si (nota >= 7 ){
			alcalde = alcalde + 1 ;
		} más {
			menor = menor + 1 ;
		}
		
	}
	cout << " la cuenta de mayores o iguales a 7 es: " << mayor << endl;
	cout << " la cuenta de menores a 7 es: " << menor << endl;
}
