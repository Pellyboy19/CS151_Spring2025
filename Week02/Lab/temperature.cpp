// This program will convert a temperature in Fahrenheit to Celsius.
#include <iostream>
using namespace std;

const double NORMAL_TEMP = 98.6;	        // normal body temperature in Fahrenheit

int main()
{
	double celsius;		                    // definition of celsius temperature
	celsius = (NORMAL_TEMP - 32) * 5 / 9;	// computes celsius temperature: 37 degrees

	cout << " Normal body temperature in Celsius is: " << celsius << " degrees." << endl;// Fill in the code for the cout statement that will output (with description)
	// the celsius temperature. 

	return 0;
}