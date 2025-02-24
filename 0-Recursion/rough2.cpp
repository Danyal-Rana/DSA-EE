#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    int x = 5;
    int &y = x;

    y = y*10;

    cout << x << endl; //5
    cout << (y); //50

    return 0;
}