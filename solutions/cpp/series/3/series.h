#if !defined(SERIES_H)
#define SERIES_H

#include <string>
#include <vector>
#include <stdexcept>

namespace series {

    std::vector<std::string> slice(std::string serie, int len);

}  // namespace series

#endif // SERIES_H