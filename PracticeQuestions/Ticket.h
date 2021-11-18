#pragma once
#include <string>

class Ticket
{
private:
	int ticketno;
	std::string seatno;
	//gateno

public:
	Ticket(int ticket, std::string seat /*,gateno*/) : ticketno(ticket), seatno(seat) {	} //parameterized constr.
	
	std::string Report();
};

