#include "PassengerDatabase.h"
#include <iostream>
#include <stdexcept>
 
using namespace std;

namespace AirlineApp {
	Passenger& PassengerDatabase::addPassenger(const string& firstName, const string& lastName) {
		
		Passenger thePassenger(firstName, lastName);
		thePassenger.setTicketNumber(mNextNumber++);
		mPassengers.push_back(thePassenger);
		
		return mPassengers[mPassengers.size() - 1];
	}

	Passenger& PassengerDatabase::getPassenger(int ticketNumber) {

		for (auto& passenger : mPassengers)
		{
			if (passenger.getTicketNumber() == ticketNumber) 
			{
				return passenger;
			}
		}
		throw logic_error("No Passenger Found");
	}

}