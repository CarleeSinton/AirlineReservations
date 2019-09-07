#include "Passenger.h"
#include <iostream>

using namespace std;

namespace AirlineApp {

	Passenger::Passenger(const string& firstName, const string& lastName, const string seatNumber) :
		mFirstName(firstName), mLastName(lastName), mPassengerSeatNumber(seatNumber)
	{ }


	const string& Passenger::getFirstName() const {
		return mFirstName;
	}

	const string& Passenger::getLastName() const {
		return mLastName;
	}

	void Passenger::setTicketNumber(int ticketNumber) {
		mTicketNumber = ticketNumber;
	}

	int Passenger::getTicketNumber() const {
		return mTicketNumber;
	}

	const string& Passenger::getPassengerSeatNumber() const {
		return mPassengerSeatNumber;
	}

	void Passenger::displayPassenger() const {
		cout << endl;
		cout << "Name: " << getFirstName() << " " << getLastName() << endl;
		cout << "Ticket Number: " << getTicketNumber() << endl;
		cout << endl;
	}

	void Passenger::displayTicketInformation() const {
		cout << endl;
		cout << "Name: " << getFirstName() << " " << getLastName() << endl;
		cout << "Ticket Number: " << getTicketNumber() << endl;
		cout << "Seat Number: " << getPassengerSeatNumber() << endl;
		cout << endl;
	}
}