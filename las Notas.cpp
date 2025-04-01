#include <iostream>
using namespace std;
int main () {
	cout<<"ingresar nombre y apellido del alumno";
	cout<<"ingesar curso del alumno";
	int num1;
	int num2;
	int num3;
	int promedio;
	cout<<"ingresar primer nota";
	cin>>num1;
	cout<<"ingresar segunda nota";
	cin>>num2;
	cout<<"ingresar tercera nota";
	cin>>num3;
 num1+num2+num3;
	promedio=rts/3;
	if(promedio>=7)
	{
		cout<<("Tea");
	}
	else if(promedio>=4&&<=7)
	{
		cout<<("Tep");
	}
	else if(promedio<=4)
	{
		cout<<("Ted");
	}
	if(trimest<=7)
	{
		cout<<"si la nota de cada trimestre es = o < a 7 aprueba";
	}
	else
	{
		cout<<"si la nota es mayor 5 y inferior a 7 el alumno podra intencificar el trimestre";	
}
	
    
    
	return 0;
}
