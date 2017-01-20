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
	for (Car* cp : carVec) {
		if (cp->getName() == name) {
			return cp;
		}
	}
	return NULL;
}
  ```

4. Now your full application should be working and you should see something like this when you type "make" and "./pinewood
  ```
mjcleme:~/workspace/V2 $ ./pinewood
Start Size should be zero 0
addCar got Speedy R 20
Adding Rocket
In Car Constructor Speedy 20
Size should be 1 1
addCar got Slow P 10
Adding Panda
In Car Constructor Slow 10
Size should be 2 2
In Car getName Speedy
In Car getName Speedy
In Car getName Slow
Compare 40 5
In Car getName Speedy
Speedy Won!
In Car getName Slow
In Car getName Speedy
In Car getName Slow
Removed car2 Size should be one 1
  ```
5. If this were the lab, then you could compare this output to the expected output from the lab by redirecting the output to a file and then using sdiff to show you the differences.
  ```
  ./pinewood > myoutput.txt
  sdiff myoutput.txt key_file.txt
  ```
  You will then see a side by side comparison between your output and what was expected in the lab.
