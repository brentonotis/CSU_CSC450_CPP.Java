/*
 * CSC450_CTA1.cpp
 *
 * Program that takes in user input of first name, last name, street address, city, state and zip
 * Outputs all info. in formatted manner (arbitrarily - per my personal preference)
 *
 *  Created on: Jan 20, 2019
 *  Author: Brenton Otis
 */

/* Project Name: CSC450-CTA1_1
 * Project Purpose: Print out information of fictional Person
 * Algorithm Used: std library - cin and cout
 * Program Inputs: first and last name, address, city, state, zip
 * Program Outputs: first and last name, address, city, state, zip
 * Program Limitations: N/A
 * Program Errors: N/A
 */

#include <iostream>
using namespace std;

int main () {

	// declaring variables
	// char[n] denotes array of characters (n == size of char array)
	// acts like string but allows for input/ouput of white space w/ cin.getline(var, n) and cout
	char firstName[20], lastName[20], city[20], state[20], streetAddress[50];
	// zip stored as int (assuming no whitespace needed)
	int zipCode;

	// cout prints/asks for user input
	cout << "Enter first name: ";
	// cin.getline extracts chars until delimiter is hit
	// allows user input w/ whitespace - sets to (variable, n)
	cin.getline(firstName, 20);
	cout << "Enter last name: ";
	cin.getline(lastName, 20);
	cout << "Enter street address: ";
	cin.getline(streetAddress, 50);
	cout << "Enter city: ";
	cin.getline(city, 20);
	cout << "Enter state: ";
	cin.getline(state, 20);
	cout << "Enter zipCode: ";
	cin >> zipCode;

	// outputs/prints variables in formatted manner
	cout << endl << lastName << ", " << firstName << endl;
	cout << streetAddress << endl;
	cout << city << ", " << state << " " << zipCode << endl;

	// return 0 terminates main - "exit status"
	return 0;
}



