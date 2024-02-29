#pragma once
#include <iostream>

class Even {
private:
    int number;

public:
    Even(int = 0)
        : number{number}
    {}
    int get_number();
    void set_number(int);
    void data(int num);
    bool calculate_even();
    void display(bool is_even);
};
    int Even::get_number() {
    return number;
   }
   
    void Even::set_number(int number) {
    this->number = number;
  }
    void Even::data(int num) {
        number = num;
    }

    bool Even::calculate_even() {
        if (number % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }

    void Even::display(bool is_even) {
        if (is_even) {
            std::cout << number << " is even." << std::endl;
        } else {
            std::cout << number << " is not even." << std::endl;
        }
    }

