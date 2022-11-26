//programa de saldo final
//Creado por:angelica estupiñan
#include<iostream>//permite la entrada y salida  de datos en la libreria.
using namespace std;// para utilizar cin, cout y  std.
int main()//el cuerpo del programa.


{
	float x,s=0;//declaramos variables de x y s en cero los dos 
	int i=0,l;//utilizamos el i como el contador en variable
	cout<<"ingrese cantidad de egreso (l):  ";// mensaje al asuario en pantalla para que ingrese una cantidad de l
		cin>>l;//guardamos la cantidad ingresado por el usuario anteriormente
        cout<<"ingrese saldo inicial (s):  ";//el usuario que ingrese un valor para s.
	cin>>s;//guardamos el valor ingresado por el usuario 
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.
	
	cout<<"ingrese egreso (x):  ";// el usuario  puede  ver el mensaje por pantalla
	cin>>x;//guardamos valor ingresado de x por el usuario
	i=i+1;//escribimos el contador general de i
	s=s+x;//escribimos el acumulador general de s
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"el saldo final es:  "<<s<<endl;//se muestra el mensaje al usuario del resultado por pantalla
	return 0;//finaliza el programa o la ejecucion

}
