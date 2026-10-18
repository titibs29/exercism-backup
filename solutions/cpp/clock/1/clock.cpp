#include "clock.h"

namespace date_independent {

    clock::clock(int hour, int minute) {
        int totalMinutes = hour * 60 + minute;
        totalMinutes = totalMinutes % (24 * 60);
        if (totalMinutes < 0) {
            totalMinutes += 24 * 60;
        }
        this->hour = totalMinutes / 60;
        this->minute = totalMinutes % 60;
    }

    clock clock::plus(int minutes) const {
        return clock(this->hour, this->minute + minutes);
    }

    bool clock::operator==(const clock& other) const {
        return this->hour == other.hour && this->minute == other.minute;
    }

    bool clock::operator!=(const clock& other) const {
        return !(*this == other);
    }

    clock::operator std::string() const {
        std::stringstream ss;
        ss << std::setfill('0') << std::setw(2) << this->hour << ":" << std::setfill('0') << std::setw(2) << this->minute;
        return ss.str();
    }

    clock clock::at(int hour, int minute) {
        return clock(hour, minute);
    }

}  // namespace date_independent
