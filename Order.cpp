
#include "Date.hpp"
#include "Customer.hpp"
#include "Order.hpp"
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>

using namespace std;



Order::~Order()
{
    // TODO Auto-generated destructor stub
}

string Order::getOrderNumber(void)
{
    return OrderNumber;
}

string Order::getOrderDate(void)
{
        string result1;
        string result2;
        string result3;
        string Result;
        
    ostringstream convert1;
    ostringstream convert2;
    ostringstream convert3;
    
    
    
    convert1  << OrderDate.getYear();
    convert2 << OrderDate.getMonth();
    convert3 << OrderDate.getMonth();
    
    
        
        
        result1 = convert1.str();
        result2 = convert2.str();
        result3 = convert3.str();
        
        Result = result1 + "/" + result2 + "/" + result3 ;
        
        return Result;
        
        
        
        
        
    }




void Order::setOrderNumber(string aString) {
    OrderNumber = aString;
}
void Order::setOrderDate(int year, int month, int day) {
    OrderDate.setYear(year);
    OrderDate.setMonth(month);
    OrderDate.setDay(day);
}




    



