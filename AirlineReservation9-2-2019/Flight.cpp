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

	std::map<std::string, std::string> seats{
		{"1A", ""}, {"1B", ""}, {"1C", ""}, {"1D", ""},
		{"2A", ""}, {"2B", ""}, {"2C", ""}, {"2D", ""},
		{"3A", ""}, {"3B", ""}, {"3C", ""}, {"3D", ""},
		{"4A", ""}, {"4B", ""}, {"4C", ""}, {"4D", ""},
		{"5A", ""}, {"5B", ""}, {"5C", ""}, {"5D", ""},
		{"6A", ""}, {"6B", ""}, {"6C", ""}, {"6D", ""},
		{"7A", ""}, {"7B", ""}, {"7C", ""}, {"7D", ""},
		{"8A", ""}, {"8B", ""}, {"8C", ""}, {"8D", ""},
		{"9A", ""}, {"9B", ""}, {"9C", ""}, {"9D", ""},
		{"10A", ""}, {"10B", ""}, {"10C", ""}, {"10D", ""},
		{"11A", ""}, {"11B", ""}, {"11C", ""}, {"11D", ""},
		{"12A", ""}, {"12B", ""}, {"12C", ""}, {"12D", ""},
	};
}