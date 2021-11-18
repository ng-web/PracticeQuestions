#include "Ticket.h"

std::string Ticket::Report()
{
    std::string report;
    report += " \t";
    report += std::to_string(ticketno);
    report += " \t";
    report += seatno;
    //report += " ";
    //report += gateno;

    return report;
}
