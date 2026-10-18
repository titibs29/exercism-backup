#include "reverse_string.h"

namespace reverse_string {

std::string reverse_string(std::string txt){
   std::string reverse;
    for (int i = txt.length()-1; i >= 0; i--)
    {
        reverse += txt[i];
    }
    
    return reverse;
}

}  // namespace reverse_string
