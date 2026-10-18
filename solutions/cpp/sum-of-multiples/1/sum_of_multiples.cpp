#include "sum_of_multiples.h"

namespace sum_of_multiples {

    int to(std::vector<int>multiples,int limit){
        int sum = 0;
        bool flag = false;

        // for each number
        for(int i=0;i<limit;i++){
            flag = false;

            // test each multiple
            for(int multiple:multiples){

                if(i%multiple == 0) flag = true;

            }
            if(flag) sum += i;   // if it's a multiple, add it to te sum
        }
        return sum;
    }

}  // namespace sum_of_multiples
