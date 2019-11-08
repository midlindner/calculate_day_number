#include <iostream>

using namespace std;

bool isLeapYear(int);

int main() {
    // Write your main here
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayNum = 0;
    //hard coded test case
    int mo = 12, day = 31, yr = 2020;

    if (isLeapYear(yr))
        months[1] += 1;

    for(int i = 0; i < mo - 1; i++)
    {
       dayNum += months[i]; 
    }
    
    dayNum += day;
    cout << mo << "/" << day << "/" << yr << " is the " << dayNum << "th day of the year." << endl;

    return 0;
}

bool isLeapYear(int yr)
{
  return yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0;
}
