// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.move(3,3);
	myScreen.set("---");

	myScreen.display();
	cout << endl;

	myScreen.reSize(16,16);
	myScreen.display();
	myScreen.clear(' ');

	myScreen.move(7,7);
	myScreen.set("BIG");
	myScreen.move(8,5);
	myScreen.set("SCREEN");
	myScreen.display();
    cout << endl;

    myScreen.clear(' ');
	for(int row=1; row<=6; row++){
        myScreen.move(row,1);
        myScreen.set('*');
	}

	myScreen.move(3,2);
	myScreen.set('*');
    myScreen.move(3,3);
	myScreen.set('*');
	myScreen.move(3,4);
	myScreen.set('*');
	myScreen.move(2,5);
	myScreen.set('*');
    myScreen.move(1,6);
	myScreen.set('*');
	myScreen.move(4,5);
	myScreen.set('*');
	myScreen.move(5,6);
	myScreen.set('*');
	myScreen.move(6,6);
	myScreen.set('*');

	myScreen.display();
	cout << endl;
	myScreen.clear(' ');

	myScreen.getSquare(4,4,4);  // Exercise 4.5
	myScreen.display();
	cout << endl;
	myScreen.clear();

	return 0;
}

/* 1. Change the string::string-type and use string
   2. Instead of using auto we can explicitly declare the type of a variable - this helps improve the readability of the code.
    NOT CHANGING PUBLIC INTERFACE:
    - It helps keep improve the efficiency of the code without having the user to adapt to a new outlook
      of a program every time there is a change to be implemented.
    CHANGING IMPLEMENTATION:
    - It gives a developer the ability to maintain their program and have control over it.
      We are free to change it because it does not necessarily interfere with the user if approached rightly.
*/
