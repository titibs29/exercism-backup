#include "clock.h"

namespace date_independent {

    clock::clock(int hour, int minute)
    {
        this->hour = hour;
        this->minute = minute;
    }

    clock clock::at(int hour, int minute)
    {
        while (minute >= 60)
            {
                hour++;
                minute -= 60;
            }
            while (minute < 0)
            {
                hour--;
                minute += 60;
            }

            while (hour >= 24)
            {
                hour -= 24;
            }
            while (hour < 0)
            {
                hour += 24;
            }

        clock clock(hour,minute);

        return clock;

    }

    clock::operator std::string() const
    {
        std::stringstream ss;
        ss << std::setfill('0') << std::setw(2) 
        << hour << ":" <<
         std::setfill('0') << std::setw(2) << minute;

        return ss.str();
    }

    clock& clock::plus(int minute){
        this->minute += minute;
        
        while (this->minute >= 60)
            {
                this->hour++;
                this->minute -= 60;
            }
            while (this->minute < 0)
            {
                this->hour--;
                this->minute += 60;
            }

            while (this->hour >= 24)
            {
                this->hour -= 24;
            }
            while (this->hour < 0)
            {
               this-> hour += 24;
            }

        return *this;
    }

    bool clock::operator==(const clock &c) const
    {
        return (this->hour == c.hour && this->minute == c.minute);
    }

    bool clock::operator!=(const clock &c) const{
        return (this->hour != c.hour || this->minute != c.minute);
    }


}  // namespace date_independent
