// code a gpay using classes
// class should have->
//- attribute-
//- functions- getter and setter
//- functions- behaviors
// creating 5 users and performing transactions between two of them
//- constructor and destructor
#include <bits/stdc++.h>
using namespace std;

class GPay {
private:
    string name;
    float balance;

public:
    GPay(string n, float b) : name(n), balance(b) {} // this is a constructor that initializes the name and balance of the user
    ~GPay() {                    // this is a destructor that is called when the object goes out of scope or is deleted. The destructor is used to free the memory allocated for the object and perform any cleanup operations. The destructor is called automatically when the object goes out of scope or is deleted. The destructor is defined using the ~ symbol followed by the class name. The destructor does not take any parameters and does not return any value.
        if (balance > 0) {
            cout << "Destructor called for " << name << ". Remaining balance: Rs. " << balance << endl;
        } else {
            cout << "Destructor called for " << name << ". No remaining balance." << endl;
        }
        cout << "Destructor called for " << name << endl;
    }

    string getName() {   // this is a getter function that returns the name of the user
        return name;
    }

    float getBalance() {    // this is a getter function that returns the balance of the user
        return balance;
    }

    void setBalance(float newBalance) {  // this is a setter function that sets the balance of the user
        balance = newBalance;
    }

    void gpayTransaction(GPay &receiver, float amount) {   // this is a function that performs a transaction between two users. It takes the receiver object and the amount to be transferred as parameters. It checks if the sender has sufficient balance to perform the transaction. If yes, it deducts the amount from the sender's balance and adds it to the receiver's balance. It also prints the transaction details. If not, it prints an error message indicating insufficient funds.
        if (balance >= amount) {
            balance -= amount;
            receiver.balance += amount;        // this is a pointer to the current object and we can use it to access the member variables of the class. We can use this keyword to refer to the current object and initialize the member variables. This way we can avoid garbage values and initialize the member variables in the constructor.
            cout << "Transaction Details:\n";
            cout << "Sender: " << name << "\n";
            cout << "Receiver: " << receiver.name << "\n"; 
            cout << "Amount: Rs. " << amount << "\n";
            cout << "Transaction Successful!\n";
        } else {
            cout << "Insufficient funds!\n";
        }
    }
};

int main() {
    GPay user1("Alice", 100.0); // this is a constructor that initializes the name and balance of the user
    GPay user2("Bob", 50.0);
    GPay user3("Charlie", 75.0);
    GPay user4("Diana", 25.0);
    GPay user5("Eve", 125.0);

    user1.gpayTransaction(user2, 25.0);  // this is a function that performs a transaction between two users. It takes the receiver object and the amount to be transferred as parameters. It checks if the sender has sufficient balance to perform the transaction. If yes, it deducts the amount from the sender's balance and adds it to the receiver's balance. It also prints the transaction details. If not, it prints an error message indicating insufficient funds.
    user3.gpayTransaction(user4, 10.0);
    user5.gpayTransaction(user1, 50.0);

    return 0;
}