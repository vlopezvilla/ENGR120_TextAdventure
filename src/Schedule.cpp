#include "Schedule.h"
#include <vector>
#include <string>
#include <unordered_map>

// Constructor to initialize schedules for different majors
Schedule::Schedule() {
    
    // Initialize schedules for different majors
    majorSchedules["Computer Science"] = {
        "CS210: Intro to Machine Learning",
        "CS201: Software Development and Systems",
        "CS205: Intro to Cryptography",
        "CS216: SQL and Database Design"
    };

    majorSchedules["Chemistry"] = {
        "CHEM210: Organic Chemistry I",
        "CHEM220: Inorganic Chemistry",
        "CHEM230: Physical Chemistry I",
        "CHEM240: Analytical Chemistry"
    };

    majorSchedules["Mathematics"] = { // Corrected major name
        "MATH210: Calculus III",
        "MATH220: Linear Algebra",
        "MATH230: Differential Equations",
        "MATH240: Abstract Algebra"
    };

    majorSchedules["Engineering"] = {
        "ENGR210: Statics and Dynamics",
        "ENGR220: Thermodynamics",
        "ENGR230: Fluid Mechanics",
        "ENGR240: Electrical Circuits"
    };
}

void Schedule::setMajorSchedule(const std::string& major, const std::vector<std::string>& classes) {
    majorSchedules[major] = classes;
}

std::vector<std::string> Schedule::getClassesForMajor(const std::string& major) const {
    auto it = majorSchedules.find(major);
    if (it != majorSchedules.end()) {
        return it->second;
    } else {
        return {}; // Return an empty list if major not found
    }
}
