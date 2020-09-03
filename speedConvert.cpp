//============================================================================
// Name        : speedConvert.cpp
// Author      : Robert Zeelie
// Version     : 1.00.00
// Copyright   : Your copyright notice
// Description : A program that converts kilometers per hour to miles per hour.
//				 Program will accept as input the speed in km/h and will
//				 output the result in m/h
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;


//a method to convert kilometers/hour to miles/hour
double convert (double kmph) {

	//declare const value and temp
	const double kiloInMile = 1.609344;
	double temp;

	//equation
	temp = (kmph / kiloInMile);

	return temp;
}

//main method
int main() {

	//Declare variables (kmph = km/h	mph = m/h)
	double kmph, mph;

	//Tell the user what the program is
	cout << "Convert kilometers per hour to miles per hour:" << "\n" << endl;
	cout << setfill('-') << setw(100) << "-\n" << endl;

	//get input from user
	cout << "Please input the speed in kilometer per hour (km/h) : ";
	cin >> kmph;

	//call convert function and print result
	mph = convert(kmph);
	cout << "\nThe speed of " << kmph << "km/h is equal to " << mph << "m/h." << endl;

	//extra information using if else statements
	if (mph > 85.0) {
		cout << "The highest posted speed limit in the US is 85mph (approximately 137km/h),\nSo you should probably slow down ;)" << endl;
	}
	else if (mph > 60) {
		cout << "The average posted speed limit in the US is 60mph (approximately 97km/h),\nYou should start watching your speed!" << endl;
	}
	else {
		cout << "You are under the average speed limit in the US,\nYou are still free to speed up!" << endl;
	}

	return 0;
}






















