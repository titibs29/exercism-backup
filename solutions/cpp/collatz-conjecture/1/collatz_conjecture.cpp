#include "collatz_conjecture.h"

namespace collatz_conjecture {

    int steps(int value){
        int count=0;

        // value must be a positive int
        if(value <=0 ) throw std::domain_error("out of range");
        while(value != 1){
            if(value%2 ==0){ //even
                value=value/2;
                count++;

            }else{  // odd
                value = 3*value +1;
                count++;

            }
        }
        return count;

    }

}  // namespace collatz_conjecture
