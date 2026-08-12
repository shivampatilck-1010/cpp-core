// Write a program to check whether a number is even or odd.
// Find the largest among three numbers.

#include <iostream>
using namespace std;
 
void checkEvenOdd(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0){   
        cout<<num<<" is an even number.\n";
    }
    else{
        cout<<num<<" is an odd number.\n";
    }
}

void findLargestNum(){
    int num1, num2, num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if (num1 == num2 && num2 == num3){
        cout<<"all are equal"<<endl;
    }
    else if (num1 >= num2 && num1 >= num3){
        cout<<num1<<" is largest num among them"<<endl;
    }
    else if(num2 >= num1 && num2 >= num3){
        cout<< num2<<" is largest num among them"<<endl;
    }
    else{
        cout<< num3<<" is largest num among them"<<endl;
    }
}

int main(){
    
    checkEvenOdd();
    findLargestNum();
    
    return 0;
    
}
