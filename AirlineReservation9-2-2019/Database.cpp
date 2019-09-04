#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <stdexcept>
#include "Database.h"
using namespace std;

namespace AirlineApp {


	Passenger& Database::addPassenger(const string& firstName, const string& lastName) {

		Passenger thePassenger(firstName, lastName);
		thePassenger.setTicketNumber(mNextTicketNumber++);
		mPassengers.push_back(thePassenger);

		return mPassengers[mPassengers.size() - 1];
	}

	Flight& Database::addFlight() {
		Flight tempFlight;
		tempFlight.setFlightNumber(mNextFlightNumber++);
		tempFlight.setDepartureTime(mNextDepartureTime += 3);
		tempFlight.setArrivalTime(mNextArrivalTime += 3);
		mFlights.push_back(tempFlight);

		return mFlights[mFlights.size() - 1];
	}

	void Database::printFlights() const {
		for (auto& flight : mFlights) {
			flight.displayFlight();
		}
	}

	Passenger& Database::getPassenger(int ticketNumber) {

		for (auto& passenger : mPassengers)
		{
			if (passenger.getTicketNumber() == ticketNumber)
			{
				return passenger;
			}
		}
		throw logic_error("No Passenger Found");
	}

	Passenger& Database::getPassenger(const string& firstName, const string& lastName)
	{
		for (auto& passenger : mPassengers) {
			if (passenger.getFirstName() == firstName &&
				passenger.getLastName() == lastName)
			{
				return passenger;
			}
		}
		throw logic_error("Ticket Number Not Found");
	}	
	
	Flight& Database::getFlight(int flightNumber) {
		for (auto& flight : mFlights)
		{
			if (flight.getFlightNumber() == flightNumber) {
				return flight;
			}
		}
	}
}