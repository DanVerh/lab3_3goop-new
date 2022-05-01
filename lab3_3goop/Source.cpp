//Source.cpp

#include "Account.hpp"
#include "Money.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Money b(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2);
    cout << b;
    Money c(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
    Account a;
    a.Init("john", 0001, 1.5, b);
    a.Withdraw(c);
    a.Display();
    cout << "count = " << Object::Count() << endl;

    return 0;
}
