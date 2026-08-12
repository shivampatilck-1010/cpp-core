#include<iostream>
using namespace std;


void first_postincrement(int i) // pass by reference
{
    i= i+10;
    // i++; //postincrement
}
void second_postincrement(int i) // pass by reference
{
     i+=11;
    // i++; //postincrement
}


int main()
{
 int i=0;
 ++i;
 first_postincrement(i++); // calling i++ 
 second_postincrement(i++);
 cout<<i;

}

