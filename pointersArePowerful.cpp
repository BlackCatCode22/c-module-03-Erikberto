#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int *p;
    p = &a;
    cout << "Address of pointer p: " << p << endl;
    cout << "Value of using  pointer p: " << *p << endl;
    *p = 20;
    cout << "New value of a: " << a << endl;


    return 0;
}