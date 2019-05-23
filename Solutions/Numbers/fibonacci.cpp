// Fibonacci Sequence
// Enter a number and have the program generate the Fibonacci sequence to that number or to the Nth number.
// Eray Alparslan

#include <iostream>

void fibon(int n);

int main(int argc, char* argv[]){
    
    char *cmdInput = argv[1];
    
    if (cmdInput == NULL){
        int sequence;
        do{
            std::cout << "Enter num of fibonacci sequence: ";
            std::cin >> sequence;
        }while(sequence < 1 || sequence > 20);
        
        fibon(sequence);
    }
    else{
        int sequence = 0;
        int cmdSequence = std::atoi(cmdInput);
        
        while (cmdSequence<1 || cmdSequence>20) {
            std::cout << "Please enter a prettier input: ";
            std::cin>>cmdSequence;
        }
        fibon(cmdSequence);
    }
    
    return 0;
}

void fibon(int n) {
    int fib[n];
    
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i=2; i<=n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i=0; i<n; i++) {
        std::cout << fib[i] << "\t";
    }
    std::cout << std::endl;
    
}
