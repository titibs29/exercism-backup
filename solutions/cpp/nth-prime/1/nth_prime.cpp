#include "nth_prime.h"

namespace nth_prime {

    unsigned long long nth(unsigned long long n)
    {
        if (n <= 0) {
            throw std::domain_error("n must be greater than 0");
        }
        unsigned long long prime = 2;
        unsigned long long count = 1;
        while (count < n) {
            prime++;
            bool is_prime = true;
            for (unsigned long long i = 2; i < prime; i++) {
                if (prime % i == 0) {
                    is_prime = false;
                    break;
                }


            }
            if (is_prime) {
                count++;
            }
        }
        return prime;
    }

}  // namespace nth_prime
