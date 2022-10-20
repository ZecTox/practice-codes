#include<bits/stdc++.h>
using namespace std;

void printArray(){    
}
int main() {
    
    int number [15];
    
    cout << "Value at 15 index " << number[15] << endl;
    
    int second[3] = {5,7,11};
    
    cout << "Value at 2 index " << second[2] << endl;
    
    cout << endl << "everything is Fine" << endl << endl;
    
    int third[15] = {2,7};
    
    int n = 15;
    cout << "printing the array" << endl;
    
    for(int i = 0; i < n; i++ ) {
        cout << third[i] << " ";
    }
    
    return 0;
}
