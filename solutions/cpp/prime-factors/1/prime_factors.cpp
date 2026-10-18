#include "prime_factors.h"

namespace prime_factors {

    std::vector<int> of(int value){
        bool isPrime=false;
        std::vector<int> prime_factors{};

        // for each number under the value
        for(int number = 2;number<=value;number++){
            isPrime=true;

            // if the value is prime
            for(int i=2;i<number;i++){
                if(number%i==0) isPrime = false;
            }

            // check if is prime factor
            if(isPrime && value%number==0){
                value=value/number;
                prime_factors.push_back(number);

                number--; // test it again if true
            }
        }

        return prime_factors;
    }

}  // namespace prime_factors
