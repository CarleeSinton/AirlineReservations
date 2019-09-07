#pragma once
#include <string>

namespace AirlineApp {
	class Passenger {
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName, const std::string seatNumber);

		void displayPassenger() const;
		void displayTicketInformation() const;

		const std::string& getFirstName() const;

		const std::string& getLastName() const;

		void setTicketNumber(int ticketNumber);
		int getTicketNumber() const;

		const std::string& getPassengerSeatNumber() const;

		void setPassengerFlightNumber(int flightPassengerNumber);
		int getPassengerFlightNumber() const;


	private:
		std::string mFirstName;
		std::string mLastName;
		std::string mPassengerSeatNumber;
		int mTicketNumber;
		int mPassengerFlightNumber;
	};
}