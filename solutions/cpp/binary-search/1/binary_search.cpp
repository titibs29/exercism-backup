#include "binary_search.h"

namespace binary_search {

        std::size_t find(std::vector<int> tab, int toFind){
            std::size_t found = 0, more = 0;
            std::size_t half = tab.size()/2;
            std::vector<int>::iterator halfIter = tab.begin()+half;

            // error checking
            if (tab.empty()) throw std::domain_error("not in range");

            while(tab.at(found) != toFind){

                if(tab.at(half) == toFind) found = half;

                else if(tab.size() == 1) throw std::domain_error("not in range");
                else if(half == 0) throw std::domain_error("not in range");
                else if(half == tab.size()) throw std::domain_error("not in range");
                
                else if(tab.at(half) > toFind){
                    // search in the first half of tab
                    tab.erase(halfIter, tab.end());
                    half = tab.size()/2;
                    halfIter = tab.begin() + half;

                }

                else if(tab.at(half) < toFind){
                    // search in the second half of tab
                    tab.erase(tab.begin(), halfIter);
                    more += half;
                    half = tab.size()/2;
                    halfIter = tab.begin() + half;

                }

                else throw std::domain_error("not in range");
            }

            return found+more;
        }


}  // namespace binary_search
