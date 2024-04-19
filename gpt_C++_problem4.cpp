#include<iostream>
using namespace std;
int main(){
    int a,sum,i;
    cout << "Enter the value of a " << endl;
    cin>> a;
    sum = 1;
    for(i = 1;i<=a;i++){
        sum *= i;
    }
        cout << sum;
    return 0;
}