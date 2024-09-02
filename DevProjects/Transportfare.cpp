//No 2.
#include <iostream>
#include <string>

using namespace std;
void transport();
double transport(int amount);

int main() {
    transport();

    cout << "You have missed your appointment... What would you like to do:" << endl;
    cout << "1. Request for a refund" << endl;
    cout << "2. Reschedule a new appointment" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Okay, your money will be refunded back to you in the next 5 business days." << endl;
            cout << "Thank you." << endl;
            break;
        case 2:
            cout << "Enter the amount you paid for the missed appointment: ";
            int amount;
            cin >> amount;
            cout << "Your extra charges will be: N" << transport(amount) << endl;
            cout << "You will be reminded of your new appointment 30 mins before our departure. Thank you!" << endl;
            break;
        default:
            cout << "Error, please input either 1 or 2 to make a decision." << endl;
            cout << "Try again." << endl;
    }

    return 0;
}

void transport() {
    string name, num, date;
    
    cout << "Enter your name: ";
    cin >>name;
    cout << "Enter your phone number: ";
    cin >>num;
    cout << "Enter the date of travel: (DD/MM/YYYY) ";
    cin >>date;
    cout << "Your travel appointment was booked for 2pm, " << date << endl;
}

double transport(int amount) {
    double charges = amount * 0.15;
    return charges;
}

