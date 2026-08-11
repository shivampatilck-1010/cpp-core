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
};

int main() {
    cricketer c1("Virat Kohli", 7000, 59.0);
    cricketer c2("Rohit Sharma", 6000, 48.0);







    return 0;
}