#include "Passenger.h"
#include <iostream>

using namespace std;

namespace AirlineApp {

	Passenger::Passenger(const string& firstName, const string& lastName) :
		mFirstName(firstName), mLastName(lastName)
	{ }

	void Passenger::setFirstName(const string& firstName) {
		mFirstName = firstName;
	}

	const string& Passenger::getFirstName() const {
		return mFirstName;
	}

	void Passenger::setLastName(const string& lastName) {
		mLastName = lastName;
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

	void Passenger::displayPassenger() const {
		cout << "Name:" << getFirstName() << " " << getLastName() << endl;
		cout << "Ticket Number: " << getTicketNumber() << endl;
	}
}