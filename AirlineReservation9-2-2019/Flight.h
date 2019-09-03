#pragma once
#include <string>

namespace AirlineApp {

	class Flight {
	public:
		void displayFlight() const;
		
		void setFlightNumber(int ticketNumber);
		int getFlightNumber() const;
		
		void setDepartureTime(int );
		int getDepartureTime() const;

		void setArrivalTime(int arrivalTime);
		int getArrivalTime() const;

	private:
		int mFlightNumber;
		int mDepartureTime;
		int mArrivalTime;
	};
}