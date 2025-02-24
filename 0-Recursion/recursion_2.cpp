#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void myFunc(int a) {

    if (a > 0) {
        myFunc(a-1);
        cout << a << endl;
    }
}

int main () {
    int x = 5;

    myFunc(x);

    cout << "Finished" << endl;

    return 0;
}