// garbage value  coming when we create an object of class animal because we have not initialized any member variables in the constructor. The default constructor does not set any values, so the member variables will contain garbage values. To avoid this, we can initialize the member variables in the constructor or use member initializer lists.

#include <bits/stdc++.h>
using namespace std;

class animal{

    public:
        string name ;
        int age ;
        string color ;

        animal(string n, int a, string c){
            // name = n ;
            // age = a ;
            // color = c ;

            
            // that gives garbage value because we have not initialized the member variables in the constructor. The default constructor does not set any values, so the member variables will contain garbage values. To avoid this, we can initialize the member variables in the constructor or use member initializer lists.
            // there is default constructor which is called when we create an object of class animal. The default constructor does not set any values, so the member variables will contain garbage values. To avoid this, we can initialize the member variables in the constructor or use member initializer lists.
        }
        void printAnimalData(){
            cout<<"Name: "<<name<<"\nAge: "<<age<<"\nColor: "<<color<<endl;
        }
};

int main(){
    animal a1("Dog", 5, "Brown");
    animal a2("Cat", 3, "Black");
    animal a3("Parrot", 2, "Green");

    a1.printAnimalData();
    a2.printAnimalData();
    a3.printAnimalData();

    return 0;
}