////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Review 1 - Lab work
////

#include <iostream>
#include <iomanip>
using namespace std;

// Option 1. Compare quotient and remainder
void quotientcalc() {
	int dividend, divisor;
	cout << "\nYou chose: 1. Compute quotient and remainder\n"
		<< "Enter the dividend: ";
	cin >> dividend;
	cout << "Enter the divisor: ";
	cin >> divisor;
	cout << "The quotient is: " << dividend / divisor << endl;
	cout << "The remainder is: " << dividend % divisor << endl;
}
// Option 2. Simple math calculator
void mathCalculator() {
	int numOne, numTwo;
	char mathExpression;
	cout << "\nYou chose: 2. Simple math calculator\n" 
		<< "Enter a number: ";
	cin >> numOne;
	cout << "A simple math expression (+,-,*,/): ";
	cin >> mathExpression;
	cout << "And another number: ";
	cin >> numTwo;

	switch (mathExpression) {
	case '+':
		cout << numOne << mathExpression << numTwo << "=" << numOne + numTwo;
		break;
	case '-':
		cout << numOne << mathExpression << numTwo << "=" << numOne - numTwo;
		break;
	case '*':
		cout << numOne << mathExpression << numTwo << "=" << numOne * numTwo;
		break;
	case '/':
		cout << numOne << mathExpression << numTwo << "=" << numOne / numTwo;
		break;
	}
	cout << endl;
}
// Option 3. Various conversions
void conversions() {
	char userChoice;
	char looper = 'y';
	int userNum;
	cout << "\nYou chose: 3. Various conversions";
	while (looper == 'y') {
		cout << "\nChoose one of the following options\n";
		cout << "a. Convert fahrenheit to celsius\n" << "b. Convert inches and feet to centimeters\n"
			<< "c. Convert miles per hour to kilometers per hour" << endl;
		cout << "Your option: ";
		cin >> userChoice;

		// a. Convert fahrenheit to celsius
		if (userChoice == 'a') {
			double celsius;
			cout << "Enter your temperature in fahrenheit: ";
			cin >> userNum;
			celsius = ((userNum * 5.0) - (5.0 * 32)) / 9.0;
			cout << setprecision(3) << userNum << " fahrenheit is equal to " << celsius << " celsius." << endl;
		}
		// b. Convert inches and feet to centimeters
		else if (userChoice == 'b') {
			int inches, feet;
			cout << "Enter your feet: ";
			cin >> feet;
			cout << "Enter your inches: ";
			cin >> inches;
			cout << setprecision(3) << feet << " feet " << inches << " inches is equal to "
				<< ((feet * 12.0) + inches) * 2.54 << " centimeters." << endl;
		}
		// c. Convert miles per hour to kilometers per hour
		else if (userChoice == 'c') {
			double kph;
			cout << "Enter your mile(s) per hour: ";
			cin >> userNum;
			kph = userNum / 0.6213712;
			cout << setprecision(4) << userNum << " mph is equal to " << kph << " kph." << endl;
		}
		cout << "Would you like to do another conversion? (y:yes, anything else: no): ";
		cin >> looper;
	}
}

int main()
{
	int userChoice;
	cout << "Choose one of the following programs to continue\n" << "1. Compute quotient and remainder\n"
		<< "2. Simple math calculator\n" << "3. Various conversions" << endl;
	cout << "Enter (1, 2, or 3): ";
	cin >> userChoice;

	switch (userChoice) {
	case 1:
		quotientcalc();
		break;	
	case 2:
		mathCalculator();
		break;
	case 3:
		conversions();
		break;
	}

	cout << "\nThank you for using the program\n";
	system("pause");
	return 0;
}