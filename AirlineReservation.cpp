// AirlineReservation9-2-2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Database.h"
using namespace AirlineApp;
using namespace std;

int displayMenu();
void addPassenger(Database& db, int flightSelection);
void getPassenger(Database& db);
void addFlight(Database& db);
void getFlight(Database& db);
void printFlight(Database& db);
int selectFlight(Database& db);
void displayTicket(Database& db);



int main()
{
	Database passengersDb;
	addFlight(passengersDb);
	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
		{
		int flightSelection = selectFlight(passengersDb);
		//add switch case here
		switch (flightSelection) {
		case 0:
			break;
		case 1:
			cout << "You picked flight 100" << endl;
			addPassenger(passengersDb, flightSelection);
			break;
		case 2:
			cout << "You picked flight 101" << endl;
			addPassenger(passengersDb, flightSelection);
			break;
		case 3:
			cout << "You picked flight 102" << endl;
			addPassenger(passengersDb, flightSelection);
			break;
		case 4:
			cout << "You picked flight 103" << endl;
			addPassenger(passengersDb, flightSelection);
			break;
		case 5:
			cout << "You picked flight 104" << endl;
			addPassenger(passengersDb, flightSelection);
			break;
		default:
			cerr << "Unknown command. Please try again." << endl;
			break;
		}
		break;
		}
		case 2:
			printFlight(passengersDb);
			break;
		case 3:
			getPassenger(passengersDb);
			break;
		case 4:
			getFlight(passengersDb);
			break;
		case 5:
			displayTicket(passengersDb);
			break;
		default:
			cerr << "Unknown command. Please try again." << endl;
			break;

		}
	}
}

void displayTicket(Database& db) {
	string firstName;
	string lastName;

	cout << "First Name: ";
	cin >> firstName;
	cout << "Last Name:  ";
	cin >> lastName;
	
	db.getPassenger(firstName, lastName).displayTicketInformation();
}

void getFlight(Database& db) {
	int flightNumber;

	cout << endl;
	cout << "Please Enter the Flight Number:";
	cin >> flightNumber;

	cout << endl;
	cout << "Flight Number" << "        " << "Departure Time" << "        " << "Arrival Time" << endl;
	cout << endl;
	db.getFlight(flightNumber).displayFlight();
	cout << endl;
}

void addFlight(Database& db) {
	db.addFlight();
	db.addFlight();
	db.addFlight();
	db.addFlight();
	db.addFlight();
}

void printFlight(Database& db) {
	cout << "Flights from Seattle to Vancouver:" << endl;
	cout << endl;
	cout << "Flight Number" << "        " << "Departure Time" << "        " << "Arrival Time" << endl;
	cout << endl;
	db.printFlights();
}

void addPassenger(Database& db, int flightSelection)
{
	string firstName;
	string lastName;
	Flight& flight = db.getFlight(flightSelection);
	cout << "First Name: ";
	cin >> firstName;
	cout << "Last Name:  ";
	cin >> lastName;

	db.addPassenger(flight, firstName, lastName);

	cout << endl;
	cout << "Thanks " << firstName << " " << lastName << "!" << endl;
	cout << endl;
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

int selectFlight(Database& db)
{
	int flightSelection;
	cout << endl;
	cout << "Please choose a flight: " << endl;
	cout << endl;
	cout << "Flight Number" << "        " << "Departure Time" << "        " << "Arrival Time" << endl;
	cout << endl;
	cout << "1. ";
	db.getFlight(100).displayFlight();
	cout << "2. ";
	db.getFlight(101).displayFlight();
	cout << "3. ";
	db.getFlight(102).displayFlight();
	cout << "4. ";
	db.getFlight(103).displayFlight();
	cout << "5. ";
	db.getFlight(104).displayFlight();
	cout << endl;
	cout << endl;
	cout << "0. Return to main menu." << endl;
	cout << endl;
	cin >> flightSelection;

	return flightSelection;
}


int displayMenu()
{
	int selection;
	cout << endl;
	cout << "Welcome to CS Airways." << endl; 
	cout << "We are excited to offer daily flights from Seattle to Vancouver!" << endl;
	cout << endl;
	cout << "Please Select an Option: " << endl;
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
