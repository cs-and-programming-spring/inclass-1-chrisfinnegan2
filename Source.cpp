




/***********************************************
* Name: Chris Finnegan
* Email: finneganc2@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle,
*  converts distance in miles into distance in kilometers,
*  and calculates circumference of a circle.
***********************************************/

#include <iostream>

using namespace std;

const  float PI = 3.14159;

int main()
{

	float radius, area, miles, distance, circumference, radius2, miles2, meters, centimeters, milimeters, fahrenheit, celcius, years, months, days, hours, minutes, seconds;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute area of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute area to PI*radius*radius
	area = PI * radius *radius;

	//Display the area 
	cout << " The area is = " << area << "\n\n";

	system("pause");

	//Displays purpose of the second part of the program
	cout << "This program takes in distance in miles and returns it in kilometers" << endl;
	cout << "Please input distance in miles: " << endl;
	cin >> miles;
	distance = miles * 1.6;
	cout << "The distance in kilometers is: " << distance << "\n\n";

	// Calculates the circumference of a circle
	cout << "This program takes in the radius and uses it to calculate the circumference of a circle" << endl;
	cout << "Please input radius: ";
	cin >> radius2;
	circumference = 2 * PI*radius2;
	cout << "The circumference of the circle is: " << circumference << "\n\n";
	system("pause");

	cout << "This program takes in distance in miles and returns it in meters, centimeters, and milimeters" << endl;
	cout << "Please input distance: ";
	cin >> miles2;
	meters = (miles2 * 1.6) * 1000; //Calculates meters 
	cout << "meters = " << meters << "\n\n";
	centimeters = meters * 100; //Uses the calculation for meters to calculate centimeters 
	cout << "centimeters = " << centimeters << "\n\n";
	milimeters = meters * 1000; //Uses the calculation for meters once again to calculate milimeters
	cout << "milimeters = " << milimeters << "\n\n";
	system("pause");

	cout << "This concludes the in-class assignment portion of the project" << endl;
	system("pause");

	cout << "This program converts degrees in celcius to degrees in fahrenheit" << endl;
	cout << "Please input degress in celcius: " << endl;

	cin >> celcius;

	fahrenheit = (9 / 5) * celcius + 32;
	cout << "The temperature in fahrenheit is: " << fahrenheit << "\n\n";

	cout << "This concludes the in-class assignment portion of the project" << endl;

	system("pause");

	cout << "This program shows age in years, days, hours, minutes, and seconds.";
	cout << "Please input age in years: " << endl;

	cin >> years;

	months = years * 12;
	days = years * 365.25;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;

	cout << "Years : " << years << "\n\n";
	cout << "Months : " << months << "\n\n";
	cout << "Days : " << days << "\n\n";
	cout << "Hours : " << hours << "\n\n";
	cout << "Minutes : " << minutes << "\n\n";
	cout << "Seconds : " << seconds << "\n\n";

	system("pause");

	cout << "  1 2 3 4 5 6" << "\n\n";
	cout << "1         ** " << "\n\n";
	cout << "2      *     " << "\n\n";
	cout << "3    *       " << "\n\n";
	cout << "4    *       " << "\n\n";
	cout << "5      *     " << "\n\n";
	cout << "6         ** " << "\n\n";

	system("pause");








	return 0;
}

