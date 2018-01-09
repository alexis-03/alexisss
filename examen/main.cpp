#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)

 {
 	string nombre="",grupo="",licenciatura="",fecha="",opcion="";
 	 
 	 string pregunta1,pregunta2,pregunta3,pregunta4,pregunta5;
 	 
    cout<<"ingresa tu nombre"<< endl;
    cin>> nombre;
    cout<<"ingresa tu grupo"<<endl;
    cin>> grupo;
    cout<<"ingresa tu licenciatura"<< endl;
    cin>> licenciatura;
    cout<<"ingresa la fecha"<<endl;
    cin>> fecha;
    cout<<"Bienvenido al examen " << nombre<< " eres del grupo "  << grupo << " eres del grupo " << licenciatura << " perteneces a la licenciatura " << fecha << " fecha 18 de diciembre del 2017 " << endl;
      
	  
	 int sumatoria=+1;
	 int incorrectas=+1;    

    cout<<"PREGUNTA 1"<< endl;
    	
	cout<<"QUE ES C++?\n"<<endl;cout<<"A)un programa\n"<<endl;cout<<"B)un juego\n"<<endl;cout<<"C)una variable"<<endl;cout<<"indica tu respuesta"<<endl;
 	cin>>pregunta1;
    if(pregunta1=="A"|| pregunta1=="a" )  
	{ 	
	 sumatoria+=2;
	 cout<<"tu respuesta es correcta"<<endl;
	}
	else
	{
	incorrectas+=1;	
	}
 
    cout<<"PREGUNTA 2"<<endl;
    
 	cout<<"2.-para que sirven las comillas?\n"<<endl;cout<<" A)ingresar texto\n"<<endl;cout<<"B)ingresar variables\n"<<endl;cout<<"C)cerrrar\n"<<endl;
 	cin>>pregunta2;
 	if(pregunta2=="A"||pregunta1=="a")
	 {
	  sumatoria+=1;
	 }
	 else
	 {
	 	incorrectas+=1;
	 }
 	
 	cout<<"PREGUNTA 3"<<endl;
 	
 	cout<<"3.-para que sirve c++?\n"<<endl;cout<<"A) jugar\n"<<endl;cout<<"B)programar\n"<<endl;cout<<"C)calcular"<<endl;
 	cin>>pregunta3;
 	if(pregunta3=="B"|| pregunta1=="b")
	 {
 	sumatoria+=1;
 	}
 	else
	 {
	   incorrectas+=0;	
	 }
 	
 	cout<<"PREGUNTA 4"<<endl;
 	cout<<"4.-que utilidad tiene el punto y coma en c++?\n"<<endl;cout<<"A)organizar\n"<<endl;cout<<"B)cerrar el programa c++\n"<<endl;cout<<"C)cerrar una linea de codigo\n"<<endl;
 	cin>>pregunta4;
 	
 	if(pregunta4=="C"|| pregunta1=="c")
	 {
 	  sumatoria+=1;
	 }
	 else
	 {
	 	incorrectas+=1;
	 }
 	

 	 cout<<"PREGUNTA 5"<<endl;
    cout<<"5.-para que se utiliza la sentecia for?\n"<<endl;cout<<"A)compilar\n"<<endl;cout<<"B)ejecutar\n"<<endl;cout<<"C)repeticion\n"<<endl;
 	
 	cin>>pregunta5;
 	if(pregunta5=="C"|| pregunta1=="c")
	 {
 	 sumatoria+=2;
	 }
	 else
	 {
	incorrectas+=1;
	 }
	 
	 cout<<"Las respuestas correctas fueron"<<sumatoria<<endl;
	  
	  cout<<"las respuestas incorrectas son"<<incorrectas <<endl;
	  
	  
	 cout<<"tu calificacion es de "<< sumatoria*2 << endl;
	  
	 
 	
return 0;
 }
