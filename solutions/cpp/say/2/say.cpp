#include "say.h"

namespace say {

    std::string in_english( long long value){
        int scale=0;
        std::string outString="", temp="";

        // value not in range
        if(value<0) throw std::domain_error("below zero");

        if(value > 999999999999) throw std::domain_error("too big");

        if(value == 0) return "zero";

        // for each thousand
        while(value % 999 >0){ //0 to 999
        temp = "";
        temp.append(thousand(value%1000));
        switch(scale){
            case 1:
                temp.append(" thousand");
                break;
            case 2:
                temp.append(" million");
                break;
            case 3:
                temp.append(" billion");
                break;
        }

        if(outString !="") temp.append(" ");

        if(value%1000 != 0) outString.insert(0,temp);
        
        value = value /1000;
        // next scale
        scale++;
        }
        
        return outString;
    }

    // 0 to 999
    std::string thousand( long long value){
        std::string str="";

        // 0-999
        if((value / 100) % 10 != 0){
        str.append(toTen((value/100)%10));
        str.append(" hundred");
        if(value%100) str.append(" "+ hundred(value%100));
        }
        else str.append(hundred(value%100));

        return str;
    }

    // 0 to 99
    std::string hundred( long long value){
        std::string str="";
        // 0-9
        if(value<10){
            str.append(toTen(value));
        }
        // 10-99
        else{
            // 10
            if(value>9 && value<20){
                if(value == 10) str.append("ten");
                else if(value == 11) str.append("eleven");
                else if(value == 12) str.append("twelve");
                else if(value == 13) str.append("thirteen");
                else if(value == 15) str.append("fifteen");
                else{
                    str.append(toTen(value%10));
                    str.append("teen");
                }
            }
            // 20
            else if(value>19 && value<30){
                str.append("twenty");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            // 30
            else if(value>29 && value<40){
                str.append("thirty");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            // 40
            else if(value>39 && value<50){
                str.append("forty");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            // 50
            else if(value>49 && value<60){
                str.append("fifty");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            // 60
            else if(value>59 && value<70){
                str.append("sixty");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            // 70
            else if(value>69 && value<80){
                str.append("seventy");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            // 80
            else if(value>79 && value<90){
                str.append("eighty");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            // 90
            else if(value>89 && value<100){
                str.append("ninety");
                if(value%10 != 0){
                str.append("-");
                str.append(toTen(value%10));
                }
            }
            
        }
        return str;

    }

    std::string toTen( long long value){
        std::string str = "";

        switch(value){
                case 1:
                    str.append("one");
                    break;
                case 2:
                    str.append("two");
                    break;
                case 3:
                    str.append("three");
                    break;
                case 4:
                    str.append("four");
                    break;
                case 5:
                    str.append("five");
                    break;
                case 6:
                    str.append("six");
                    break;
                case 7:
                    str.append("seven");
                    break;
                case 8:
                    str.append("eight");
                    break;
                case 9:
                    str.append("nine");
            }
        return str;
    }




}  // namespace say
