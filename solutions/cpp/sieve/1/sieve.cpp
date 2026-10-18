#include "sieve.h"

namespace sieve {

    std::vector<int> primes(int limit){
        if(limit<2) return {};
        std::vector<int> primesList = {};

        // populate the list
        for (int i=2;i<=limit;i++){
            primesList.push_back(i);
        }

        // sieve
        unsigned int i=0, toTest= 0;
        while(i< primesList.size()){
            toTest=0;
            
            while(toTest < primesList.size()){
            if( primesList.at(toTest) % primesList.at(i) == 0 && toTest > i){
                
                primesList.erase(primesList.cbegin() + toTest);

            }
            else ++toTest;

            }
            i++;
        }


        return primesList;
    }

}  // namespace sieve
