// garbage value  coming when we create an object of class animal because we have not initialized any member variables in the constructor. The default constructor does not set any values, so the member variables will contain garbage values. To avoid this, we can initialize the member variables in the constructor or use member initializer lists.

#include <bits/stdc++.h>
using namespace std;

class animal{

    public:
        string name ;
        int age ;
        string color ;

        animal(string name, int age, string color){
            // using this keyword to refer to the current object and initialize the member variables
            // this keyword is a pointer to the current object and we can use it to access the member variables of the class. We can use this keyword to refer to the current object and initialize the member variables. This way we can avoid garbage values and initialize the member variables in the constructor.
            this->name = name;
            this->age = age;
            this->color = color;
        }
        void printAnimalData(){
            cout<<"Name: "<<name<<"\nAge: "<<age<<"\nColor: "<<color<<endl;
        }

        // using distructor to free the memory allocated for the object. The destructor is called when the object goes out of scope or is deleted. The destructor is used to free the memory allocated for the object and perform any cleanup operations. The destructor is called automatically when the object goes out of scope or is deleted. The destructor is defined using the ~ symbol followed by the class name. The destructor does not take any parameters and does not return any value. The destructor is called automatically when the object goes out of scope or is deleted. The destructor is used to free the memory allocated for the object and perform any cleanup operations. The destructor is called automatically when the object goes out of scope or is deleted. The destructor is defined using the ~ symbol followed by the class name. The destructor does not take any parameters and does not return any value.
        ~animal(){
            name = "";
            age = -1;
            color = "";
            cout<<"Destructor called for "<<name<<endl; 
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