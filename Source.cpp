


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

	float radius, area, miles, distance, kilometers, circumference, radius2;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute area of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	area = PI* radius *radius; 
	
	//Display the area 
	cout << " The area is = " << area << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	//mad

	//Displays purpose of the second part of the program
	cout << "This program takes in distance in miles and returns it in kilometers" << endl;
	cout << "Please input distance in miles: ";
	cin >> miles;
	distance = miles * 1.6;
	cout << "The distance in kilometers is: " << distance << "\n\n";
	cout <<"This portion of the program has ended" << endl;


	// Calculates the circumference of a circle
	cout << "This program takes in the radius and uses it to calculate the circumference of a circle" <<endl;
	cout << "Please input radius: ";
	cin >> radius2;
	circumference = 2 * PI*radius2;
	cout << "The circumference of the circle is: " << circumference << "\n\n";
	system("pause");


	
	return 0;
}