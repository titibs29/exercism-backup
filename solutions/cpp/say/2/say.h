#if !defined(SAY_H)
#define SAY_H

#include <string>
#include <stdexcept>

namespace say {

    std::string in_english( long long value);

    std::string thousand( long long value);

    std::string hundred( long long value);

    std::string toTen( long long value);



}  // namespace say

#endif // SAY_H