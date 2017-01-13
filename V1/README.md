# pinewood derby simulation implementation
## So, Lets get started
Your UML should look something like this
<img src="https://mjcleme.github.io/pinewood.png" width="600">

1. First, lets create the Race class in Race.h.  Notice that we inherit from RaceInterface, and include the array of Cars.  The main.cpp code will be calling addCar with a string that will create either a Panda or a Rocket, so we will include those files for future implementation.  But for now, the major addition is the vector of Car pointers.
	```
#include "RaceInterface.h"
#include "CarInterface.h"
#include "Car.h"
#include "Rocket.h"
#include "Panda.h"
#include <vector>
#include <sstream>

class Race: public RaceInterface {
    private:
	vector<Car*> carVec;

    public:
	Race() {}
	~Race() {}

	bool addCar(string info); 

	bool removeCar(string name);

	CarInterface* getCar(string name);

	int getSize() const;
};
	```

2. And of course, we need to create Race.cpp which holds the implementation of the class functions.  I try to put all of the include files needed in the Race.h file, so the cpp file only includes the class Race.h file.  Notice that we are starting with just stubs for all of the functions.  We will fill them in later once we have the code compiling.
	```
#include "Race.h"


using namespace std;
bool Race::addCar(string info) {
}

bool Race::removeCar(string name) {
}

CarInterface* Race::getCar(string name) {
}

int Race::getSize() const {
}
	```
