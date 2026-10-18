#include "triangle.h"
#include <stdexcept>


namespace triangle {

    
    flavor kind(double x, double y, double z){


        // Check if any side is 0 or negative
        if (x <= 0 || y <= 0 || z <= 0) {
            throw std::domain_error("Invalid side length");
        }
        // Check if any side is greater than the sum of the other two
        if (x + y < z || x + z < y || y + z < x) {
            throw std::domain_error("Invalid side length");
        }
        // Check if all sides are equal
        if(x==y && y ==z && x == z){
            return triangle::flavor::equilateral;
        }
        // Check if two sides are equal
        if(x==y || y ==z || x == z){
            return triangle::flavor::isosceles;
        }
        // Check if the triangle is valid
        return triangle::flavor::scalene;
    }



}  // namespace triangle