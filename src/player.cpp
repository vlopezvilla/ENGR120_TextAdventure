#include "player.h"
#include <iostream>
#include <algorithm> // For std::max and std::min

Player::Player() : health(100), hunger(0), thirst(0) {}

void Player::displayStatus() const {
    std::cout << "Major: " << major << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Hunger: " << hunger << "\n";
    std::cout << "Thirst: " << thirst << "\n";
    std::cout << "Inventory: " << inventory << "\n";
}

// Setter method for variable: major
void Player::setMajor(const std::string& major) {
    this->major = major;
}

// This is optional, wasn't sure if we would like to have any health parameters like hunger and thirst
void Player::decreaseHunger(int amount) {
    hunger = std::max(hunger + amount, 0);
    if (hunger >= 100) {
        health -= 10; // If there is high hunger then health decreases
    }
}

void Player::decreaseThirst(int amount) {
    thirst = std::max(thirst + amount, 0);
    if (thirst >= 100) {
        health -= 10; // If there is high thirst then health decreases
    }
}

void Player::increaseHealth(int amount) {
    health = std::min(health + amount, 100);
}

// Ouputs depending on the user selects for the amount of extra sleep
void Player::sleepIn(int sleepTime) {
  if (sleepTime <= 15) {
          std::cout << "You snoozed for only " << sleepTime << " minutes. Just enough time to hit the snooze button once.\n";
          std::cout << "You have 45 minutes to get ready. Let's hope traffic isn't as bad as your bed was comfy!\n";
      }
      else if (sleepTime < 30) {
          std::cout << "Sleeping in for " << sleepTime << " minutes? You might need to sprint to make it on time!\n";
          std::cout << "You've got 30 minutes to get ready. Time to channel your inner superhero!\n";
      }
      else if (sleepTime < 45) {
          std::cout << "Whoa! " << sleepTime << " minutes of extra sleep! Hope you didn't miss breakfast.\n";
          std::cout << "15 minutes to get ready. You might need to start mastering the art of getting dressed in record time!\n";
      }
      else if (sleepTime <= 60) {
          std::cout << "A whole " << sleepTime << " minutes of sleep? Guess your bed is the real MVP!\n";
          std::cout << "Only 5 minutes left. Better start running or you'll be late for everything!\n";
      }
      else {
          std::cout << "You slept in for " << sleepTime << " minutes? Did you forget you had plans today?\n";
          std::cout << "You’re officially in panic mode with just minutes left to get ready. Good luck!\n";
      }

      health += 10; // Resting restores health
      hunger += 10;  // Sleeping in might make you hungrier

}

// when the user selects "n" when given the option to sleep in
void Player::wakeUp() {
    std::cout << "\nYou chose no extra sleep! Who needs sleep anyway, right?\n";
}

int Player::getHealth() const {
    return health;
}

int Player::getHunger() const {
    return hunger;
}

int Player::getThirst() const {
    return thirst;
}

std::string Player::getMajor() const {
    return major;
}

std::string Player::getInventory() const {
    return inventory;
}