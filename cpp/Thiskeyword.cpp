#include <iostream>
#include <string>
using namespace std;

class cricketer{
    public:
    string name; //this is a data member of the class cricketer which is used to store the name of the cricketer.
    int runs;    // this is also data member
    float avg;   // this is also data member
    cricketer(string name,int runs,float avg){ // insted of name -> n and runs -> r and avg -> a we can use same name for parameter and data member but we have to use this keyword to resolve the ambiguity and to access the data members of the class.
      
      
        //name = name;   }
        //runs = runs;    }  if u use like this then it will not work because the parameter name and the data member name are same so it will create ambiguity(conflict) for the compiler to understand which name we are talking about so we can use this keyword to resolve this ambiguity and to access the data members of the class.
        //avg = avg;     }  if u use then it will throw an garbage value but it not show error

        this->name = name; // this is a pointer which points to the current object of the class and we can use this pointer to access the data members of the class and to resolve the ambiguity when the parameter name and the data member name are same.
        this->runs = runs;
        this->avg = avg;

    }
};
int main(){
    cricketer c1("Virat Kohli", 7000, 59.0);
    cricketer c2("Rohit Sharma", 6000, 48.0);
    cout<<"Name: "<<c1.name<<" "<<"Runs: "<<c1.runs<<" "<<"Average: "<<c1.avg<<endl;
    cout<<"Name: "<<c2.name<<" "<<"Runs: "<<c2.runs<<" "<<"Average: "<<c2.avg<<endl;

return 0;
}