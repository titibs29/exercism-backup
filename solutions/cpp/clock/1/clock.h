#if !defined(CLOCK_H)
#define CLOCK_H

#include <string>
#include <sstream>
#include <iomanip>



namespace date_independent {

    class clock {
    private:
        int hour;
        int minute;
    public:
        clock(int hour, int minute);
        clock plus(int minutes) const;
        bool operator==(const clock& other) const;
        bool operator!=(const clock& other) const;
        operator std::string() const;
        static clock at(int hour, int minute);

    };

}  // namespace date_independent

#endif // CLOCK_H