#include<iostream>
using namespace std;
bool sumaPrimo(int x,int y);
bool esPrimo(int num);
int main(){
	int a,b;
	
	cout<<"introduzca dos numeros:"<<endl;
	cin>>a>>b;
	
	if(sumaPrimo(a,b)) cout<<"La suma de los dos numeros es "<<a+b<<" y es primo"<<endl;
	else cout<<"La suma de los dos numeros es "<<a+b<<" y no es primo"<<endl;
	
	return 0;
}

bool sumaPrimo(int x,int y){
	if(esPrimo(x+y)) return true;
	else return false;
}

bool esPrimo(int num){
	int contador = 0;
	for(int i=1;i<(num+1);i++)
		if(num%i==0) contador++;
	if(contador!=2) return 0;
	else return 1;
}
