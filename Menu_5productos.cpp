#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	string vOpcion;
	double vCompraTotal=0, vImpTotal=0, vTotalPagar=0;
	
	while (vOpcion != "N" && vOpcion != "n")
	{
		int vCantidad=0,vProducto=0;
		double vImpuesto=0, vTotal=0, vTotalProducto=0, vPrecio=0;
		
	cout<<"\n1.-Camiseta----------------------560.00lps";
	cout<<"\n2.-Chaqueta----------------------1200.00lps";
	cout<<"\n3.-Abrigo de cuero---------------1500.00lps";
	cout<<"\n4.-Pantalon corto----------------250.00lps";
	cout<<"\n5.-Jeans Vaquero-----------------700.00lps";
	
	cout<<"\n\n Seleccione el producto: ";
	cin>> vProducto;
	
	switch (vProducto){
	
	case 1:
		vPrecio=560;
		break;
	  case 2:
		vPrecio=1200;
		break;
	case 3: 
	    vPrecio=1500;
	    break;
	case 4:
		vPrecio=250;
		break;
	case 5:
		vPrecio=700;
		break;
	default:
		cout<<"\n Opci\xa2n seleccionada incorrecta \n\n";
		system("pause");
		system("cls");
		continue;
	}
	cout<<"\nIngrese la cantidad: ";
	cin>>vCantidad;
	
	vTotal= vCantidad*vPrecio;
	vImpuesto= vTotal*15 / 100;
	vTotalProducto= vTotal + vImpuesto;
	
	vCompraTotal += vTotal;
	vImpTotal +=vImpuesto;
	vTotalPagar += vTotalProducto;
	
	cout<<"Total a pagar por el producto seleccionado \n\n";
	cout<< setw(15) << "Total" << setw(15) << "Impuesto" << setw(20) << "Total a Pagar \n";
	cout<<setw(15)<<vTotal<<setw(15)<<vImpuesto<<setw(20)<<vTotalProducto<<"\n";
	
	cout<<"Desea seleccionar otro producto: ";
	cin>>vOpcion;
	system("cls");
}

cout<<"Total facturado \n";

cout<<setw(15)<<"SubTotal"<<setw(15)<<"Impuesto"<<setw(20)<<"Total factura \n";
cout<<setw(15)<<vCompraTotal<<setw(15)<<vImpTotal<<setw(20)<<vTotalPagar <<"\n";

system("pause");

return 0;
}
