#include "InchToFeetInchConverter.h"
#include <iostream>
using namespace std;

void InchToFeetInchConverter::converter() {

	int height = 75;

	//cin >> height;

	int heightFeet, heightRemainderInches;

	//mathmatical process
	heightFeet = height / 12;
	heightRemainderInches = height % 12;

	cout << "Height: " << heightFeet << " Feet " << heightRemainderInches << " Inches";

	
}