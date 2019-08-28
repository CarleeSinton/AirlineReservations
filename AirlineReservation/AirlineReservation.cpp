// AirlineReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		default:
			cerr << "Unknown command. Please try again." << endl;
			break;
		}
 }
}

int displayMenu()
{
	int selection;
	cout << endl;
	cout << "CS Airways' Reservations Menu: " << endl;
	cout << "1. Reserve a seat" << endl;
	cout << "2. Flight Schedule" << endl;
	cout << "3. Display Passenger info" << endl;
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
