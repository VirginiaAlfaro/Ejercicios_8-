#include<iostream>
using namespace std;
int main(){
	int nota1,nota2,nota3,nota4, promedio;
	float promedio_final;
cout<<"Ingrese su Nota de Ciencias Naturales del Primer Parcial: \n";
cin>>nota1;
cout<<"Ingrese su Nota de Ciencias Naturales del Segundo Parcial: \n";
cin>>nota2;
cout<<"Ingrese su Nota de Ciencias Naturales del Tercer Parcial: \n";
cin>>nota3;
cout<<"Ingrese su Nota de Ciencias Naturales del Cuarto Parcial: \n";
cin>>nota4;
promedio=nota1+nota2+nota3+nota4;
promedio_final= promedio/4;

cout<<"Su promedio final es: "<<promedio_final;

return 0;
}
