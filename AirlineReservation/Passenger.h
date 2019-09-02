#pragma once
#include <string>

//This is definition of a passenger
namespace AirlineApp {

	class Passenger {
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName);

		void displayPassenger() const;

		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setTicketNumber(int ticketNumber);
		int getTicketNumber() const;


	private:
		std::string mFirstName;
		std::string mLastName;
		int mTicketNumber;
	};
}