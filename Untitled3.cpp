#include <iostream>
#include <string>
using namespace std;

class Barcos {
	
	public: 
	string color;
	string tamaño;
	float km; 
	
	Barcos (string _color, string _tamaño, float km){
		
		color= _color
		tamaño= _tamaño
		km = _km
	}
	
	~Barcos (){
		cout <<"Se destruyo"<<endl;
	}
	
	void enceder(){
		cout<<"Se encendio"<<endl;
		
		
	}
	
	void apagar (){
		cout<<"Se apago"<<endl;
	}
	
	
};

int main (){
	
	Barcos miBarco (negro, 15m, 0);
	
	miBarco.enceder();
	miBarco.apagar();
	
	return 0;
}