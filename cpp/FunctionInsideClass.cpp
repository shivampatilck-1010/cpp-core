#include <iostream>
#include <string>
using namespace std;

class cricketer{
    public:

 //data members 

    string name; 
    int runs;    
    float avg; 

 //constructor

    cricketer(string name,int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

// Function inside class

    void p(){ // here p is a function which is used to print the data members of the class and since this function is inside the class so we can access the data members of the class directly without using object of the class because this function is a member function of the class and it can access the data members of the class directly.
        cout<<"Name: "<<name<<" "<<"Runs: "<<runs<<" "<<"Average: "<<avg<<endl;

        // We can also use This keyword to access the data members of the class in this function like this:
        cout<<"Name: "<<this->name<<" "<<"Runs: "<<this->runs<<" "<<"Average: "<<this->avg<<endl;
    };
};


 //  { function outside the class }

        //    void p(cricketer obj){
        //        cout<<"Name: "<<obj.name<<" "<<"Runs: "<<obj.runs<<" "<<"Average: "<<obj.avg<<endl;
        //    };  
        
        
int main(){
    cricketer c1("Virat Kohli", 7000, 59.0);
    cricketer c2("Rohit Sharma", 6000, 48.0);

    //call functions to print data members of class when our function is outside the class

         // p(c1); -----> //this is call function  uses to print data members of class when our function is outside the class  
         // p(c2); ----->  // we can also use function inside the class
         
    c1.p(); // this is call function uses to print data members of class when our function is inside the class and since this function is inside the class so we can access the data members of the class directly without using object of the class because this function is a member function of the class and it can access the data members of the class directly.
    c2.p();
    


return 0;
}