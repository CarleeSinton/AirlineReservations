#include "Flight.h"
#include <iostream>

using namespace std;

namespace AirlineApp {
	void Flight::printFlightNumber() {
		cout << "Flight Number:" << mFlightNumber;
	}

	void Flight::setFlightNumber(int flightNumber) {
		mFlightNumber = flightNumber;
	}
}