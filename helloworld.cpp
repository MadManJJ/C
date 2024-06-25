#include <iostream>

class Car{
    public:
		std::string honks;
		int y;
	


	void walk(){
		std::cout  << "driving" << std::endl;
		std::cout << honks << " " << y << std::endl;
	}

	void honk(){
		std::cout  << " is hoking" << std::endl;
	}

	Car(int x){
		this->honks = "spark";
		this->y = x;
	}
	Car(int x , int y){
		this->honks = "spark";
		this->y = x;
	}
	Car(){
		this->honks = "spark";
		int x = 5;
		std::cout << "HIII";
	}


};

int main() {
    
	Car car1(1);
	car1.walk();
	Car car2;


	


    return 0;
}