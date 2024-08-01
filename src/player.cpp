#include "player.h"
#include <algorithm> // For std::max and std::min
#include <iostream>

// Default constructor for Player class, initializing health and test readiness
Player::Player() : testReadiness(0) {}

// Displays the player's current test readiness score
void Player::displayStatus() const 
{
    std::cout << "Test Readiness Score: " << testReadiness << "\n";
}

// Setter method for the player's major
void Player::setMajor(const std::string &major) { 
    this->major = major; 
}

// Increases the player's test readiness by a specified amount, ensuring it does not exceed 100
void Player::increaseTestReadiness(int amount) 
{
    testReadiness = std::min(testReadiness + amount, 100);
}

// Decreases the player's test readiness by a specified amount, ensuring it does not drop below 0
void Player::decreaseTestReadiness(int amount) 
{
    testReadiness = std::max(testReadiness - amount, 0); // Corrected to use std::max to prevent negative test readiness
}

// Outputs different messages based on the amount of extra sleep the player chooses
void Player::sleepIn(int sleepTime) 
{
    if (sleepTime <= 15) 
    {
        std::cout << "You snoozed for only " << sleepTime
                  << " minutes. Just enough time to hit the snooze button once.\n";
        std::cout << "You have 45 minutes to get ready. Let's hope traffic isn't "
                     "as bad as your bed was comfy!\n";
    } 
    else if (sleepTime < 30) 
    {
        std::cout << "Sleeping in for " << sleepTime
                  << " minutes? You might need to sprint to make it on time!\n";
        std::cout << "You've got 30 minutes to get ready. Time to channel your "
                     "inner superhero!\n";
    } 
    else if (sleepTime < 45) 
    {
        std::cout << "Whoa! " << sleepTime
                  << " minutes of extra sleep! Hope you didn't miss breakfast.\n";
        std::cout << "15 minutes to get ready. You might need to start mastering "
                     "the art of getting dressed in record time!\n";
    } 
    else if (sleepTime <= 60) 
    {
        std::cout << "A whole " << sleepTime
                  << " minutes of sleep? Guess your bed is the real MVP!\n";
        std::cout << "Only 5 minutes left. Better start running or you'll be late "
                     "for everything!\n";
    } 
    else 
    {
        std::cout << "You slept in for " << sleepTime
                  << " minutes? Did you forget you had plans today?\n";
        std::cout << "You’re officially in panic mode with just minutes left to "
                     "get ready. Good luck!\n";
    }

    health += 10; // Resting restores health
}

// Handles the player's choice on how to use extra time when they wake up
void Player::wakeUp(int userChoice) 
{
    // Determine the player's choice and output corresponding message
    if (userChoice == 1) 
    {
        std::cout << "\nYou chose to get a healthy breakfast. Always a good idea "
                     "to fuel yourself!\n";
    } 
    else if (userChoice == 2) 
    {
        std::cout << "\nYou chose to be productive and study! Great idea to get "
                     "some extra work in.\n";
    } 
    else if (userChoice == 3) 
    {
        std::cout << "\nYou chose to meet up with friends and have some fun before "
                     "class. Not a bad idea to treat yourself from time to time.\n";
    } 
    else if (userChoice == 4) 
    {
        std::cout << "\nYou chose to be lazy and scroll on your phone until your "
                     "next class.\n";
    } 
    else 
    {
        std::cout << "\nInvalid Choice. Off to School!\n";
    }
}

// Getter method for the player's major
std::string Player::getMajor() const { 
    return major; 
}

