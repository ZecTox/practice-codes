#include <bits/stdc++.h>
using namespace std;

struct person { 
    string name;
    int age;
    bool do_programming;
};

int main (void){
    //Declaring person's
    person p1;
    person p2;

    //Setting person 1's values
    p1.name = "alice";
    p1.age = 20;
    p1.do_programming = true;

    //Setting person 2's values
    p2.name = "bob";
    p2.age = 18;
    p2.do_programming = false;

    //Printing out
    cout << p1.name << " (" << p1.age << ")" << endl;
    cout << p2.name << " (" << p2.age << ")" << endl;

    return 0;
}
