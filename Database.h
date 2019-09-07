#pragma once
#include <string>
#include <vector>
#include "Passenger.h"
#include "Flight.h"

namespace AirlineApp {
	const int kFirstTicketNumber = 10;
	const int kFirstFlightNumber = 100;
	const int kFirstDepartureTime = 5;
	const int kFirstArrivalTime = 6;
	const int kSeatNumber = 0;


	class Database {
	public:
		Passenger& addPassenger(Flight& flight, const std::string& firstName, const std::string& lastName);
		Passenger& getPassenger(int ticketNumber);
		Passenger& getPassenger(const std::string& firstName, const std::string& lastName);
		
		Flight& addFlight();		
		Flight& getFlight(int flightNumber);

		void printFlights() const;
		
	private:
		std::vector<Passenger> mPassengers;
		std::vector<Flight> mFlights;
		std::string mSeats[40];
		int mNextTicketNumber = kFirstTicketNumber;
		int mNextFlightNumber = kFirstFlightNumber;
		int mNextDepartureTime = kFirstDepartureTime;
		int mNextArrivalTime = kFirstArrivalTime;
		int mSeatNumber = kSeatNumber;
	};
}
