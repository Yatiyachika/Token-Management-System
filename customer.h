#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer
{
private:
    std::string name;
    std::string purpose;
    std::string generatedTime;

public:
    Customer();
    Customer(const std::string& n, const std::string& p);

    std::string getName() const;
    std::string getPurpose() const;
    std::string getTime() const;
};
#endif // CUSTOMER_H
