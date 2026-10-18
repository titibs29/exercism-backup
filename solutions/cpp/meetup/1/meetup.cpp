#include "meetup.h"

namespace meetup {

    boost::gregorian::date scheduler::find(int firstDay, boost::gregorian::gregorian_calendar::day_of_week_type dayToFind) const{
        boost::gregorian::date d(year,month,firstDay);
                while (d.day_of_week() != dayToFind){
                    d += boost::gregorian::days(1);
                }
                return d;
    }

    boost::gregorian::date scheduler::find_last(boost::gregorian::gregorian_calendar::day_of_week_type dayToFind) const{
        boost::gregorian::date d(year,month,1);
        d = d.end_of_month();
                while (d.day_of_week() != dayToFind){
                    d -= boost::gregorian::days(1);
                }
                return d;
    }

    // teenth
    boost::gregorian::date scheduler::monteenth() const {
        return find(13, boost::date_time::Monday);
    }
    boost::gregorian::date scheduler::tuesteenth() const{
        return find(13, boost::date_time::Tuesday);
    }
    boost::gregorian::date scheduler::wednesteenth() const{
        return find(13, boost::date_time::Wednesday);
    }
    boost::gregorian::date scheduler::thursteenth() const{
        return find(13, boost::date_time::Thursday);
    }
    boost::gregorian::date scheduler::friteenth() const{
        return find(13, boost::date_time::Friday);
    }
    boost::gregorian::date scheduler::saturteenth() const{
        return find(13, boost::date_time::Saturday);
    }
    boost::gregorian::date scheduler::sunteenth() const{
        return find(13, boost::date_time::Sunday);
    }

    // first
    boost::gregorian::date scheduler::first_monday() const{
        return find(1,boost::date_time::Monday);
    }
    boost::gregorian::date scheduler::first_tuesday() const{
        return find(1,boost::date_time::Tuesday);
    }
    boost::gregorian::date scheduler::first_wednesday() const{
        return find(1,boost::date_time::Wednesday);
    }
    boost::gregorian::date scheduler::first_thursday() const{
        return find(1,boost::date_time::Thursday);
    }
    boost::gregorian::date scheduler::first_friday() const{
        return find(1,boost::date_time::Friday);
    }
    boost::gregorian::date scheduler::first_saturday() const{
        return find(1,boost::date_time::Saturday);
    }
    boost::gregorian::date scheduler::first_sunday() const{
        return find(1,boost::date_time::Sunday);
    }

    // second
    boost::gregorian::date scheduler::second_monday() const{
        return find(8,boost::date_time::Monday);
    }
    boost::gregorian::date scheduler::second_tuesday() const{
        return find(8,boost::date_time::Tuesday);
    }
    boost::gregorian::date scheduler::second_wednesday() const{
        return find(8,boost::date_time::Wednesday);
    }
    boost::gregorian::date scheduler::second_thursday() const{
        return find(8,boost::date_time::Thursday);
    }
    boost::gregorian::date scheduler::second_friday() const{
        return find(8,boost::date_time::Friday);
    }
    boost::gregorian::date scheduler::second_saturday() const{
        return find(8,boost::date_time::Saturday);
    }
    boost::gregorian::date scheduler::second_sunday() const{
        return find(8,boost::date_time::Sunday);
    }

    // third
    boost::gregorian::date scheduler::third_monday() const{
        return find(15,boost::date_time::Monday);
    }
    boost::gregorian::date scheduler::third_tuesday() const{
        return find(15,boost::date_time::Tuesday);
    }
    boost::gregorian::date scheduler::third_wednesday() const{
        return find(15,boost::date_time::Wednesday);
    }
    boost::gregorian::date scheduler::third_thursday() const{
        return find(15,boost::date_time::Thursday);
    }
    boost::gregorian::date scheduler::third_friday() const{
        return find(15,boost::date_time::Friday);
    }
    boost::gregorian::date scheduler::third_saturday() const{
        return find(15,boost::date_time::Saturday);
    }
    boost::gregorian::date scheduler::third_sunday() const{
        return find(15,boost::date_time::Sunday);
    }

    // fourth
    boost::gregorian::date scheduler::fourth_monday() const{
        return find(22,boost::date_time::Monday);
    }
    boost::gregorian::date scheduler::fourth_tuesday() const{
        return find(22,boost::date_time::Tuesday);
    }
    boost::gregorian::date scheduler::fourth_wednesday() const{
        return find(22,boost::date_time::Wednesday);
    }
    boost::gregorian::date scheduler::fourth_thursday() const{
        return find(22,boost::date_time::Thursday);
    }
    boost::gregorian::date scheduler::fourth_friday() const{
        return find(22,boost::date_time::Friday);
    }
    boost::gregorian::date scheduler::fourth_saturday() const{
        return find(22,boost::date_time::Saturday);
    }
    boost::gregorian::date scheduler::fourth_sunday() const{
        return find(22,boost::date_time::Sunday);
    }

    //lasts
    boost::gregorian::date scheduler::last_monday() const{
        return find_last(boost::date_time::Monday);
    }
    boost::gregorian::date scheduler::last_tuesday() const{
        return find_last(boost::date_time::Tuesday);
    }
    boost::gregorian::date scheduler::last_wednesday() const{
        return find_last(boost::date_time::Wednesday);
    }
    boost::gregorian::date scheduler::last_thursday() const{
        return find_last(boost::date_time::Thursday);
    }
    boost::gregorian::date scheduler::last_friday() const{
        return find_last(boost::date_time::Friday);
    }
    boost::gregorian::date scheduler::last_saturday() const{
        return find_last(boost::date_time::Saturday);
    }
    boost::gregorian::date scheduler::last_sunday() const{
        return find_last(boost::date_time::Sunday);
    }


}  // namespace meetup
