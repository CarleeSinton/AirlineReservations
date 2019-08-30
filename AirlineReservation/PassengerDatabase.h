#pragma once
#include <vector>
#include "Passenger.h"

namespace AirlineApp {

	const int kFirstNumber = 1000;
	class PassengerDatabase {
	public:
		Passenger& addPassenger(const std::string& firstName, const std::string& lastName);
		Passenger& getPassenger(int ticketNumber);
		Passenger& getPassenger(const std::string& firstName, const std::string& lastName);


	private:
		std::vector<Passenger> mPassengers;
		int mNextNumber = kFirstNumber;
	};
}