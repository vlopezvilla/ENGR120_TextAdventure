#include "schedule.h"
#include <vector>
#include <string>
#include <unordered_map>

// Constructor to initialize schedules for different majors
Schedule::Schedule() 
{
    // Initialize the schedule with courses for various majors.
    // These courses are simplified and designed to resemble those for a first-year college student.
    majorSchedules["Computer Science"] = 
    {
        "CS101: Introduction to Computer Science",
        "PHYS270: Principles of Physics I",
        "MATH101: Calculus I",
    };

    majorSchedules["Chemistry"] = 
    {
        "CHEM101: General Chemistry I",
        "PHYS270: Principles of Physics I",
        "BIO101: Principles of Biology I"
    };

    majorSchedules["Mathematics"] = 
    {
        "MATH101: Calculus I",
        "MATH103: Introductory Statistics",
        "MATH104: Discrete Mathematics"
    };

    majorSchedules["Engineering"] = 
    {
        "MATH101: Calculus I",
        "ENGR102: Introduction to Solidworks",
        "PHYS270: Principles of Physics I",
    };
}

// Sets the schedule for a given major with a list of classes
void Schedule::setMajorSchedule(const std::string& major, const std::vector<std::string>& classes) 
{
    majorSchedules[major] = classes; // Update or add the schedule for the specified major
}

// Retrieves the list of classes for a specified major
std::vector<std::string> Schedule::getClassesForMajor(const std::string& major) const 
{
    // Find the major in the map
    auto it = majorSchedules.find(major);
    if (it != majorSchedules.end()) 
    {
        return it->second; // Return the list of classes if the major is found
    } 
    else
    {
        return {}; // Return an empty vector if the major is not found
    }
}
