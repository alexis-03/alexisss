#include <iostream>

/* Pedir un número entero, pero solo se aceptan numero no pares, una ves que se ha capturado el número se tendré 
que mostrar un mensaje donde se indique  si es positivo o negativo. */
 using namespace std;
int main(int argc, char** argv)
 {

 int num ;  
   cout << "ingresa un numero: "; 
      cin>>num ; 
 
 if( num < 0 )
     
     {
   cout<<"el numero que ingreso es negativo";
                 
      }
 else
  if( num >= 0)
                  
        {
   cout<<"el numero que ingreso es positivo";

   }
 	return 0;
}




 
 
