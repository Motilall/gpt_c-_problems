#include<iostream>
using namespace std;

int main(){
    int a = 0, i;
    cout << "Enter the number up to which you want to calculate the sum: ";
    cin >> a;

    int sum = 0; // Initialize sum variable to store the sum

    for(i = 1; i <= a; i++){
        sum += i; // Add current number to sum
    }

    cout << "The sum of numbers from 1 to " << a << " is: " << sum << endl;
    return 0;
} 
