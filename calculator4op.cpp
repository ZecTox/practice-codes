#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    int result;
    
    if(op == '+'){
        result = num1 + num2;
    }
    else if(op == '-'){
        result = num1 - num2;
    }
    else if(op == '/'){
        result = num1 / num2;
    }
    else if(op == '*'){
        result = num1 * num2;
    }
    else {
        cout << "Invalid operator";
    }
    cout << result;
}
    
