#include "trinary.h"

namespace trinary {

    int to_decimal(std::string value){
        if(value == "") return 0;

        int outcome = 0;
        const int max = value.size();

        for(int i = 0;i < max;i++){
            if(value.at(i) != '0' && value.at(i) != '1' && value.at(i) != '2' ) return 0;
            outcome += (((int)value.at(i)-48)*pow(3,(max-i-1)));
        }
        return outcome;
    }

}  // namespace trinary
