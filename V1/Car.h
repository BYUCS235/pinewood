#include "CarInterface.h"

class Car: public CarInterface {
    public:
	Car() {}
	virtual ~Car() {}

	/*
	*	getName()
	*
	*	Returns the name of this car.
	*/
	virtual string getName() const = 0;

	/*
	*	getSpeed()
	*
	*	Returns the speed of this car.
	*/
	virtual int getSpeed() const = 0;
private:
	int speed;
};