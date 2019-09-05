#pragma once
#include <string>

namespace AirlineApp {
	class Passenger {
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName);

		void displayPassenger() const;
		void displayTicketInformation() const;

		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setTicketNumber(int ticketNumber);
		int getTicketNumber() const;

		void setSeatNumber(const std::string& seatNumber);
		const std::string& getSeatNumber() const;

		void setFlightNumber(int flightNumber);
		int getFlightNumber() const;


	private:
		std::string mFirstName;
		std::string mLastName;
		int mTicketNumber = 1;
		std::string mSeatNumber;
		int mFlightNumber;
	};
}