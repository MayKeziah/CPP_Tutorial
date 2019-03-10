#include <iostream>
//#include "Burrito.hpp"
#include "Burrito.cpp"

using namespace std;

int main()
{
    Burrito bo(1);
    Burrito *boPointer = &bo;
    bo.makeBurrito();
    boPointer->makeBurrito();
    bo.print();

    const Burrito bo2(1, 2);
    bo2.print();
    cout << "Oooooooo mama, I love burritos..." << endl;

}