#include <iostream>
using namespace std;
#include "cabecera.h"
///Directivas 
#ifndef numeroPi ///Si numero pi no esta definido
#define numeroPi 3.1415 ///Lo definira asi
#endif //Cierre del if
int main()
{
	cout << "Numero PI: " << numeroPi  << endl;
	return 0;
}