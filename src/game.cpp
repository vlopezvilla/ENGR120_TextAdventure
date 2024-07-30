#include "game.h"
#include "Schedule.h"
#include "player.h"
#include <iostream>
#include <string>

// function will start the game
void startGame() {
    Player player;        //player object
    Schedule schedule;    //shedule object
    chooseMajor(player, schedule);    // passing in the player and schedule as arguments

    std::cout << "You wake up and have to decide what to do next.\n";
    wakingUpScenario(player, schedule);    // function call 
    goToClassScenario(player, schedule);
    
    // player.displayStatus();
}

// Function declarations
void chooseMajor(Player &player, Schedule &schedule) 
{
    std::cout << "Choose your major:\n";
    std::cout << "1. Computer Science\n";
    std::cout << "2. Mathematics\n";
    std::cout << "3. Chemistry\n";
    std::cout << "4. Engineering\n";
    std::cout << "--> ";
    
    std::string choice;
    std::cin >> choice;
    
    if (choice == "1") {
    player.setMajor("Computer Science");
    } else if (choice == "2") {
    player.setMajor("Mathematics");
    } else if (choice == "3") {
    player.setMajor("Chemistry");
    } else if (choice == "4") {
    player.setMajor("Engineering");
    } else {
    std::cout << "Invalid choice. \n";
    }

    // Display the class schedule for the selected major
    std::vector<std::string> classes = schedule.getClassesForMajor(player.getMajor());
    std::cout << "\nYou chose the major: " << player.getMajor();
    std::cout << "\n\nHere is your class schedule:\n----------------------------\n";
    
    // Print the entire class schedule of the student
    for (const std::string &className : classes) {
    std::cout << className << "\n";
    }
    std::cout << "\n";
}

// Will give the option to choose what time to wake up and start their day
void wakingUpScenario(Player &player, Schedule &schedule) 
{
    std::string choice;
    std::cin >> choice;
    int minutesSleepingIn;
    
    std::cout << "Do you want to sleep in? (y/n)\n--> ";
    
    if (choice == "y") 
    {
        std::cout << "How much would you like to sleep? (Answer in minutes)";
        std::cin >> minutesSleepingIn;
        player.sleepIn(minutesSleepingIn);
    } 
    else if (choice == "n") 
    {
        player.wakeUp();
    } 
    else 
    {
        // will add more logic later
    }

}

// function will generate scenarios 
void goToClassScenario(Player &player, Schedule &schedule) 
{
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    // Retrieve the list of classes for the player's major
    std::vector<std::string>classes = schedule.getClassesForMajor(player.getMajor());
    
    // Select two random classes but ensuring that both will be different
    int firstIndex = rand() % classes.size();
    int secondIndex = firstIndex;
    while (secondIndex == firstIndex) {
        secondIndex = rand() % classes.size();
    }
    
    // Display the chosen classes
    std::cout << "\n\nToday, you will have the following classes:\n";
    std::cout << "1. " << classes[firstIndex] << "\n";
    std::cout << "2. " << classes[secondIndex] << "\n\n";
    
}