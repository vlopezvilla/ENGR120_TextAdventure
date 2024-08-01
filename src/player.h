#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// The Player class represents the player in the game, holding their status and attributes.
class Player {
public:
    // Constructor: Initializes a new Player object with default values.
    Player();

    // Displays the current status of the player, including health, hunger, thirst, major, and inventory.
    void displayStatus() const;

    // Sets the player's major.
    void setMajor(const std::string& major);

    // Decreases the player's thirst level by the specified amount.
    void decreaseTestReadiness(int amount);

    // Increases the player's health by the specified amount, up to a maximum of 100.
    void increaseTestReadiness(int amount);

    // Simulates the player sleeping in, adjusting health and hunger levels accordingly.
    void sleepIn(int sleepTime);

    // Simulates the player waking up and starting their day.
    void wakeUp(int userChoice);

    // Accessors: These methods provide read-only access to private member variables.
    int getTestReadiness() const;
    std::string getMajor() const;
    std::string getInventory() const;

private:
    // The player's current health level (0-100).
    int health;

    // Will track if the user is test ready 
    int testReadiness;

    // The player's selected major, which determines their class schedule and other aspects.
    std::string major;
};

#endif // PLAYER_H
