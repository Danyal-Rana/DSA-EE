#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void myFunc(int m) {

    if (m < 10) {
        cout << m << endl;
        myFunc(m+1);
        cout << m << endl;
        myFunc(m+1);
    }
}

int main () {
    int x = 5;

    myFunc(x);

    cout << "Finished" << endl;

    return 0;
}