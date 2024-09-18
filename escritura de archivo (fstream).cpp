#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	fstream archivo("C:\\Users\\PROGRAMACION\\Desktop\\hola.txt", ios::out); //cambiar nombre: PROGRAMACION
	
	if (archivo.is_open()) {
		archivo << "Escribiendo con fdtream. \n";
		archivo.close();
		cout<< "archivo creado y datos escritos exitosamente."<<endl;
	}else{
		cerr<< " NO se pudo abrir el archivo para escritura." <<endl;
	}
	return 0;
}
