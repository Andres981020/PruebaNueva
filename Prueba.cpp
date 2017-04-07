#include <iostream>

using namespace std;

int main(){
	
	int n;
	int matriz1[4][4];
	int matriz2[4][4];
	int resultado[4][4];

	//cout << "Introduzca el tamaño de la matriz" << endl;
	//cin >> n;
	//Primer comentario modificado con el codigo
		
	for(int i=1; i<3; i++){
		for(int j=1; j<4; j++){
			cout << "Introduzca el valor de las filas..."; i+1;
			cout << "introduzca el valor de las colimnas..." ; j+1;
			
				cin >> matriz1[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << "Introduzca el valor de las filas..."; i+1;
			cout << "introduzca el valor de las colimnas..." ; j+1;	
				
				cin >> matriz2[i][j];
				
			resultado[i][j] = matriz1[i][j]*matriz2[i][j];
		}
	}
	cout << "Los resultados son: ";
	
	for (int i=0; i<10; i++){
		for(int j=0; j<n; j++){
		
		cout << matriz1[i][j] << "*" << matriz2[i][j] << "=" << resultado[i][j] << endl;
		}
	}	
}
