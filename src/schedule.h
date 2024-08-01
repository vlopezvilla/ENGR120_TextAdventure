#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <string>
#include <vector>
#include <map>

// Class that manages schedules for different majors and their corresponding exams
class Schedule 
{
    public:
        // Default constructor for the Schedule class
        Schedule();

        // Sets the schedule for a given major with a list of classes
        void setMajorSchedule(const std::string& major, const std::vector<std::string>& classes);

        // Retrieves the list of classes for a specified major
        std::vector<std::string> getClassesForMajor(const std::string& major) const;

        // Adds exam questions for a specific course
        void addExamQuestions(const std::string& course, const std::vector<std::string>& questions);

        // Displays the exam questions for the currently selected course
        void giveExam();    // Function that will show the questions corresponding to the questions

    private:

        // Maps each major to a list of classes for that major
        std::map<std::string, std::vector<std::string>> majorSchedules;

        // Maps each course to its exam questions
        std::map<std::string, std::vector<std::string>> examQuestions;
};

#endif // SCHEDULE_H
