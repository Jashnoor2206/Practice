#include <iostream>
using namespace std;

int func(int a, int b){
    return a+b;
}

int multiply(int a, int b){
    return a*b;
}

int main(){
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;
    cout << "Multiplication of two numbers is : " << multiply(a, b);
}