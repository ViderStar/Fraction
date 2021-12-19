#include <iostream>
#include "Fraction.h"

using namespace std;


void operations(Fraction firstfraction, Fraction secondfraction) {
	Fraction result = firstfraction * secondfraction;
	firstfraction.print();
	cout << " * ";
	secondfraction.print();
	cout << " = ";
	result.print();
	cout << endl;
	result = firstfraction + secondfraction;
	firstfraction.print();
	cout << " + ";
	secondfraction.print();
	cout << " = ";
	result.print();
	cout << endl;
	result = firstfraction - secondfraction;
	firstfraction.print();
	cout << " - ";
	secondfraction.print();
	cout << " = ";
	result.print();
	cout << endl;
	if (secondfraction.getNumerator() !=0 ) {
		result = firstfraction / secondfraction;
		firstfraction.print();
		cout << " / ";
		secondfraction.print();
		cout << " = ";
		result.print();
		cout << endl;
	}
	else {
		cout << "error"<<endl;
	}
}
void comparisons(Fraction firstfraction, Fraction secondfraction) {
	firstfraction.print();
	cout << ">";
	secondfraction.print();
	cout << " -- " << (firstfraction > secondfraction) << endl;
	firstfraction.print();
	cout << "<";
	secondfraction.print();
	cout << " -- " << (firstfraction < secondfraction) << endl;
	firstfraction.print();
	cout << ">=";
	secondfraction.print();
	cout << " -- " << (firstfraction >= secondfraction) << endl;
	firstfraction.print();
	cout << "<=";
	secondfraction.print();
	cout << " -- " << (firstfraction <= secondfraction) << endl;
	firstfraction.print();
	cout << "!=";
	secondfraction.print();
	cout << " -- " << (firstfraction != secondfraction) << endl;
	firstfraction.print();
	cout << "==";
	secondfraction.print();
	cout << " -- " << (firstfraction == secondfraction) << endl;
}
int main()
{
	long num1, den1, num2, den2;
	cout << "enter the numerator of the first fraction:" << endl;
	cin >> num1;
	cout << "enter the denominator of the first fraction:" << endl;
	cin >> den1;
	Fraction firstfraction(num1, den1); 
	try {
		firstfraction.check();
	}
	catch (...) {
		cout << "error" << endl;
		return 1;
	}
	cout << "enter numerator of the second fraction:" << endl;
	cin >> num2;
	cout << "enter the denominator of the second fraction:" << endl;
	cin >> den2;
	Fraction secondfraction(num2, den2); 
	try {
		secondfraction.check();
	}
	catch (...) {
		cout << "error" << endl;
		return 1;
	}
	operations(firstfraction, secondfraction);
	comparisons(firstfraction, secondfraction);
	system("PAUSE");
	return 0;
}