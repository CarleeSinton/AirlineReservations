#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <stdexcept>
#include "Database.h"
using namespace std;

namespace AirlineApp {


	Passenger& Database::addPassenger(Flight& flight, const string& firstName, const string& lastName) {
		string temp = "";
		if (mSeatNumber % 4 == 0) {
			temp = std::to_string(mSeatNumber) + "D";
		}
		else if (mSeatNumber % 3 == 0) {
			temp = std::to_string(mSeatNumber) + "C";
		}
		else if (mSeatNumber % 2 == 0) {
			temp = std::to_string(mSeatNumber) + "B";
		}
		else if (mSeatNumber % 1 == 0) {
			temp = std::to_string(mSeatNumber) + "A";
		}
		Passenger newPassenger(firstName, lastName, temp);
		mSeatNumber = ((rand() % 50) + 1);
		newPassenger.setTicketNumber(mNextTicketNumber++);
		mPassengers.push_back(newPassenger);
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