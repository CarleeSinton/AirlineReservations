#include "Flight.h"
#include <iostream>

using namespace std;

namespace AirlineApp {

	void Flight::setFlightNumber(int flightNumber) {
		mFlightNumber = flightNumber;
	}

	int Flight::getFlightNumber() const {
		return mFlightNumber;
	}

	void Flight::setDepartureTime(int departureTime) {
		mDepartureTime = departureTime;
	}

	int Flight::getDepartureTime() const {
		return mDepartureTime;
	}

	void Flight::setArrivalTime(int arrivalTime) {
		mArrivalTime = arrivalTime;
	}

	int Flight::getArrivalTime() const {
		return mArrivalTime;
	}

	void Flight::displayFlight() const {
		cout << getFlightNumber() << "                   " << getDepartureTime() << ":00"
			<< "                   " << getArrivalTime() << ":00" << endl;
	}

}