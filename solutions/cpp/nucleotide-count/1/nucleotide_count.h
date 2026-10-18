#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <string>
#include <map>
#include <stdexcept>
#include <exception>
#include <stdio.h>

namespace nucleotide_count {

    class counter{
        private:
        std::string nucleotide = "";
        std::map<char, int> count = { {'A', 0}, {'C', 0}, {'G', 0}, {'T', 0} };

        public:
        counter(std::string input){
            nucleotide.assign(input);
            for(auto i = 0ULL;i<nucleotide.length();i++){
                switch( nucleotide.at(i) ){
                    case 'A':
                        count.at(nucleotide.at(i))++;
                        break;
                    case 'C':
                        count.at(nucleotide.at(i))++;
                        break;
                    case 'G':
                        count.at(nucleotide.at(i))++;
                        break;
                    case 'T':
                        count.at(nucleotide.at(i))++;
                        break;
                    default:
                        throw std::invalid_argument("a value is not a nucleotide");

                }
            }
        }
        ~counter() = default;


        std::map<char, int> nucleotide_counts() const {
            return count;
        }

    };



}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H