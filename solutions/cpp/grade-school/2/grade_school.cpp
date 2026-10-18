#include "grade_school.h"

namespace grade_school {


void school::add(const std::string& name, int grade) {
    auto it = students.find(grade);
    if (it == students.end()) {
        students[grade] = {name};
    } else {
        it->second.push_back(name);
        std::sort(it->second.begin(), it->second.end());
    }
}

std::map<int, std::vector<std::string>> school::roster() const {

        return students;

}

std::vector<std::string> school::grade(int grade) const{
    auto it = students.find(grade);
    if (it == students.end()) {
        return {};
    } else {
        return it->second;
    }
}

}  // namespace grade_school
