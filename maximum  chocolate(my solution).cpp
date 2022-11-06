#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int total_money;
    cin >> total_money;
    
    int total_chocolate;
    total_chocolate = total_money / 1;
    cout << " You can have "<<  total_chocolate << "chocolates with money" <<endl;
    int wrapper;
    wrapper = total_chocolate / 3;
    cout << "You can have " << wrapper << "chocolates with wrapper" << endl;
    int ttotal;
    ttotal = total_chocolate + wrapper;
    cout << ttotal << " are the total number of chocolates that you can have with money and wrapper";
    
    
    return 0;
}
