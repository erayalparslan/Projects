// Prime Factorization
// Have the user enter a number and find all Prime Factors (if there are any) and display them.
// Eray Alparslan

#include <iostream>

void primefactors(int n);

int main(int argc, char* argv[]){
    
    char *cmdInput = argv[1];
    
    if (cmdInput == NULL){
        int num;
        do{
            std::cout << "Enter a number to calculate prime factors: ";
            std::cin >> num;
        }while (num < 1 || num > 10000);
            
        primefactors(num);
    }
    else{
        std::cout << "unwanted behaviour" << std::endl;
    }
    
    return 0;
}

void primefactors(int n) {
    int factors[n];
    int counter=0;
    
    for (int i=2; i<n; i++) {
        if (n %i == 0) {
            factors[counter] = i;
            counter++;
        }
    }
    
    if (counter == 0) {
        std::cout << "There is not any prime factors of " << n << std::endl;
    }
    else {
        std::cout << "Prime factors of " << n << " is: ";
        for (int i=0; i<counter; i++) {
            std::cout << factors[i] << ", ";
        }
        std::cout << std::endl;
    }
}
