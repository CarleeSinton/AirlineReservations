#pragma once
#include <string>

namespace AirlineApp {

	class Flight {
	public:
		void printFlightNumber();
		void setFlightNumber(int flightNumber);
		
	private:
		int mFlightNumber;
	};

}