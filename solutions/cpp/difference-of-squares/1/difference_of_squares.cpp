#include "difference_of_squares.h"

namespace difference_of_squares {

    unsigned long long square_of_sum(int val){
        if(val <=0) throw std::domain_error("out of range");
        unsigned long long sq_of_sm=0;
        while(val>0){
            sq_of_sm += val;
            val--;
        }
        sq_of_sm = sq_of_sm*sq_of_sm;
        return sq_of_sm;
    }

    unsigned long long sum_of_squares(int val){
        if(val <=0) std::domain_error("out of range");
        return recursion(val);
    }

    unsigned long long recursion(unsigned long long val){
        if(val == 1){
             return 1;
        }
        return val*val + recursion(val-1);
    }
    

    unsigned long long difference(int val){
        return square_of_sum(val) - sum_of_squares(val);
    }

}  // namespace difference_of_squares
