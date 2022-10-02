#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "Time.h"
//using namespace std;

int main(){
    Time start, end;
    std::cout << "Enter starting time: "; //ask and take input store inside start obj
    std::getline(std::cin, start.userTime);

    if(getTimeFromUser(start)){ //if start time is true end program
        std::cout << "Incorrect numbers for start time" <<std::endl;
        return 0;
    }

    std::cout << "Enter ending time: "; //ask and take input store inside end obj
    std::getline(std::cin, end.userTime);

    if(getTimeFromUser(end)){ //if end time is true end program
        std::cout << "Incorrect numbers for end time" << std::endl;
        return 0;
    }

    print24Hour(start, end); //print our start and end time
    return 0;
}

bool getTimeFromUser(Time& time){
if(time.userTime[2] != ':' || time.userTime[5] != ':'){ //check if our colon format is correct when userTime is still a string
        std::cout << "Incorrect colon format" << std::endl;
        return 1;
    }

    time.hours = time.userTime.substr(0, 2); //take apart our hours as a string
    time.minutes = time.userTime.substr(3, 2); //take apart our minutes as a string
    time.seconds = time.userTime.substr(6, 2); //take apart our seconds as a string

    time.intHours = atoi(time.hours.c_str()); //turn our hours string and converts to int and stores inside appropiate int var
    time.intMinutes = atoi(time.minutes.c_str()); //turn our minutes string and converts to int and stores inside appropiate int var
    time.intSeconds = atoi(time.seconds.c_str()); //turn our seconds string and converts to int and stores inside appropiate int var

    //check for any out of bounds for each time section. return true if any is wrong
    if(time.intHours < 0 || time.intHours >= 24){
        return true;
    } else if(time.intMinutes < 0 || time.intHours >= 60){
        return true;
    } else if(time.intSeconds < 0 || time.intSeconds >=60){
        return true;
    }
    return false; //return false if all is good (no format or out of bound number errors)
}

void print24Hour(){
    
}