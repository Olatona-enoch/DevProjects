#include <iostream>
#include <string>

using namespace std;

// Function to display available locations

void displayLocations() {  
    cout << "=== Available Locations ===\n";
    std::cout<<"1.Lekki"<<endl;
    cout<<"2.Surulere"<<endl;
    cout<<"3.Palms"<<endl;
    cout<<"4.Circle Mall"<<endl;
    cout<<"5.Oniru"<<endl;
    cout<<"6.Landmark"<<endl;
    cout<<"7.Ikota"<<endl;
    cout << "Enter: ";
}
void displayDays() {
    std::cout<<"1.Sunday"<<endl;
    cout<<"2.Monday"<<endl;
    cout<<"3.Tuesday"<<endl;
    cout<<"4.Wednesday"<<endl;
    cout<<"5.Thursday"<<endl;
    cout<<"6.Friday"<<endl;
    cout<<"7.Saturday"<<endl;
   
}

// Function to display available movie types
void displayMovieTypes() {
    cout<<""<<endl;
    cout<<"==== Movies Available ===="<<endl;
    cout<<"1.Beast of Two Worlds(AJAKAJU)--#5,500"<<endl;
    cout<<"2.Godzilla-Kong: The New Empire--#5,500"<<endl;
    cout<<"3.Ghostbusters: Frozen Empire--#5,500"<<endl;
    cout<<"4.Kung Fu Panda 4--#5,500"<<endl;
    cout<<"5.Dune: Part Two--#5,500"<<endl;
    cout<<"6.All's Fair in Love--#5,500"<<endl;
    
}

// Function to display available show times
void displayShowTimes() {
    cout<<""<<endl;
    cout << "==== Available Show Times: ====" << endl;
    cout << "1. 10:00 AM" << endl;
    cout << "2. 12:00 PM" << endl;
    cout << "3. 2:00 PM" << endl;
    cout << "4. 4:00 PM" << endl;
    cout << "5. 6:00 PM" << endl;
}

int main() {
    int location, movie, showTime, day, number_of_tickets;
    string locationStr, movieStr, showTimeStr, dayStr;
    int price =5500;
    int totalprice;
   
    cout << "       WELCOME TO ENNY CINEMA      "<<endl;
    cout << "------------------------------------------------------"<<endl;

    cout << "Where would you be watching from? \n"<<endl;
    displayLocations();
    while (!(cin >> location) || location < 1 || location > 7) {
        cout << "Invalid input. Please enter a number between 1 and 7: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
     
      switch (location) {
        case 1:
            locationStr = "Lekki";
            break;
        case 2:
            locationStr = "Surulere";
            break;
        case 3:
            locationStr = "Palms";
            break;
        case 4:
            locationStr = "Circle Mall";
            break;
        case 5:
            locationStr = "Oniru";
            break;
        case 6:
            locationStr = "Landmark";
            break;
        case 7:
            locationStr = "Ikota";
            break;
        default:
             cout<< ""<<endl;
    }
     

    cout <<" "<<endl;
    cout << "Choose the day you will like to watch A movie"<<endl;
    displayDays();
    cout << "Enter: ";
    while (!(cin >> day) || day < 1 || day > 7) {
        cout << "Invalid input. Please enter a number between 1 and 7: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    displayMovieTypes();
    cout << "Select Movie: ";
    while (!(cin >> movie) || movie < 1 || movie > 6) {
        cout << "Invalid input. Please enter a number between 1 and 6: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    displayShowTimes();
    cout << "Select Show Time: ";
    while (!(cin >> showTime) || showTime < 1 || showTime > 5) {
        cout << "Invalid input. Please enter a number between 1 and 5: ";
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout <<" "<<endl;
    cout << "Enter the number of tickets you wish to buy "<<endl;
    while (!(cin >> number_of_tickets) || number_of_tickets < 1) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    totalprice= number_of_tickets * price;
  
 switch (day) {
        case 1:
            dayStr = "Sunday";
            break;
        case 2:
            dayStr = "Monday";
            break;
        case 3:
            dayStr = "Tuesday";
            break;
        case 4:
            dayStr = "Wednesday";
            break;
        case 5:
            dayStr = "Thursday";
            break;
        case 6:
            dayStr = "Friday";
            break;
        case 7:
            dayStr = "Saturday";
            break;
        default:
             cout<< "invalid Option";
    }
    switch (movie) {
        case 1:
            movieStr = "Beast of Two Worlds(AJAKAJU)";
            break;
        case 2:
            movieStr = "Godzilla-Kong: The New Empire";
            break;
        case 3:
            movieStr = "Ghostbusters: Frozen Empire";
            break;
        case 4:
            movieStr = "Kung Fu Panda 4";
            break;
        case 5:
            movieStr = "Dune: Part Two";
            break;
        case 6:
            movieStr = "All's Fair in Love";
            break;    
        default:
            movieStr = "Unknown Movie ";
    }

    switch (showTime) {
        case 1:
            showTimeStr = "10:00 AM";
            break;
        case 2:
            showTimeStr = "12:00 PM";
            break;
        case 3:
            showTimeStr = "2:00 PM";
            break;
        case 4:
            showTimeStr = "4:00 PM";
            break;
        case 5:
            showTimeStr = "6:00 PM";
            break;
        default:
            showTimeStr = "Unknown Show Time";
    }

    // Print ticket receipt
    cout << "\n--- Ticket Receipt ---" << endl;
    cout << "Location: " << locationStr << endl;
    cout << "Movie: " << movieStr << endl;
    cout << "Number of Tickets: " << number_of_tickets << endl;
    cout << "Price: "<<"N" << totalprice << endl;
    cout << "Day: " << dayStr << endl;
    cout << "Show Time: " << showTimeStr << endl;

    return 0;
}