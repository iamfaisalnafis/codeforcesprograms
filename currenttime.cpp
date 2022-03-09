<<<<<<< HEAD
#include <iostream>
#include <ctime>

int main()
{
    time_t timetoday;
    time (&timetoday);
    std::cout << "Calender date and time as per today is: " << asctime(localtime(&timetoday));
     
    return 0;
=======
#include <iostream>
#include <ctime>

int main()
{
    time_t timetoday;
    time (&timetoday);
    std::cout << "Calender date and time as per today is: " << asctime(localtime(&timetoday));
     
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}