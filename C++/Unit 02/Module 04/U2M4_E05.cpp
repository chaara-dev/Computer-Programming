#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int f = 40;
    float s = 79.569;

    cout << f << typeid(f).name() << endl;
    cout << s << typeid(s).name() << endl;
    
    return 0;
}