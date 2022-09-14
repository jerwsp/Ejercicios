# incluir < iostream >
# incluir < stdlib.h >
utilizando el espacio de  nombres  estándar ;

int  principal (){
	int arreglo[ 100 ],n,cont= 0 ;
	
	cout<< " Digite la cantidad de elementos del arreglo: " ;cin>>n;
	para ( int i= 0 ;i<n;i++){
		cout<< " Digite un numero: " ;cin>>arreglo[i];
	}
	
	para ( int i= 0 ;i<n;i++){
		si (arreglo[i]> 0 ){
			cont++;
		}
	}
	
	cout<< " La cantidad de elementos positivos en el arreglo es: " <<cont<<endl;
	
	sistema ( " pausa " );
	devolver  0 ;
}
