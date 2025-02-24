#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void myFunc(int x) {

    if (x > 0) {
        cout << x << endl;
        myFunc(x-1);
    }
}

int main () {
    int x = 10;

    myFunc(x);

    cout << "Finished" << endl;

    return 0;
}