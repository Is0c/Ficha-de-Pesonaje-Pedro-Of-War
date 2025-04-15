#include <iostream>
using namespace std;
int main () {
    float x;
	float respuestas;
	cout<<"ingrese la cantidad de respuestas acertadas";
	cin>>respuestas;
	cout<<"ingrese el total de respuestas";
	cin>>x;
	int porcentaje;
	//cout<<"el porcentaje de tus respuestas acertadas es tu porcentaje final";
	porcentaje=(respuestas/x*100);
    cout<<"el porcentaje de tus respuestas acertadas es:"<<porcentaje;

    if(porcentaje>=90){
    cout<<"porcentaje maximo";}
    else if((porcentaje>=75)&&(porcentaje<90)){
    cout<<"porcentaje medio";}
    else if((porcentaje>=50)&&(porcentaje<75)){
    cout<<"porcentaje regular";}
    else if(porcentaje<50)
    cout<<"fuera de nota";

return 0;}
