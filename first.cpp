#include <iostream>
using namespace std;

int func(int a, int b){
    return a+b;
}

int main(){
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;
    cout << "Difference of two numbers is : " << sub(a, b);
}