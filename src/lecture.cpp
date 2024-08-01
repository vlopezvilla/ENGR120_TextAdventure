#include "lecture.h"  // Include the header file where function prototypes are declared
#include <iostream>   // Include the iostream library for input and output
#include <limits>     // Include limits for std::numeric_limits

// Function to conduct a lecture for a given class and update the test readiness score
void attendLecture(const std::string& className, int testReadinessScore)
{
    std::string userInput; // Variable to store user input

    // Welcome the user and inform them about the lecture
    std::cout << "Welcome to the lecture for " << className << std::endl;
    std::cout << "\nTo begin, we will start off with reviewing fundamentals for the exam in a couple of days: \n" << std::endl;

    // Present the first part of the lecture
    firstPart(className);
    std::cout << "\nPress Enter to move on --> ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any previous input
    std::cin.get(); // Wait for Enter key

    // Present the second part of the lecture
    secondPart(className);
    std::cout << "\nPress Enter to continue --> ";
    std::cin.get(); // Wait for Enter key

    // Present the third part of the lecture
    thirdPart(className);
    std::cout << "\nPress Enter to continue --> ";
    std::cin.get(); // Wait for Enter key

    // Present the fourth part of the lecture
    fourthPart(className);
    std::cout << "\nPress Enter to continue --> ";
    std::cin.get(); // Wait for Enter key

    // Present the fifth part of the lecture
    fifthPart(className);
    std::cout << "\nEnd of the lecture for " << className << ". Thank you for attending!" << std::endl;

    // Ask the user if they want to review the lecture or exit
    std::cout << "Enter 'r' to review the lecture, or any other key to exit: ";
    std::cin >> userInput;

    // Review the lecture if the user entered 'r'
    if (userInput == "r")
    {
        testReadinessScore += 30; // Increase the test readiness score
        reviewLecture(className, testReadinessScore); // Call the reviewLecture function
    }
    else
    {
        // Thank the user for attending and exit
        std::cout << "Thank you for attending the lecture. Have a great day!" << std::endl;
    }
}

// Function to review the lecture and display the test readiness score
void reviewLecture(const std::string& className, int testReadinessScore)
{
    std::cout << "\nReview of Lecture for " << className << ":\n" << std::endl;

    // Repeat the lecture parts for review
    firstPart(className);
    secondPart(className);
    thirdPart(className);
    fourthPart(className);
    fifthPart(className);

    // Display the test readiness score to the user
    std::cout << "Test Readiness Score: " << testReadinessScore << std::endl;
    std::cout << "\n";

    // Provide feedback based on the test readiness score
    if(testReadinessScore > 70)
    {
        std::cout << "You are well on your way for being prepared for the upcoming exam! Good luck! " << std::endl;
    }
    else
    {
        std::cout << "Seems like you'll have to wing the exam. Good luck, you are probably going to need it!" << std::endl;
    }
}

// Function to present the first part of the lecture based on the class name
void firstPart(const std::string& className)
{
    if(className == "MATH101: Calculus I")
    {
        std::cout << "1. The derivative of a function measures the rate of change of the function's value with respect to its variable." << std::endl;
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "1. An algorithm is a step-by-step procedure." << std::endl;
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "1. Newton's third law of motion states: For every action, there is an equal and opposite reaction." << std::endl;
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "1. The atomic number of an element represents the number of protons in an atom." << std::endl;
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "1. The basic unit of life is the cell." << std::endl;
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "1. The mean of a data set is also known as the average." << std::endl;
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "1. A set is a collection of distinct elements." << std::endl;
    }
    else
    {
        std::cout << "1. In SolidWorks, a 3D model starts with a 2D sketch." << std::endl;
    }
}

// Function to present the second part of the lecture based on the class name
void secondPart(const std::string& className)
{
    if(className == "MATH101: Calculus I")
    {
        std::cout << "2. To find the area under a curve, use the process of integration." << std::endl;
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "2. The four pillars of Object-Oriented Programming (OOP) are encapsulation, inheritance, polymorphism, and abstraction." << std::endl;
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "2. The formula to find kinetic energy is KE = 1/2mv^2." << std::endl;
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "2. A covalent bond is formed when two atoms share electrons." << std::endl;
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "2. Photosynthesis in plants occurs in the chloroplasts." << std::endl;
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "2. The median is the middle value in a data set." << std::endl;
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "2. In logic, the statement 'If P, then Q' is called a conditional." << std::endl;
    }
    else
    {
        std::cout << "2. The process of creating a 3D object by extending a 2D shape along a straight path is called extrusion." << std::endl;
    }
}

// Function to present the third part of the lecture based on the class name
void thirdPart(const std::string& className)
{
    if(className == "MATH101: Calculus I")
    {
        std::cout << "3. A function's limit as it approaches a certain point can help determine the function's continuity at that point." << std::endl;
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "3. You would use a for loop when you know the number of iterations." << std::endl;
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "3. The law of conservation of momentum states that the total momentum of a closed system remains constant unless acted upon by an external force." << std::endl;
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "3. The law of conservation of mass states that matter cannot be created or destroyed." << std::endl;
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "3. DNA stands for Deoxyribonucleic Acid." << std::endl;
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "3. The standard deviation measures the dispersion of data points from the mean." << std::endl;
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "3. A graph consists of vertices and edges." << std::endl;
    }
    else
    {
        std::cout << "3. A section view shows a cross-section of a part." << std::endl;
    }
}

// Function to present the fourth part of the lecture based on the class name
void fourthPart(const std::string& className)
{
    if(className == "MATH101: Calculus I")
    {
        std::cout << "4. In calculus, the term 'integral' refers to the accumulation of the function." << std::endl;
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "4. A recursive function is a function that calls itself." << std::endl;
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "4. An object in free fall experiences constant acceleration due to gravity." << std::endl;
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "4. The periodic table organizes elements based on their atomic number and properties." << std::endl;
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "4. Cellular respiration converts glucose and oxygen into energy, carbon dioxide, and water." << std::endl;
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "4. A box plot provides a visual summary of data distribution." << std::endl;
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "4. A tree is a type of graph with no cycles." << std::endl;
    }
    else
    {
        std::cout << "4. In SolidWorks, a feature is an individual geometric entity used to create a part." << std::endl;
    }
}

// Function to present the fifth part of the lecture based on the class name
void fifthPart(const std::string& className)
{
    if(className == "MATH101: Calculus I")
    {
        std::cout << "5. The Fundamental Theorem of Calculus connects differentiation and integration." << std::endl;
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "5. The Big O notation describes the performance of an algorithm in terms of time and space complexity." << std::endl;
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "5. The conservation of energy principle states that energy cannot be created or destroyed." << std::endl;
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "5. Chemical reactions involve the transformation of reactants into products." << std::endl;
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "5. Mitosis is the process of cell division that results in two identical daughter cells." << std::endl;
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "5. A histogram displays the frequency distribution of a set of data." << std::endl;
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "5. A permutation is an arrangement of objects in a specific order." << std::endl;
    }
    else
    {
        std::cout << "5. SolidWorks uses features like extrudes and cuts to shape parts." << std::endl;
    }
}
