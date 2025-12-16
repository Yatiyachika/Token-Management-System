#include "token.h"

Token::Token()
{
    tokenNumber = 0;
    servedTime = "--";
    status = "Waiting";
}

Token::Token(int number, const Customer& c)
{
    tokenNumber = number;
    customer = c;
    servedTime = "--";
    status = "Waiting";
}

int Token::getTokenNumber() const
{
    return tokenNumber;
}

Customer Token::getCustomer() const
{
    return customer;
}

std::string Token::getServedTime() const
{
    return servedTime;
}

std::string Token::getStatus() const
{
    return status;
}

void Token::setServedTime(const std::string& time)
{
    servedTime = time;
}

void Token::setStatus(const std::string& s)
{
    status = s;
}
