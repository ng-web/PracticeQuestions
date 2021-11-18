#pragma once
#include <string>
#include <vector>
#include "Ticket.h"

class Passenger
{
private:
	std::string name;
	std::string id;
	std::string email;

	std::vector<Ticket> ticketstub;		//associative relationship

public:
	void AssignTicket(int ticketno, std::string seatno);
	std::vector<std::string>PrintTicketStub();

	void SetInfo();
};

