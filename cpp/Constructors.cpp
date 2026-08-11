#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    float cgpa;

    //constructor is a special member function of a class that is used to initialize the objects of the class. It is automatically called when an object of the class is created. The constructor has the same name as the class and does not have a return type. It can be defined inside or outside the class. If we do not define a constructor for a class, then the compiler will automatically generate a default constructor for us which will initialize the data members of the class to their default values.
    student(){  // this is called default constructor which is used to initialize the objects of the class with default values. It is automatically called when an object of the class is created and no arguments are passed to it. The default constructor has the same name as the class and does not have a return type. It can be defined inside or outside the class. If we do not define a default constructor for a class, then the compiler will automatically generate a default constructor for us which will initialize the data members of the class to their default values.
        name = "defaultname";  
        rollno = 0;            
        cgpa = 0.0;            
    }

    student(string n, int r, float c){  // }
        name = n;                       //   }
        rollno = r;                     //     } ( constructor ) we can create it outside the class.
        cgpa = c;                       //   }
    }                                   // }




};
int main(){
    student var1("shivam", 123, 9.5);
    student var2("soham", 11, 9.0);
    student var3(var2);                 // this is called copy constructor which is used to create a copy of an object of a class. It is automatically called when we create an object of a class and initialize it with another object of the same class. The copy constructor has the same name as the class and takes a reference to an object of the same class as its parameter. It can be defined inside or outside the class. If we do not define a copy constructor for a class, then the compiler will automatically generate a default copy constructor for us which will create a shallow copy of the object.
    student var4 = var1;                //deep copy constructor


cout<<"Name: "<<var1.name<<" "<<"rollno: "<<var1.rollno<<" "<<"cgpa: "<<var1.cgpa<<endl;
cout<<"Name: "<<var2.name<<" "<<"rollno: "<<var2.rollno<<" "<<"cgpa: "<<var2.cgpa<<endl;
cout<<"Name: "<<var3.name<<" "<<"rollno: "<<var3.rollno<<" "<<"cgpa: "<<var3.cgpa<<endl;
cout<<"Name: "<<var4.name<<" "<<"rollno: "<<var4.rollno<<" "<<"cgpa: "<<var4.cgpa<<endl;
return 0;
}