#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student (string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
    }
    
    bool hasHonours(){
        if(gpa >= 3.5){
            return true;
        }
        return false;
    }
    
};

int main(){
    
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.5);
    
    cout << student1.hasHonours();
    
    
}
