// Find e to the Nth Digit
// This time, I allow user to enter input from the command line
// Eray Alparslan

#include <iostream>
#include <iomanip> // to set precision

int main(int argc, char* argv[]){
	using std::cout;
	using std::endl;
	using std::cin;
	using std::setprecision;
	using std::atoi;

	double e=2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;
	int userInput;
	char* cmdLine = argv[1];

	if (cmdLine == NULL)
	{
		do {
			cout << "Number of floating points: ";
			cin  >> userInput;
		}while(userInput<1 || userInput > 20);
		cout << setprecision(userInput+1) << e << endl;
	}
	else{
		int floatingNumber = atoi(cmdLine);
		while( floatingNumber<1 || floatingNumber>20) {
			cout << "Please enter an input between 1 and 20";
		}
		cout << setprecision(floatingNumber+1) << e << endl;
	}

	

	return 0;
}