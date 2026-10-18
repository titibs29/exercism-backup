#if !defined(SAY_H)
#define SAY_H

#include <string>
#include <stdexcept>

namespace say {

    std::string in_english(unsigned long long value);

    std::string thousand(unsigned long long value);

    std::string hundred(unsigned long long value);

    std::string toTen(unsigned long long value);



}  // namespace say

#endif // SAY_H