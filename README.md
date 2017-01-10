# pinewood derby simulation program
If you have worked with Cub Scouts, you know they get really excited about the pinewood derby race.  If your Cub Scout Pack is low on funds, they probably only have a 2 lane track and so you will have to race each pair of cars against each other to determine the winner.  Some cars have rockets on them, some cars have big stuffed animals on top that increase the wind resistance, but all of them need to be kept in the race conainer.  Build an application to simulate a pinewood derby race.

<img src="https://upload.wikimedia.org/wikipedia/commons/b/be/PinewoodFinish.jpg" width="200">

1) First, lets develop a UML diagram for our application.  What are the objects and what are the "isa" and "hasa" relationships?
* Our main has a pointer to a Race.  You will need to create a new Race object that should inherit from the RaceInterface abstract class.
* You should have a rocket and panda car classes that inherit from the CarInterface abstract class.
* Practice drawing the UML diagram for your application.
