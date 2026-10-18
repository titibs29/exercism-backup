#if !defined(CLOCK_H)
#define CLOCK_H

#include <string>
#include <sstream>
#include <iomanip>

namespace date_independent
{

    class clock
    {
    private:
        int hour = 0;
        int minute = 0;

    public:
        clock() = default;
        clock(int hour, int minute);

        static clock at(int hour, int minute);
        operator std::string() const;

        clock& plus(int minute);

        bool operator==(const clock &c) const;
        bool operator!=(const clock &c) const;
    };

} // namespace date_independent

#endif // CLOCK_H