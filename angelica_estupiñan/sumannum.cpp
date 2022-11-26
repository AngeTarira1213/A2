 //programa de suma de varios numeros 
 //creado por: angelica estupiñan
 #include<iostream>//libreria de entrada y salida
 using namespace std;//utilizamos  para los comando de cin, cout y de std

 int main()//cuerpo del programa inicio 
 { 
         
         float x=0,s=0;//declaramos todas la variables x,s 
         int i=0,l; //variable del contador i
         cout<<"ingrese el valor de l:  ";//se muestra el mensaje al usuario por pantalla
         cin>>l; // guardamos con el cin el l
	 //utilizamos para hacer repeticiones, hasta que cumpla la condicion.
         do{ 
         cout<<"ingrese el valor de x:  ";//mensaje para que el usuario ingrese un valor de x 
         cin>>x;//guardamos el valor ingresado por el usuario 
         i=i+1;//variable del contador general
         s=s+x; //variable del acumulador general
          //utilizamos para ejecutar elementos hasta que la condicion finalize
         }while(i<l); 
         cout<<"la suma de los numeros fue:  "<<s<<endl;//se muestra el resultado final al usuario 
         return 0;//finaliza la ejecucion

 }
