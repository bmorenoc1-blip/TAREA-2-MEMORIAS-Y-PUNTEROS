#include <iostream>
using namespace std;

int main() {

    int x = 8;
    int* p = &x;
    int* q = p;

    *q = 20;

    cout << x << endl;
    cout << *p << endl;
    cout << *q << endl;

    return 0;
}


