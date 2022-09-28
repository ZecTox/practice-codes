#kuch error hai badme karunga solve


#include<bits/stdc++.h>
using namespace std;

class Student {

    private:
        string rating;
    public:
        string title;
        string director;
        string aRating;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
    
    void setRating(string aRating){
        
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13") || aRating == "R" | aRating == "NR");
        rating == aRating;
    }
    else{
        rating = "NR";
    }

string getRating(){
    return rating;
    
}
    
};
 
int main(){
    
    Movie avengers("The Avengers", "Joss Whendon", "PG-13");
    
    avengers.setRating("Dog");
    
    cout << avengers.getRating();
    
    
}
