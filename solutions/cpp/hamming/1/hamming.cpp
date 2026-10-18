#include "hamming.h"

namespace hamming {

    int compute(std::string one, std::string two){
        int count = 0;
        if(one.length() != two.length()){
            throw std::domain_error("Strings are not the same length");
        }
        for(auto i =0ULL;i<one.length();i++){
            if(one.at(i) != two.at(i)){
                count++;
            }
        }
        return count;
    }

}  // namespace hamming
