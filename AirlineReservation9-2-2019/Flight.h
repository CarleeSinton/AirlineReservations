#pragma once
#include <string>
#include <map>
#include <vector>
#include "Passenger.h"

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

		//void setSeatNumber();
		void setSeatNumber(int index);
		std::string& getSeatNumber(int index);

		
	private:
		int mFlightNumber;
		int mDepartureTime;
		int mArrivalTime;
		std::vector<std::string> Seats;
		//std::map<std::string, std::vector<Passenger>> mSeats;

	};
}