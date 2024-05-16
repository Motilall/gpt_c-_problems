// convert celsius to fahrenheit
#include<iostream>
using namespace std;

int main(){

    int c;
    cout << "Enter the value of celsius that you want to convert" << endl;
    float f;
    cin >> c;
    f = (c*9/5)+32;
    cout << "The converted value into Fahrenheit is: " << f << endl;

    return 0;
}
