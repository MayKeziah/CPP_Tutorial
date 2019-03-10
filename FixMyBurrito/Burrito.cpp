#include "Burrito.hpp"
#include <iostream>

using namespace std;

Burrito::Burrito(int a = 5, int b = 7)
//: means working with member initializer syntax
: numBurrito(a), 
 constBurrito(b)

{
    cout << "Lets make a grande Burrito!" << endl;
}

Burrito::~Burrito()
{
    cout << "Burrito Destroyed!" << endl;
}

void Burrito::makeBurrito()
{
    cout << "(xxxx)" << endl;
}

void Burrito::print()
{
    cout << "Number of Burritos eaten is " << numBurrito << endl;
    cout << "Constant offered Burritos is " << constBurrito << endl;

}

void Burrito::print() const
{
    cout << "Number of Burritos eaten is " << numBurrito << endl;
    cout << "Constant offered Burritos is " << constBurrito << endl;

}