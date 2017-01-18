# pinewood derby simulation program
## Finishing the implementation
1. First we need to fill in the Race.h functions, lets start with addCar.  We wil use stringstream to parse the Name Type speed string we received.  Then we create a car of the specified type and push it into our vector.
  ```
bool Race::addCar(string info) {
  stringstream ss(info);
	string name, type;
	int speed;
		
	if (ss >> name >> type >> speed) {
	  cout << "addCar got "<<name<<" "<<type<<" "<<speed<<endl;
		if (type == "R") { /* Rocket */
			cout << "Adding Rocket"<<endl;
			carVec.push_back(new Rocket(name, speed));
		}
		else if (type == "P") { /* Panda */
		  cout << "Adding Panda"<<endl;
			carVec.push_back(new Panda(name, speed));
		}
		else {
			return false; //not a valid type of car
		}
		return true;
	}
	return false; //invalid input, not enough tokens or wrong input type
}
  ```
2. The next function to fill in is removeCar.  We will be passed a name.  When we find it, call erase with the iterator corresponding to the position of the car.

  ```
  bool Race::removeCar(string name) {
    for (int i = 0; i < carVec.size(); i++) {
		if (carVec.at(i)->getName() == name) {
			carVec.erase(carVec.begin() + i);
			return true;
		}
	}
	return false;
}
  ```
3. We fill in getCar by searching through the vector until we find a car with the same name.
  ```
  
CarInterface* Race::getCar(string name) {
    stringstream ss;
	for (Car* cp : carVec) {
		if (cp->getName() == name) {
			return cp;
		}
	}
	return NULL;
}
  ```
  
