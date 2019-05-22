// Find PI to the Nth Digit
// Eray Alparslan

#include <iostream>
#include <iomanip> // to set precision

int main(){
	using std::cout;
	using std::endl;
	using std::cin;
	using std::setprecision;


	double PI=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	int userInput;

	do {
		cout << "Number of floating points: ";
		cin  >> userInput;
	}while(userInput<1 || userInput > 50);

	cout << setprecision(userInput+1) << PI << endl;

	return 0;
}