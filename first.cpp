#include <iostream>
using namespace std;

int func(int a, int b){
    return a+b;
}

int main(){
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;
    cout << "Sum of two numbers is : " << func(a, b);
}