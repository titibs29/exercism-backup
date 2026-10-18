#if !defined(PANGRAM_H)
#define PANGRAM_H
#include <string>
#include <algorithm>
#include <iostream>


namespace pangram {

    bool is_pangram(std::string texte);

}  // namespace pangram

#endif // PANGRAM_H