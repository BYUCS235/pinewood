#include <iostream>
#include <fstream>
#include <sstream>
#include "Race.h"


int main() {

	Race* rptr = new Race();

	rptr->addCar("Speedy R 20");
	rptr->addCar("Slow P 10");
	rptr->getSize();
	CarInterface *car1 = rptr->getCar("Speedy");
	CarInterface *car2 = rptr->getCar("Slow");
	if(car1->getSpeed() > car2->getSpeed()) {
	  cout << car1->getName() << "Won!"<<endl;
	} else {
	  cout << car2->getName() << "Won!"<<endl;
	}
	return 0;
}


	