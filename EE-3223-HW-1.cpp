/*
* Adam Whitman
* EUC043
* Home Work 1
*
*"Make a program that will read the input for Vdc, R1, and R2
* Standard voltage divider circuit
* 
* 
*/



#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main() {


	// sets your variables to use in the program
	double voltage_Source, resist_1, resist_2, volt_Between;

	//get voltage source value
	cout << "Input a value for Vdc" << endl;
	cin >> voltage_Source;
	

	// while loop to check and see if input matches the var so no exceptions are caught.
	// i know this is required, but habit from a java class i took years ago
	// i could nest this in an if loop to get multiple values for the resistor if wanted 
	while (!cin) {
		cout << "You have input an incorrect value for Vdc" << endl;
		cout << "Input a value for Vdc" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> voltage_Source;
	}




	// gets resistor 1 value
	cout << "Input a value for resistor 1" << endl;
	
	cin >> resist_1;
	
	// same loop for voltage source
	while (!cin){
		cout << "You have input an incorrect value for resistor 1" << endl;
		cout << "Input a value for resistor 1" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> resist_1;
	}
	//gets resistor 2 value
	cout << "Input a value for resistor 2" << endl;
	cin >> resist_2;

	// same while loop as above that check to see if the input value was a fail or throws an exception

	while (!cin) {
		cout << "You have input an incorrect value for resistor 2" << endl;
		cout << "Input a value for resistor 2" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> resist_2;
	}

	// voltage divider math
	volt_Between = voltage_Source*(resist_2/ (resist_1 + resist_2));


	// outputs the voltage divider value
	cout << "The voltage divider value is " << volt_Between;
	


	return 0;



}
