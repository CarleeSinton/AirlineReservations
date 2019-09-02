#include "Passenger.h"
#include <iostream>

using namespace std;

namespace AirlineApp {
	Passenger::Passenger(const string& firstName, const string& lastName):
		mFirstName(firstName),mLastName(lastName)
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
		cout << "TicketNumber: " << getTicketNumber() << endl;
		
	}

	int mFlightNumber = 1234;
	string mDeparture = "8:00 A.M.";
	string mArrival = "9:00 A.M.";

	void Passenger::displayFlight() const {
		cout << "Flight Information: " << endl;
		cout << "Flight Number: " << mFlightNumber << endl;
		cout << "Departure Time" << mDeparture << endl;
		cout << "Arrival Time" << mArrival << endl;
	}
}