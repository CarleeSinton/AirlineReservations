#pragma once
#include <string>
#include <vector>
#include "Passenger.h"
#include "Flight.h"

namespace AirlineApp { 

	const int kFirstTicketNumber = 1;
	const int kFirstFlightNumber = 100;
	
	class Database {
	public:
		Passenger& addPassenger(const std::string& firstName, const std::string& lastName);
		Passenger& getPassenger(int ticketNumber);
		Passenger& getPassenger(const std::string& firstName, const std::string& lastName);
		Flight& printFlights();
		Flight& addFlight();

	private:
		std::vector<Passenger> mPassengers;
		std::vector<Flight> mFlights;
		int mNextTicketNumber = kFirstTicketNumber;
		int mNextFlightNumber = kFirstFlightNumber;
	};
}