#include "Passenger.h"
#include "Flight.h"
#include <iostream>
#include "Flight.cpp"

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

	void Passenger::setSeatNumber(const string& seatNumber) {
		mSeatNumber = seatNumber;
	}

	const string& Passenger::getSeatNumber() const {
		return mSeatNumber;
	}

	void Passenger::setFlightNumber(int flightNumber) {
		mFlightNumber = flightNumber;
	}

	int Passenger::getFlightNumber() const {
		return mFlightNumber;
	}

	void Passenger::displayPassenger() const {
		cout << "Name: " << getFirstName() << " " << getLastName() << endl;
		cout << "Ticket Number: " << getTicketNumber() << endl;
	}

	void Passenger::displayTicketInformation() const {
		cout << "Name: " << getFirstName() << " " << getLastName() << endl;
		cout << "Ticket Number: " << getTicketNumber() << endl;
		cout << "Seat Number: " << getSeatNumber() << endl;
		cout << "Flight Number: " << getFlightNumber() << endl;

	}
}