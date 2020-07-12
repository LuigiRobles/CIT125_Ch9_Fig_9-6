// CIT125_Ch9_Fig_9-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// 07-12-2020 Summer Term
// Chapter 9 Figure 9-6 Hypotenuse Program

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//declare and initialize variables
	double sideA = 0.0;
	double sideB = 0.0;
	double sumSqrs = 0.0;
	double hypotenuse = 0.0;

	//get lengths of two sides
	cout << "Side a length: ";
	cin >> sideA; //input part of IPO
	cout << "Side b length: ";
	cin >> sideB; //input part of IPO

	//calculate the hypotenuse length
	//processing part of IPO
	sumSqrs = pow(sideA, 2) + pow(sideB, 2);
	hypotenuse = sqrt(sumSqrs);

	//display the hypotenuse length
	//output part of IPO
	cout << fixed << setprecision(1);
	cout << "Hypotenuse length: " << hypotenuse << endl;
	return 0;
} // end of main program