#include "game.h"
#include "schedule.h"
#include "player.h"
#include <iostream>
#include <string>
#include "lecture.h"
#include "exam.h"

#include <vector>   // For using std::vector
#include <ctime>    // For using time() to seed the random number generator

// Function to start the game
void startGame() 
{
    int testReadinessScore = 0; // Initialize the test readiness score

    Player player;     // Create a Player object
    Schedule schedule; // Create a Schedule object

    // Function to choose the major for the player
    chooseMajor(player, schedule); 

    std::cout << "You wake up and have to decide what to do next.\n";
    // Function to handle the waking up scenario
    wakingUpScenario(player, schedule, testReadinessScore); 
}

// Function to allow the player to choose a major
void chooseMajor(Player &player, Schedule &schedule) 
{
    std::cout << "Choose your major:\n";
    std::cout << "1. Computer Science\n";
    std::cout << "2. Mathematics\n";
    std::cout << "3. Chemistry\n";
    std::cout << "4. Engineering\n";
    std::cout << "--> ";

    bool validChoice = false; // Flag to check if the choice is valid

    // Loop until a valid choice is made
    while (validChoice == false) {
        std::string choice;
        std::cin >> choice;

        if (choice == "1") 
        {
            player.setMajor("Computer Science");
            validChoice = true;
        } 
        else if (choice == "2") 
        {
            validChoice = true;
            player.setMajor("Mathematics");
        } 
        else if (choice == "3") 
        {
            player.setMajor("Chemistry");
            validChoice = true;
        } 
        else if (choice == "4") 
        {
            player.setMajor("Engineering");
            validChoice = true;
        } 
        else 
        {
            std::cout << "Invalid choice. Please input a value 1 - 4 \n";
        }
    }

    // Retrieve and display the class schedule for the selected major
    std::vector<std::string> classes = schedule.getClassesForMajor(player.getMajor());
    std::cout << "\nYou chose the major: " << player.getMajor();
    std::cout << "\n\nHere is your class schedule:\n----------------------------\n";

    // Print the entire class schedule
    for (const std::string &className : classes) 
    {
        std::cout << className << "\n";
    }
    std::cout << "\n";
}

// Function to handle the scenario when the player wakes up
void wakingUpScenario(Player &player, Schedule &schedule, int testReadinessScore) 
{
    std::string choice;
    int minutesSleepingIn;
    int awakeChoice; // Choice for how to use the extra time

    testReadinessScore = 0; // Reset test readiness score

    std::cout << "Do you want to sleep in? (y/n)\n--> ";
    std::cin >> choice;

    if (choice == "y") 
    {
        std::cout << "How much would you like to sleep? (Answer in minutes): ";
        std::cin >> minutesSleepingIn;
        player.sleepIn(minutesSleepingIn);
    } 
    else if (choice == "n") 
    {
        std::cout << "\n\nSince you woke up extra early, how would you like to use "
                     "this time?\n";
        std::cout << "1. Grab a healthy breakfast\n2. Be productive and study\n3. Meet "
                     "up with friends\n4. Do nothing and scroll on social media\n--> ";
        std::cin >> awakeChoice;
        player.wakeUp(awakeChoice);

        // Increase test readiness score if player chose to study
        if (awakeChoice == 2) 
        {
            testReadinessScore += 20;
        }
    } 
    else 
    {
        std::cout << "Invalid choice. Proceeding as if you woke up on time.\n";
    }

    // Proceed to the class scenario
    goToClassScenario(player, schedule, testReadinessScore);
}

// Function to handle the scenario when the player goes to class
void goToClassScenario(Player &player, Schedule &schedule, int testReadinessScore) 
{
    // Seed the random number generator for selecting a random class
    srand(static_cast<unsigned int>(time(0)));

    // Retrieve the list of classes for the player's major
    std::vector<std::string> classes = schedule.getClassesForMajor(player.getMajor());

    // Select a random class
    int firstIndex = rand() % classes.size();
    std::string selectedClass = classes[firstIndex];

    std::string goToClassChoice;

    // Display the chosen class
    std::cout << "\n\nToday, you will have the following class:\n";
    std::cout << classes[firstIndex] << "\n";

    // Notify the user about the upcoming exam
    std::cout << "\nIn two days you will have an exam for this class and you "
                 "need to pass the exam to pass the course!\n";

    // Display the test readiness score
    std::cout << "Test Readiness Score: " << testReadinessScore << std::endl;

    // Prompt the user to decide whether to attend the lecture
    std::cout << "\n\nDo you want to attend lecture? (y/n):\n--> ";
    std::cin >> goToClassChoice;

    if(goToClassChoice == "y")
    {
        std::cout << "\nGood choice!\n" << std::endl;

        testReadinessScore += 30; // Increase test readiness score for attending the lecture

        // Display the updated test readiness score
        std::cout << "Test Readiness Score: " << testReadinessScore << std::endl;
        std::cout << "\n";

        // Call function to attend the lecture
        attendLecture(selectedClass, testReadinessScore);
    }
    else
    {
        std::cout << "Good luck skipping class" << std::endl;
    }
    // Call function to give the exam
    giveExam(selectedClass, testReadinessScore);
}

// Function to handle the exam day scenario
void giveExam(const std::string& className, int testReadinessScore)
{
    std::cout << "\n\nTwo days have passed and it is now exam day! Would you like to take the exam? (y/n) \n--> ";

    std::string examChoice;
    std::cin >> examChoice;

    if (examChoice == "y") 
    {
        // Call function to conduct the exam
        examQuestions(className);
    } 
    else 
    {
        std::cout << "You chose not to take the exam. Your grade may be affected." << std::endl;
    }
}
