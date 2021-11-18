#include <iostream>
#include "Account.h"
#include "Animal.h"
#include "Dog.h"
#include "Horse.h"
#include <string>
#include "Passenger.h"


using namespace std;

template <class T>

void Swap(T& x, T& y) {
    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    Passenger passenger1;

    passenger1.SetInfo();

    passenger1.AssignTicket(4437, "57C");
    passenger1.AssignTicket(1078, "12A");
    passenger1.AssignTicket(757, "29B");

    for (auto t : passenger1.PrintTicketStub()) {
        cout << t << "\n";
    }
    
    
    
    
    
    
    
    /*Animal * animal_ptr;
    Dog dog1;
    Horse horse1;

    animal_ptr = &dog1;
    animal_ptr->Speak();

    animal_ptr = &horse1;
    animal_ptr->Speak();*/
    
    
    
    /*int x, y;
    double a, b;
    string str1, str2;

    cout << "Enter two colours: ";
    cin >> str1 >> str2;

    cout << "Before swap: ";
    cout << "\nstr1 value is: " << str1;
    cout << "\nstr2 value is: " << str2;

    Swap(str1, str2);
    cout << "\n\nValues after Template function call: \n";

    cout << "\nstr1 value is: " << str1;
    cout << "\nstr2 value is: " << str2;*/



    //Array of 5 account objects
    /*Account acc[5];

    for (int i = 0; i < 5; i++) {
        acc[i].GetAcctInfo();
    }

    for (int i = 0; i < 5; i++) {

        if (acc[i].GetBalance() > 5000) {
            acc[i].DisplayAcctInfo();
        }
        
    }*/

    return 0;
}


