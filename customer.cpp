#include "customer.h"
#include <ctime>

Customer::Customer()
{
    name = "";
    purpose = "";
    generatedTime = "";
}

Customer::Customer(const std::string& n, const std::string& p)
{
    name = n;
    purpose = p;

    // current time
    time_t now = time(nullptr);
    generatedTime = ctime(&now);
    generatedTime.pop_back(); // remove newline
}

std::string Customer::getName() const
{
    return name;
}

std::string Customer::getPurpose() const
{
    return purpose;
}

std::string Customer::getTime() const
{
    return generatedTime;
}
