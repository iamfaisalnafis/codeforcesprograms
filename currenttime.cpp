#include <iostream>
#include <ctime>

int main()
{
    time_t timetoday;
    time (&timetoday);
    std::cout << "Calender date and time as per today is: " << asctime(localtime(&timetoday));
     
    return 0;
}