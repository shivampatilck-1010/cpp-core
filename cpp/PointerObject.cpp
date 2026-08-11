#include <iostream>
#include <string>
using namespace std;

class cricketer {
public:
    string name;
    int runs;
    float avg;

    cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

   // inside the class so used ()
 void change(){
    runs = 10000; 
    name= " yes my name shivam"; //in this changed without (class& obj) because it is inside the class
 }


};

void changeHI(cricketer& x){
    x.name ="HI this is my new name";
};



 void avg(cricketer *x){// pass by value if pass by refrence then use this (cricketer* x) 
    x->avg = x->avg+5;// x->avg += 5 if not change it completly it will update the copied pointer value by 5 but if we change it completly then it will update the copied pointer value to 5 and not add 5 to it.(in case of pass by value it will not change the original object value because it will create a copy of the object and we will change the value of the copy of the object and not the original object but in case of pass by reference it will change the original object value because it will not create a copy of the object and we will change the value of the original object directly.)
    cout<<"changed avg is : "<<x->avg<<endl;
    };    


int main() {

    cricketer c1("Virat Kohli", 7000, 59.0);
    cricketer c2("Rohit Sharma", 6000, 48.0);




// call for inside the class function
    c1.change();
    cout<<"changed runs of c1: "<<c1.runs<<endl;
    cout<<"changed name of c1: "<<c1.name<<endl;





//call for outside the class function
    changeHI(c1);
    cout<<"changed name of c1: "<<c1.name<<endl;
 cout<<"Name: "<<c1.name<<" "<<"Runs: "<<c1.runs<<" "<<"Average: "<<c1.avg<<endl;

// calling outside the class function using pointer
avg(&c1);



    // int x=4;
    // int *ptr=&x;
    // *ptr=100;
    // cout<<*ptr<<endl;
    // cout<<x<<endl;
   
   
    //important u can write a->b instead of (*a).b to access the data members of the class using pointer to object because it is more convenient and easier to read and write than (*a).b and it is also more efficient than (*a).b because it does not require dereferencing the pointer to access the data members of the class. 

    // here a is pointer and b is data member of class.

    
return 0; // this is the end of the main function and the program will return 0 to the operating system which means that the program has executed successfully without any errors.

}