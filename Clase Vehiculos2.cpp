#include <iostream>
#include <string>
using namespace std;

//Declaramos la clase Vehiculo 
class Vehiculo {
	public: 
		//Atributos de la clase 
		string color; 
		string marca;
		float km;
		
		//constructor para inicializar atributos, le vamos a pasasr 3 parametros al constructor porque tengo 3 variables
		Vehiculo(string _color, string _marca, float _km ){
		
			color = _color;
			marca = _marca;
			km = _km;
			/* Imprimirmos un mensaje para indicar que el objeto vehiculo se creo*/
			cout <<"Se creo el objeto Vehiculo. "<<endl;
		}
		
		//Destructor se ejecuta cuando se destruye un objeto 
		~Vehiculo(){
			//Imprimimos un mensaje 
			cout<<"Se destruyo el objeto Vehiculo. "<<endl;
		}
		
		//Agregamos Metodos y acciones del vehiculo del objeto 
		//Metodo que representa la accion de encender Vehiculo 
		void encender(){
			cout <<"El Vehiculo esta encendido. "<< endl;
			
		}
		
		//Metodo que representa la accion de encender Vehiculo 
		void apagar(){
			cout <<"El Vehiculo esta apagado. "<< endl;
			
		}
		
			
};  

//funcion principal Main
int main (){
	//Creamos un objeto 
	Vehiculo miVehiculo("negro", "Subaru", 0 );
	
	//Hacemos un llamado a los metodos creados 
	miVehiculo.encender();
	miVehiculo.apagar();
	
	return 0;
}