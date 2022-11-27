//programa de mayor promedio
//Creado por: angelica estupiñan
#include<iostream>//llama o incorpora la libreria en nuestro programa a ejecutar
using namespace std;//utilizamos para ejecutar el cout y cin y std
int main()//es el cuerpo del programa

{
	float x,pm=0;//declaramos variables de x y pm por float
	int i=0,l;//declaramos el contador como entero 
	cout<<"ingrese l: "; cin>>l;//se muestra al usuario para que ingrese un valor para l y lo guardamos con el cin
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.

	cout<<"ingrese x:  "; cin>>x;//mensaje al usuario que ingrese un valor para x y lo guardamos
	i=i+1;//escribimos el contador general que es i
	if(x>pm){//utilizamos para evaluar si la condicion cumple verdadero

		pm=x;//escribimos pm general

	}
 
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"el promedio maximo del curso fue:  "<<pm<<endl<<endl;//se muestra al usuario el resultado del pm en pantalla
	return 0;//finaliza la ejecucion del programa

}
