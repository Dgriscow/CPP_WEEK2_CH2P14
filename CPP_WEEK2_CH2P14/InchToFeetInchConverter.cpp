#include "InchToFeetInchConverter.h"
#include <iostream>
using namespace std;

void InchToFeetInchConverter::converter() {

	int height;

	cout << "Enter a Height Value You Wish To Convert: ";

	cin >> height;

	int heightFeet, heightRemainderInches;

	//mathmatical process
	heightFeet = height / 12;
	heightRemainderInches = height % 12;

	if (heightRemainderInches != 1) {

		cout << "Height: " << heightFeet << " Feet " << heightRemainderInches << " Inches";

	}
	else {

		cout << "Height: " << heightFeet << " Feet " << heightRemainderInches << " Inch";

	}

		
	

	
}