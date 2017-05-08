
#ifndef ORDER_HPP_
#define ORDER_HPP_


#include <vector>
#include <string>
using namespace std;
#include <fstream>
#include <iomanip>

class Order{
private:
    string OrderNumber;
    Date OrderDate;

    string customerId;
    
    
public:
    
    string getOrderNumber(void);
    string getOrderDate(void);

    Customer* getOrderCustomer(void);
    
    void setOrderNumber(string);
    void setOrderDate(int,int,int);

    void setOrderCustomer(Customer*);
    
    void readFoodItems(string);
    void readMediaItems(string);
    void readElectronicItems(string);
    
    double getTotalOfOrder(void);
    
    Order(Customer*,string);
    virtual ~Order();
};

#endif /* ORDER_HPP_ */
