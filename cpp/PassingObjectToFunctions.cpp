#include <iostream>
using namespace std;

class classs{
    public:
    string name;
};// this is our own datatype which is called class and we can create object of this class and we can access the data members of this class using object.

void p(classs obj){// here p is a function which takes an object of class c1 as parameter and prints the name of the object.
    cout<<obj.name<<endl;
};
void changename(classs& X){// here & is used to pass the object by reference so that we can change the name of the object in the main function using this function but if we pass the object by value then we cannot change the name of the object in the main function using this function because it will create a copy of the object and we will change the name of the copy of the object and not the original object.

    X.name = "newname";
}
void changename(classs X){// in this function we are passing the object by value so we cannot change the name of the object in the main function using this function because it will create a copy of the object and we will change the name of the copy of the object and not the original object.see for example if we have an object obj1 of class c1 and we pass this object to the function changename then it will create a copy of the object obj1 and we will change the name of the copy of the object and not the original object obj1 so when we print the name of the object obj1 in the main function it will still be the same as before and it will not be changed to "newname" because we have changed the name of the copy of the object and not the original object.
    X.name = "newname";
}


int main(){
    classs obj1,obj2,obj3,obj4,obj5,obj6,obj7,obj8,obj9,obj10,obj11,obj12,obj13,obj14,obj15,obj16,obj17,obj18,obj19,obj20;
    obj1.name = "shivam";
    obj2.name = "soham";
    obj3.name = "sachin";
    obj4.name = "sanvi";
    obj5.name = "akash";
    obj6.name = "Aarav";
    obj7.name = "Vihaan";
    obj8.name = "Ananya";
    obj9.name = "Ishaan";
    obj10.name = "Diya";
    obj11.name = "Rohan";
    obj12.name = "Meera";
    obj13.name = "Karan";
    obj14.name = "Priya";
    obj15.name = "Arjun";
    obj16.name = "Neha";
    obj17.name = "Rahul";
    obj18.name = "Sneha";
    obj19.name = "Aditya";
    obj20.name = "Kavya";//this is to much data for printing one by one so we can use function to print the data members of the class.

    p(obj1);
    p(obj2);
    p(obj3);
    p(obj4);
    p(obj5);
    p(obj6);
    p(obj7);
    p(obj8);
    p(obj9);
    p(obj10);
    p(obj11);
    p(obj12);
    p(obj13);
    p(obj14);
    p(obj15);
    p(obj16);
    p(obj17);
    p(obj18);
    p(obj19);
    p(obj20);//here we are passing the object of class c1 to the function p and printing the name of the object using the function p.


//.......................................................................................
//......................................................................................





