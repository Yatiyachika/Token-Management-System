#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include "customer.h"

class Token
{
private:
    int tokenNumber;
    Customer customer;
    std::string servedTime;
    std::string status;

public:
    Token();
    Token(int number, const Customer& c);

    int getTokenNumber() const;
    Customer getCustomer() const;
    std::string getServedTime() const;
    std::string getStatus() const;

    void setServedTime(const std::string& time);
    void setStatus(const std::string& s);
};
#endif // TOKEN_H
