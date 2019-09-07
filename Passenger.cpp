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

	void Passenger::setPassengerFlightNumber(int flightPassengerNumber) {
		mPassengerFlightNumber = flightPassengerNumber;
	}

	int Passenger::getPassengerFlightNumber() const {
		return mPassengerFlightNumber;
	}

	void Passenger::displayPassenger() const {
		cout << "Name: " << getFirstName() << " " << getLastName() << endl;
		cout << "Ticket Number: " << getTicketNumber() << endl;
	}

	void Passenger::displayTicketInformation() const {
		cout << "Name: " << getFirstName() << " " << getLastName() << endl;
		cout << "Ticket Number: " << getTicketNumber() << endl;
		cout << "Seat Number: " << getPassengerSeatNumber() << endl;
	}
}