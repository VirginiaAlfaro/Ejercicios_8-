#include<iostream>
using namespace std;
int main(){
int i,divisor = 1, divisores = 0, num = 0;
cout<<"Ingrese un numero: ";
cin>>num;
	for(i=1;i<=num;i++)
{
if(num % divisor == 0){
divisores++;
}
divisor++;
}while(divisor <= num);
if(divisores == 2){
cout<<"El numero "<<num<<" es PRIMO.";
}else{
cout<<"El numero "<<num<<" NO es PRIMO.";
}
		return 0;
	}


