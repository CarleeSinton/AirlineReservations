// AirlineReservation9-2-2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Database.h"
using namespace AirlineApp;
using namespace std;

int displayMenu();
void addPassenger(Database& db);
void getPassenger(Database& db);
void addFlight(Database& db);
void getFlight(Database& db);

int main()
{
	Database passengersDb;
	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			addPassenger(passengersDb);
			break;
		case 2:
			addFlight(passengersDb);
			break;
		case 3:
			getPassenger(passengersDb);
			break;
		case 4:
			getFlight(passengersDb);
		case 5:
		default:
			cerr << "Unknown command. Please try again." << endl;
			break;

		}
	}
}

void getFlight(Database& db) {
	int flightNumber;

	cout << endl;
	cout << "Please Enter the Flight Number:";
	cin >> flightNumber;

	cout << "Flight Number" << "        " << "Departure Time" << "        " << "Arrival Time" << endl;

	db.getFlight(flightNumber).displayFlight();
}

void addFlight(Database& db) {
    
	cout << "Flights" << endl;
	cout << "Flight Number" << "        " << "Departure Time" << "        " << "Arrival Time" << endl;
	db.addFlight();
	db.addFlight();
	db.addFlight();
	db.addFlight();
	db.addFlight();

	db.printFlights();


}

void addPassenger(Database& db)
{
	string firstName;
	string lastName;

	cout << "First Name: ";
	cin >> firstName;
	cout << "Last Name:  ";
	cin >> lastName;

	db.addPassenger(firstName, lastName);

	cout << "Thanks " << firstName << " " << lastName << "!" << endl;
	cout << "Ticket Information: " << endl;

	db.getPassenger(firstName, lastName).displayPassenger();
}

void getPassenger(Database& db)
{
	int ticketNumber;

	cout << "Ticket Number: ";
	cin >> ticketNumber;

	db.getPassenger(ticketNumber).displayPassenger();
}

int displayMenu()
{
	int selection;
	cout << endl;
	cout << "CS Airways' Reservations Menu: " << endl;
	cout << "1. Reserve a seat" << endl;
	cout << "2. Flight Schedule" << endl;
	cout << "3. Display Passenger information" << endl;
	cout << "4. Flight Details" << endl;
	cout << "5. Ticket information" << endl;
	cout << "0. Exit" << endl;
	cout << endl;
	cin >> selection;

	return selection;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
