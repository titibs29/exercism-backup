#include "space_age.h"

namespace space_age {



                space_age::space_age(long long age_in_sec){
                   age = age_in_sec; 
                   age_earth = (double)age_in_sec / 31557600.0;
                }

                long long space_age::seconds() const{
                    return age;
                }

                double space_age::on_earth() const{

                    return age_earth;
                }

                double space_age::on_jupiter() const{
                    return age_earth/11.862615;
                }

                double space_age::on_mars() const{
                    return age_earth/1.8808158;
                }

                double space_age::on_mercury() const{
                    return age_earth/0.2408467;
                }

                double space_age::on_neptune() const{
                    return age_earth/164.79132;
                }

                double space_age::on_saturn() const{
                    return age_earth/29.447498;
                }

                double space_age::on_uranus() const{
                    return age_earth/84.016846;
                }

                double space_age::on_venus() const{
                    return age_earth/0.61519726;
                }


    


}  // namespace space_age
