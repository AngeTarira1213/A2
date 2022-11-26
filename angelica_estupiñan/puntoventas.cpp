//programa de punto venta
//creado por:angelica estupiñan
#include<iostream>//se utiliza para poder ingresar a la libreria
using namespace std;//para utilizar comandos de cout, cin y std
int main()//cuerpo de programa inicio y final 
{      
  
      float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;//utilizamos para declarar variables de x,s, vb, piva,viva
      int i=0,l;//decalramos variables del contador que es el i 
      cout<<"ingrese l:  ";cin>>l;//mensaje para el usuario en pantalla 
    	do{ //hacer o mientra que la condicion cumpla
         cout<<"ingrese x:  ";cin>>x;//mensaje al usuario para que ingrese un valor para x
	i=i+1;//variavle del contador general
	s=s+x;//variable del acumulador general 
	
	}while(i<l);//ejecuta un elemento
	 vb=s;//variable del vb general 
	viva=vb*piva/100;//variable de viva general
	vdesc=vb*pdesc/100;//variable de vdesc general
	vn=vb+viva-vdesc;//variable de vn general
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;//mensaje del resultado final por pantalla
	return 0;//finaliza el programa

	}

