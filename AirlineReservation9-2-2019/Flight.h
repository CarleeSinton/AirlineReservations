#pragma once
#include <string>
#include <map>
#include <vector>

namespace AirlineApp {

	class Flight {
	public:
		void displayFlight() const;
		
		void setFlightNumber(int ticketNumber);
		int getFlightNumber() const;
		
		void setDepartureTime(int departureTime);
		int getDepartureTime() const;

		void setArrivalTime(int arrivalTime);
		int getArrivalTime() const;

	private:
		int mFlightNumber;
		int mDepartureTime;
		int mArrivalTime;
	};
}