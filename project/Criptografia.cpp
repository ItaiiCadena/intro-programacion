/*
Autor: Pérez Cadena Britany Itaii
*/
#include <iostream>
#include <string.h>
#include <cstring> 
using namespace std;

class Criptograma{
	private:
		char alfMinus[26]; //Declaración de arreglo para alfabeto en MINUSCULAS
	 	char alfMayus[26]; //Declaración de arreglo para alfabeto en MAYUSCULAS
	public:
		//Prototipos de funciones
		Criptograma(); //Constructor
		//funcines VOID (solo haran cambios en el sistema)
		void cifradoSustitucionSimple(char texto[], int clave, int tam);
		void descifradoSustitucionSimple(char texto[], int clave, int tam);
		void cifradoCesar(char texto[],int tam);
		void descifrarCesar(char texto[], int tam);
		void cifradoPolialfabetico(char texto[], int clave1, int clave2, int tam);
		void descifradoPolialfabetico(char texto[], int clave1, int clave2, int tam);
};

int main(){
	char cadena[100], dummy; //Declarión de arreglo para el texto, dummy para "comerse" los \n antes del siguente get
	int opcion,tam;
	cout << "Ingrese una oracion:" << endl;
	cin.get(cadena,100); //lee la cadena que ingresa el usuario
	cin.get(dummy);
	tam = strlen(cadena); //strlen es para obtener la longitud de nuestra cadena, tam es para guardar dicho valor
	
	Criptograma ejemplo; //creacion del objeto con el constructor
	
	do{ //comienza menu principal
		cout << "    --ELIJA UNA OPCION DE ENCRIPTACION--" << endl;
		cout << "      	 1: Sustitucion simple." << endl;
		cout << "      	 2: Cifrado de Cesar." << endl;
		cout << "      	 3: Cifrado Polialfabetico." << endl;
		cout << "      	 0: Salir." << endl;
		cin >> opcion;
		cin.get(dummy); //dummy se "come" los \n antes de leer otro dato
		
		switch(opcion){
			case 1:
				int o,clave;
				do{ //menu secundario 1
					cout << "  *CIFRADO POR SUSTITUCION SIMPLE*" << endl;
					cout << "      1: Cifrar" << endl;
					cout << "      2: Descifrar" << endl;
					cout << "      3: Cifrar nueva oracion" << endl;
					cout << "      4: Descifrar nueva oracion" << endl;
					cout << "      0: Salir" << endl;
					cin >> o;
					cin.get(dummy);
					switch (o){
						case 1:
							cout << "Ingrese clave: "; 
							cin>> clave;
							cin.get(dummy);
							if(clave>26){ //Optimizacion de codigo
								clave = clave%26; //para no hacer todo el recorrido en el arreglo
							}
							ejemplo.cifradoSustitucionSimple(cadena,clave,tam); //paso de parametros
						break;
						case 2:
							ejemplo.descifradoSustitucionSimple(cadena,clave,tam);
						break;
						case 3:
							char cad[100]; //creacion de nuevo arreglo
							int cl, lon;
							cout << " Ingrese una oracion" << endl;
							cin.get(cad,100);
							cin.get(dummy);
							cout << " Ingrese clave" << endl;
							cin >> cl;
							if(cl>26){
								cl = cl%26;
							}
							cin.get(dummy);
							lon = strlen(cad);
							ejemplo.cifradoSustitucionSimple(cad,cl,lon);
						break;
						case 4:
							char cad1[100];
							int _cl, longi;
							cout << " Ingrese una oracion" << endl;
							cin.get(cad1,100);
							cin.get(dummy);
							cout << " Ingrese clave" << endl;
							cin >> _cl;
							if(_cl>26){
								_cl = _cl%26;
							}
							cin.get(dummy);
							longi = strlen(cad1);
							ejemplo.descifradoSustitucionSimple(cad1,_cl,longi);
						break;
					}
				}
				while(o != 0);
			break;
			case 2:
				int op;
				do{ //menu secundario 2
					cout << "  *CIFRADO CESAR*" << endl;
					cout << "      1: Cifrar" << endl;
					cout << "      2: Descifrar" << endl;
					cout << "      3: Cifrar nueva oracion" << endl;
					cout << "      4: Descifrar nueva oracion" << endl;
					cout << "      0: Salir" << endl;
					cin >> op;
					cin.get(dummy);
					switch (op){
						case 1:
							ejemplo.cifradoCesar(cadena,tam);
						break;
						case 2:
							ejemplo.descifrarCesar(cadena,tam);
						break;
						case 3:
							char cad2[100];
							int tama;
							cout << " Ingrese una oracion" << endl;
							cin.get(cad2,100);
							cin.get(dummy);
							tama = strlen(cad2);
							ejemplo.cifradoCesar(cad2,tama);
						break;
						case 4:
							char cad3[100];
							int tama1;
							cout << " Ingrese una oracion" << endl;
							cin.get(cad3,100);
							cin.get(dummy);
							tama1 = strlen(cad3);
							ejemplo.descifrarCesar(cad3,tama1);
						break;
					}
				}
				while(op != 0);
			break;
			case 3:
				int opc, cl1, cl2;
				do{ //munu secundario 3
					cout << "  *CIFRADO POLIALFABETICO*" << endl;
					cout << "      1: Cifrar" << endl;
					cout << "      2: Descifrar" << endl;
					cout << "      3: Cifrar nueva oracion" << endl;
					cout << "      4: Descifrar nueva oracion" << endl;
					cout << "      0: Salir" << endl;
					cin >> opc;
					cin.get(dummy);
					switch (opc){
						case 1:
							cout << " Ingrese clave 1 y 2: "<< endl;
							cin >> cl1 >> cl2;
							if(cl1>26){
								cl1 = cl1%26;
							}
							if(cl2>26){
								cl2 = cl2%26;
							}
							cin.get(dummy);
							ejemplo.cifradoPolialfabetico(cadena,cl1,cl2,tam);
						break;
						case 2:
							ejemplo.descifradoPolialfabetico(cadena,cl1,cl2,tam);
						break;
						case 3:
							char cad4[100];
							int clav1, clav2, tama2;
							cout << " Ingrese una oracion" << endl;
							cin.get(cad4,100);
							cin.get(dummy);
							cout << " Ingrese clave 1 y 2" << endl;
							cin >> clav1 >> clav2;
							if(clav1>26){
								clav1 = clav1%26;
							}
							if(clav2>26){
								clav2 = clav2%26;
							}
							cin.get(dummy);
							tama2 = strlen(cad4);
							ejemplo.cifradoPolialfabetico(cad4,clav1,clav2,tama2);
						break;
						case 4:
							char cad5[100];
							int _clav1, _clav2 ,tama3;
							cout << " Ingrese una oracion" << endl;
							cin.get(cad5,100);
							cin.get(dummy);
							cout << " Ingrese clave 1 y 2" << endl;
							cin >> _clav1 >> _clav2;
							if(_clav1>26){
								_clav1 = _clav1%26;
							}
							if(clav2>26){
								clav2 = clav2%26;
							}
							cin.get(dummy);
							tama3 = strlen(cad5);
							ejemplo.descifradoPolialfabetico(cad5,_clav1,_clav2,tama3);
						break;
					}
				}
				while(opc != 0);
			break;
			case 0:
			 	cout <<"----Programa terminado----" << endl;
			break;
			default: //opcion por defecto
				cout << "Opcion invalida, ingrese de nuevo" << endl;
			break;		
		}
	}
	while(opcion != 0); //se ejecutara el menu hasta que la opcion que elija en usuario sea distinta de 0
	return 0;
}

	//CONTRUCCION DE FUNCIONES OFFLINE
 	Criptograma::Criptograma(){ //Constructor
 		char _alfMinus[] = "abcdefghijklmnopqrstuvwxyz"; //arreglos que contienen los alfabetos
 		char _alfMayus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 	 	strcpy(alfMinus,_alfMinus); //strcpy copia una cadena a otra cadena en este caso vacia
 	 	strcpy(alfMayus,_alfMayus); // asi podremos utilizar ambos arreglos dentro de las funciones
 	 	
 	}
 	
	void Criptograma::cifradoSustitucionSimple(char texto[], int clave, int tam){
		int j; // para recorrido en los alfabetos
		for(int i=0; i<tam; i++){ //recorrido en la cadena introducida por el usuario
			j=0;
			while(j<26){
				if(texto[i]==alfMinus[j] && j<26-clave){ //cifrado en letras minusculas
					texto[i] = alfMinus[j+clave]; //cambio para cifrar formula 1
					j=26;
				}
				if(texto[i]==alfMinus[j] && j>=26-clave){
					texto[i] = alfMinus[j-(26-clave)]; //cambio para cifrar formula 2
					j=26;
				}
				if(texto[i]==alfMayus[j] && j<26-clave){ //cifrado en letras mayusculas
					texto[i] = alfMayus[j+clave]; 
					j=26;
				}
				if(texto[i]==alfMayus[j] && j>=26-clave){
					texto[i] = alfMayus[j-(26-clave)];
					j=26;
				}
			j++;
			}
		}
		cout << "El texto cifrado es: " << texto << endl; //imprime texto ya cifrado
		cout << endl;
	}
	
	void Criptograma::descifradoSustitucionSimple(char texto[], int clave, int tam){
		int j;
		for(int i=0; i<tam; i++){
			j=0;
			while(j<26){
				if(texto[i]==alfMinus[j] && j<clave){ //descifrado en minusculas
					texto[i] = alfMinus[j+(26-clave)]; //cambios para descifrar formula 2
					j=26;
				}
				if(texto[i]==alfMinus[j] && j>=clave){
					texto[i] = alfMinus[j-clave]; //cambios para descifrar formula 1
					j=26;
				}
				if(texto[i]==alfMayus[j] && j<clave){ //descifrado en mayusculas
					texto[i] = alfMayus[j+(26-clave)]; 
					j=26;
				}
				if(texto[i]==alfMayus[j] && j>=clave){
					texto[i] = alfMayus[j-clave];
					j=26;
				}
			j++;
			}
		}
		cout << "El texto descifrado es: " << texto << endl; //imprime cadena descifrada
		cout << endl;
	}
	
	void Criptograma::cifradoCesar(char texto[], int tam){ //en este caso solo necesitamos la cadena y el tamaño
		//llamamos a la funcion de sustitucion simple y en clave le agregamos 3 para cifrado de cesar
		cifradoSustitucionSimple(texto,3,tam); 
	}
	
	void Criptograma::descifrarCesar(char texto[], int tam){ //En este caso solo necesitamos cadena y tamaño
		descifradoSustitucionSimple(texto,3,tam); 
	}
	
	void Criptograma::cifradoPolialfabetico(char texto[], int clave1, int clave2, int tam){
		int j;
		for(int i=0; i<tam; i++){
			if(i%2==0){ //para letras en posicion par ejecutara el codigo siguiente
				j=0;
				while(j<26){
					if(texto[i]==alfMinus[j] && j<26-clave1){ //cifrado minusculas
						texto[i] = alfMinus[j+clave1];
						j=26;
					}
					if(texto[i]==alfMinus[j] && j>=26-clave1){
						texto[i] = alfMinus[j-(26-clave1)];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j<26-clave1){ //cifrado mayusculas
						texto[i] = alfMayus[j+clave1];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j>=26-clave1){
						texto[i] = alfMayus[j-(26-clave1)];
						j=26;
					}
				j++;
				}
			}
			else{ //cifrado para posiciones impares
				j=0;
				while(j<26){
					if(texto[i]==alfMinus[j] && j<26-clave2){ //cifrado minusculas
						texto[i] = alfMinus[j+clave2];
						j=26;
					}
					if(texto[i]==alfMinus[j] && j>=26-clave2){
						texto[i] = alfMinus[j-(26-clave2)];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j<26-clave2){ //cifrado mayusculas
						texto[i] = alfMayus[j+clave2];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j>=26-clave2){
						texto[i] = alfMayus[j-(26-clave2)];
						j=26;
					}
				j++;
				}
			}
	
		}
		cout << "El texto cifrado es: " << texto << endl; //imprime texto cifrado con ambos alfabetos de diferentes claves
		cout << endl;
	}
	
	void Criptograma::descifradoPolialfabetico(char texto[], int clave1, int clave2, int tam){
		int j;
		for(int i=0; i<tam; i++){
			if(i%2==0){ //descifrado para posiciones pares
				j=0;
				while(j<26){
					if(texto[i]==alfMinus[j] && j<clave1){ //descifrado minusculas
						texto[i] = alfMinus[j+(26-clave1)];
						j=26;
					}
					if(texto[i]==alfMinus[j] && j>=clave1){
						texto[i] = alfMinus[j-clave1];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j<clave1){ //descifrado mayusculas
						texto[i] = alfMayus[j+(26-clave1)];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j>=clave1){
						texto[i] = alfMayus[j-clave1];
						j=26;
					}
				j++;
				}
			}
			else{ //descifrado para posiciones impares
				j=0;
				while(j<26){
					if(texto[i]==alfMinus[j] && j<clave2){ //descifrado minusculas
						texto[i] = alfMinus[j+(26-clave2)];
						j=26;
					}
					if(texto[i]==alfMinus[j] && j>=clave2){
						texto[i] = alfMinus[j-clave2];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j<clave2){ //descifrado mayusculas
						texto[i] = alfMayus[j+(26-clave2)];
						j=26;
					}
					if(texto[i]==alfMayus[j] && j>=clave2){
						texto[i] = alfMayus[j-clave2];
						j=26;
					}
				j++;
				}
			}
		}
		cout << "El texto descifrado es: " << texto << endl; //imprime texto descifrado por ambos alfabetos con diferentes clave
		cout << endl;
	}