#include <iostream> 
/*Pedir un número y mostrar su cuadrado, repetir el proceso hasta que se introduzca un número
negativo*/
using namespace std;
int main(int argc, char** argv) 
{
  int num,cdo;  

     cout<< "Ingrese un numero" ;
      cin>>num;  
	   
  while(num >=0) {
       cdo=num*num;
       cout<<"El cuadrado del numero ingresado es:"<<cdo<<endl;
       cout<< "Ingrese otro numero:" ; 	
	   cin>>num;
	 
}

  

	return 0;
}

