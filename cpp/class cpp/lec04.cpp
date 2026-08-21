#include<bits/stdc++.h>
using namespace std;

class employee{
    public:
        long employeeId ;
        string name ;
        float salary ;

        void PrintEmployeeData(){
            cout<<employeeId<<" "<<name<<" "<<salary ;
        }
};

int main(){
    employee e[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Employee ID: ";
        cin>>e[i].employeeId ;
        cout<<"Enter Name: ";
        cin>>e[i].name ;
        cout<<"Enter Salary: ";
        cin>>e[i].salary ;
    }
    for(int i=0;i<5;i++){ 
        
        cout<<"\nEmployeeId-> "<<e[i].employeeId ;
        cout<<"\nName-> "<<e[i].name;
        cout<<"\nSalary-> "<<e[i].salary ;
    }   

    return 0;

}
