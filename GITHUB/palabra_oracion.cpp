#include<iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(){
	string oracion;
	cout<<"ingrese una oracion"<<endl;
	getline(cin, oracion);
	int cantidad=oracion.size();
	int espacio=0;
	for(int i=0;i<cantidad;i++) {
		if(oracion.at(i)==' '){
			espacio++;
		}
}

	cout<<"la oracion contiene "<<espacio+1<<" palabras";
	return 0;
}
