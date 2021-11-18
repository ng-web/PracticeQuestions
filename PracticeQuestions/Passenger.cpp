#include "Passenger.h"
#include <iostream>

void Passenger::AssignTicket(int ticketno, std::string seatno /*, gateno*/)
{
	ticketstub.push_back(Ticket(ticketno, seatno /*, gateno*/));
}

std::vector<std::string> Passenger::PrintTicketStub()
{
	std::vector<std::string> stub;

	stub.push_back("Name: " + name);
	stub.push_back("Email: " + email);
	
	for (auto s : ticketstub) {
		stub.push_back(s.Report());
	}

	stub.push_back("-------------------------------");

	return stub;
}

void Passenger::SetInfo()
{
	std::cout << "Enter name: ";
	getline(std::cin, name);
	//std::cin.ignore();
	std::cin.clear();
	std::cout << "Enter id: ";
	std::cin.ignore();
	std::cin >> id;
	std::cout << "Enter email: ";
	std::cin.ignore();
	std::cin >> email;
}
