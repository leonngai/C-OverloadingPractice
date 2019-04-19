#include <iostream>
#include "Number.cpp"
using namespace std;

int main() {
    cout << "Testing increment functions:" << endl;
    Number five(5);
    cout << "Printing original object: " << five;   //5
    cout << "Printing pre-increment object: " << ++five; // 6
    cout << "Printing post-increment object: " << five++; //6
    cout << "Printing object: " << five << endl; //7

    cout << "Testing decrement functions:" << endl;
    Number one(1);
    cout << "Printing original object: " << one;   //5
    cout << "Printing pre-increment object: " << ++one; // 6
    cout << "Printing post-increment object: " << one++; //6
    cout << "Printing object: " << one << endl; //7

    cout << "Testing add function:" << endl;
    Number ten(10);
    Number seven(7);
    cout << ten + seven; //17
    cout << "Testing subtract function:" << endl;
    cout << ten - seven; //3
    cout << "Testing multiply function:" << endl;
    cout << ten * seven; // 70
    cout << "Testing divide function:" << endl;
    cout << ten / seven; //1
    cout << "Testing modulus function:" << endl;
    cout << ten % seven; //3

    cout << "Testing += operator:" << endl;
    ten += seven;
    cout << ten; //17
    cout << "Testing -= operator:" << endl;
    ten -= seven;
    cout << ten; //10
    cout << "Testing *= operator:" << endl;
    ten *= seven;
    cout << ten; //70
    cout << "Testing /= operator:" << endl;
    ten /= seven;
    cout << ten; //10
    cout << "Testing %= operator:" << endl;
    ten %= seven;
    cout << ten; //3

    return 0;
}