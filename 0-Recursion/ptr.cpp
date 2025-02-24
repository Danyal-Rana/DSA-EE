#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    int x = 5;
    int *y = &x;

    *y = ++*y;

    cout << y << endl;
    cout << x << endl;
    return 0;
}