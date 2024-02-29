#include <iostream>
#include "even.h"
using namespace std;
int main() {
    Even no;
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number; 
    no.data(number); 
    bool is_even = no.calculate_even(); 
    no.display(is_even); 

    return 0;
}
