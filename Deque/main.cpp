//
//  main.cpp
//  Deque
//
//  Created by Hunaid Hassan on 22/11/2017.
//  Copyright © 2017 Hunaid Hassan. All rights reserved.
//

#include <iostream>
using namespace std;

int power(int a, int b){
    if (b == 0) {
        return 1;
    }
    return a * power(a, b - 1);
}

int product(int a, int b){
    if (b == 1) {
        return a;
    }
    return a + product(a, b - 1);
}

int quotient(int num, int den){
    if (den == num) {
        return 1;
    }
    return 1 + quotient(num - den, den);
}

void printChar(char ch, int n){
    if (n == 0) {
        return;
    }
    cout << ch;
    printChar(ch, n - 1);
}

void printPattern(char ch, int n){
    if (n == 0) {
        return;
    }
    printChar(ch, n);
    cout<<endl;
    printPattern(ch, n - 1);
}

void printPattern1(char ch, int n){
    if (n == 0) {
        return;
    }
    printPattern1(ch, n - 1);
    cout<<endl;
    printChar(ch, n);
}

int main(int argc, const char * argv[]) {
    cout << power(5, 2) << endl;
    cout << product(1, 1) << endl;
    cout << quotient(30, 3) << endl;
    printPattern('0', 5);
    printPattern1('0', 5);
    return 0;
}
