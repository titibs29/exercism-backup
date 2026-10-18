#include "series.h"

namespace series {

    std::vector<std::string> slice(std::string serie, int len){
        if(len < 0 ) throw std::domain_error("cannot be negative");
        if(len == 0 ) throw std::domain_error("cannot be zero");
        if(serie.length() <= 0) throw std::domain_error("serie is invalid");
        if(serie.length() < (long unsigned int)len) throw std::domain_error("too large");
        std::vector<std::string> slices = {};
        std::string slice = "";

        for(unsigned int i = 0;i < serie.length() - len + 1;i++){
            slice = "";
            for(unsigned int x=i;x<len+i;x++){
                slice.push_back(serie.at(x));
            }
            slices.push_back(slice);
        }
        
        return slices;
    }

}  // namespace series
