#include <iostream>

/*Pedir dos números cualquiera, por ejemplo 15 y 10, mostrar un mensaje que especifique cual es el mayor y cuál es el menor*/

using namespace std;


int main(int argc, char** argv)
 {
 int num1 , num2 ,i;
 
 cout<<"ingrese su primer numero"<<endl;
 cin>>num1;
 
 cout<<"ingrese su segundo numero"<<endl;
 cin>>num2;
 
 if(num1>num2)
 {
 	cout<<"numero mayor es"<<num1<<endl;
 	
  }
  
  else 
  if(num2<num1)
  {
  	
  	cout<<"numero menor es "<<num1<<endl;
  	
  }
  
  if (num1>num2)
  {
  	cout<<"el numero mayor es "<<num2<<endl;
  }
  else if(num2<num1)
  {
  cout<<"el numero menor es "<<num2<<endl;
  }

for (int i=num1; i<num2; i++){

cout<<"el rango de valores es"<<i<<endl;

}


	return 0;
}
