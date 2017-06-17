//============================================================================
// Name        : 17_For.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 10; i++) { //the scope of i is only in this for loop
		cout << "Hi " << i << endl;
	}

	return 0;
}
/*NOTES ON LOOPS
 *
 * WHILE - FIRST checks condition then executes code
 * while (condition) {
  	  gets executed after condition is checked
	}
 * DO/WHILE - FIRST executes code then checks condition
 * do {
  	  gets executed at least once
	} while (condition);
 * FOR - FIRST checks condition. ALLOWS for counter and increment in single line
 * for (int x = 0; x < 100; x++) {
   	   executed until x >= 100
	}
 * SOURCE https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming
 *
 * "The main difference between the for's and the while's is a matter of pragmatics:
 * 	we usually use for when there is a known number of iterations, and use while
 * 	constructs when the number of iterations is not known in advance [a while will
 * 	allow for a variation of things to add to the counter where the for loop will
 * 	only allow increments as coded]
 * 	The wihle VS do-while issues is also of pragmatics, the second executes the
 * 	instructions once at [at the beginning], and afterwards is a simple while loop.
 *
 * 	BREAK AND CONTINUE
 *
 * 	BREAK - instantly terminates the current loop and no more iterations will be executed.
 * 	[allows for a specific condition to break the cycle.]
 * 	will only run "do stuff" twice
	for (int x = 0; x < 100; x++) {
  	  if (x == 2) {
   		break;
  	  }
  	  do stuff
	}
 *
 *  CONTINUE - terminates the current iteration and moves on to the next one
 *  will run "do stuff" until x >= 100 except for when x = 2
	for (int x = 0; x < 100; x++) {
  	  if (x == 2) {
    	continue;
  	  }
  	  do stuff
	}
 *
 *  ADDITION CONCERNING FOR LOOPS
 *  	for(<start statement>;<continuation>;<exectue after each iteration>){ do stuff;}
 *		the example at the top of this section is the most composition of the for loop.
 *  If possible consider speed and performance
 */
