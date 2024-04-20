#include<iostream>
using namespace std;

int sum(int num1, int num2){
    return num1 + num2;
};

int main(){
    int num1, num2;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;
    int result = sum(num1, num2);
    cout << "The sum of the two numbers is: " << result << endl;

    return 0;
}