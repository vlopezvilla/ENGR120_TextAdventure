#include "exam.h"  // Include header file for exam-related functions
#include <string>
#include <iostream>

// Function declarations for the exam questions
void question1(const std::string& className, int& correctAnswers);
void question2(const std::string& className, int& correctAnswers);
void question3(const std::string& className, int& correctAnswers);
void question4(const std::string& className, int& correctAnswers);
void question5(const std::string& className, int& correctAnswers);
void displayScore(int correctAnswers);

// Main function to conduct the exam for a given class
void examQuestions(const std::string& className)
{
    int correctAnswers = 0;  // Initialize counter for correct answers

    // Ask questions for the exam
    question1(className, correctAnswers);

    // Display the final score after all questions have been answered
    displayScore(correctAnswers);
}

// Function to ask the first question of the exam
void question1(const std::string& className, int& correctAnswers)
{
    std::string correctAnswer1;
    std::string userAnswer1;

    // Display the question based on the className
    if(className == "MATH101: Calculus I")
    {
        std::cout << "1. The derivative of a function measures the ____________ of the function's value with respect to its variable." << std::endl;
        correctAnswer1 = "rate of change";
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "1. An algorithm is a __________." << std::endl;
        correctAnswer1 = "step-by-step procedure";
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "1. Newton's third law of motion states: For every action, there is an equal and opposite __________." << std::endl;
        correctAnswer1 = "reaction";
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "1. The atomic number of an element represents the number of __________ in an atom." << std::endl;
        correctAnswer1 = "protons";
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "1. The basic unit of life is the __________." << std::endl;
        correctAnswer1 = "cell";
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "1. The mean of a data set is also known as the __________." << std::endl;
        correctAnswer1 = "average";
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "1. A set is a collection of distinct __________." << std::endl;
        correctAnswer1 = "elements";
    }
    else
    {
        std::cout << "1. In SolidWorks, a 3D model starts with a 2D __________." << std::endl;
        correctAnswer1 = "sketch";
    }

    // Get user's answer and check if it's correct
    std::cout << "Your answer: --> ";
    std::cin.ignore();
    std::getline(std::cin, userAnswer1);

    if(userAnswer1 == correctAnswer1)
    {
        std::cout << "\nCorrect!" << std::endl;
        ++correctAnswers;  // Increment counter for correct answers
    }
    else
    {
        std::cout << "\nIncorrect. The correct answer is: " << correctAnswer1 << std::endl;
    }

    // Proceed to the next question
    question2(className, correctAnswers);
}

// Function to ask the second question of the exam
void question2(const std::string& className, int& correctAnswers)
{
    std::string correctAnswer2;
    std::string userAnswer2;

    // Display the question based on the className
    if(className == "MATH101: Calculus I")
    {
        std::cout << "2. To find the area under a curve, use the process of __________." << std::endl;
        correctAnswer2 = "integration";
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "2. The four pillars of Object-Oriented Programming (OOP) are encapsulation, inheritance, __________, and abstraction." << std::endl;
        correctAnswer2 = "polymorphism";
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "2. The formula to find kinetic energy is __________." << std::endl;
        correctAnswer2 = "KE = 1/2mv^2";
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "2. A __________ bond is formed when two atoms share electrons." << std::endl;
        correctAnswer2 = "covalent";
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "2. Photosynthesis in plants occurs in the __________." << std::endl;
        correctAnswer2 = "chloroplasts";
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "2. The median is the __________ value in a data set." << std::endl;
        correctAnswer2 = "middle";
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "2. In logic, the statement 'If P, then Q' is called a __________." << std::endl;
        correctAnswer2 = "conditional";
    }
    else
    {
        std::cout << "2. The process of creating a 3D object by extending a 2D shape along a straight path is called __________." << std::endl;
        correctAnswer2 = "extrusion";
    }

    // Get user's answer and check if it's correct
    std::cout << "Your answer: ---> ";
    std::getline(std::cin, userAnswer2);

    if(userAnswer2 == correctAnswer2)
    {
        std::cout << "\nCorrect!" << std::endl;
        ++correctAnswers;  // Increment counter for correct answers
    }
    else
    {
        std::cout << "\nIncorrect. The correct answer is: " << correctAnswer2 << std::endl;
    }

    // Proceed to the next question
    question3(className, correctAnswers);
}

// Function to ask the third question of the exam
void question3(const std::string& className, int& correctAnswers)
{
    std::string correctAnswer3;
    std::string userAnswer3;

    // Display the question based on the className
    if(className == "MATH101: Calculus I")
    {
        std::cout << "3. A function's limit as it approaches a certain point can help determine the function's __________ at that point." << std::endl;
        correctAnswer3 = "continuity";
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "3. You would use a __________ loop when you know the number of iterations." << std::endl;
        correctAnswer3 = "for loop";
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "3. The law of conservation of momentum states that the total momentum of a closed system remains constant unless acted upon by an __________." << std::endl;
        correctAnswer3 = "external force";
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "3. The law of conservation of mass states that matter cannot be created or __________." << std::endl;
        correctAnswer3 = "destroyed";
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "3. DNA stands for _______________ ________" << std::endl;
        correctAnswer3 = "Deoxyribonucleic Acid";
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "3. The standard deviation measures the __________ of data points from the mean." << std::endl;
        correctAnswer3 = "dispersion";
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "3. A graph consists of vertices and __________." << std::endl;
        correctAnswer3 = "edges";
    }
    else
    {
        std::cout << "3. A __________ view shows a cross-section of a part." << std::endl;
        correctAnswer3 = "section";
    }

    // Get user's answer and check if it's correct
    std::cout << "Your answer: ---> ";
    std::getline(std::cin, userAnswer3);

    if(userAnswer3 == correctAnswer3)
    {
        std::cout << "\nCorrect!" << std::endl;
        ++correctAnswers;  // Increment counter for correct answers
    }
    else
    {
        std::cout << "\nIncorrect. The correct answer is: " << correctAnswer3 << std::endl;
    }

    // Proceed to the next question
    question4(className, correctAnswers);
}

// Function to ask the fourth question of the exam
void question4(const std::string& className, int& correctAnswers)
{
    std::string correctAnswer4;
    std::string userAnswer4;

    // Display the question based on the className
    if(className == "MATH101: Calculus I")
    {
        std::cout << "4. The Fundamental Theorem of Calculus links the concept of __________ to that of __________." << std::endl;
        correctAnswer4 = "differentiation, integration";
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "4. A __________ in a programming language is a sequence of instructions that performs a specific task." << std::endl;
        correctAnswer4 = "function";
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "4. The principle stating that energy cannot be created or destroyed, only transformed, is known as the __________ of energy." << std::endl;
        correctAnswer4 = "conservation";
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "4. An element's __________ number is the number of protons in its nucleus." << std::endl;
        correctAnswer4 = "atomic";
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "4. The process by which cells divide to produce gametes is called __________." << std::endl;
        correctAnswer4 = "meiosis";
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "4. A histogram displays the distribution of data by using __________." << std::endl;
        correctAnswer4 = "bars";
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "4. A __________ is a collection of points, lines, curves, or surfaces in a coordinate system." << std::endl;
        correctAnswer4 = "figure";
    }
    else
    {
        std::cout << "4. In SolidWorks, the tool used to combine two or more bodies into a single body is called __________." << std::endl;
        correctAnswer4 = "Boolean";
    }

    // Get user's answer and check if it's correct
    std::cout << "Your answer: ---> ";
    std::getline(std::cin, userAnswer4);

    if(userAnswer4 == correctAnswer4)
    {
        std::cout << "\nCorrect!" << std::endl;
        ++correctAnswers;  // Increment counter for correct answers
    }
    else
    {
        std::cout << "\nIncorrect. The correct answer is: " << correctAnswer4 << std::endl;
    }

    // Proceed to the next question
    question5(className, correctAnswers);
}

// Function to ask the fifth question of the exam
void question5(const std::string& className, int& correctAnswers)
{
    std::string correctAnswer5;
    std::string userAnswer5;

    // Display the question based on the className
    if(className == "MATH101: Calculus I")
    {
        std::cout << "5. The limit of a function as x approaches infinity is used to determine its __________." << std::endl;
        correctAnswer5 = "asymptotic behavior";
    }
    else if(className == "CS101: Introduction to Computer Science")
    {
        std::cout << "5. A __________ is a construct that allows a program to execute a block of code repeatedly." << std::endl;
        correctAnswer5 = "loop";
    }
    else if(className == "PHYS270: Principles of Physics I")
    {
        std::cout << "5. The term used to describe the amount of matter in an object is __________." << std::endl;
        correctAnswer5 = "mass";
    }
    else if(className == "CHEM101: General Chemistry I")
    {
        std::cout << "5. A __________ solution has a pH less than 7." << std::endl;
        correctAnswer5 = "acidic";
    }
    else if(className == "BIO101: Principles of Biology I")
    {
        std::cout << "5. The molecule responsible for carrying genetic information in living organisms is __________." << std::endl;
        correctAnswer5 = "DNA";
    }
    else if(className == "MATH103: Introductory Statistics")
    {
        std::cout << "5. The mode is the value that appears __________ times most frequently in a data set." << std::endl;
        correctAnswer5 = "the";
    }
    else if(className == "MATH104: Discrete Mathematics")
    {
        std::cout << "5. A __________ is a relationship between two sets where each element in one set is paired with exactly one element in the other set." << std::endl;
        correctAnswer5 = "function";
    }
    else
    {
        std::cout << "5. The __________ view in SolidWorks allows you to see through the object to inspect its interior." << std::endl;
        correctAnswer5 = "section";
    }

    // Get user's answer and check if it's correct
    std::cout << "Your answer: ---> ";
    std::getline(std::cin, userAnswer5);

    if(userAnswer5 == correctAnswer5)
    {
        std::cout << "\nCorrect!" << std::endl;
        ++correctAnswers;  // Increment counter for correct answers
    }
    else
    {
        std::cout << "\nIncorrect. The correct answer is: " << correctAnswer5 << std::endl;
    }

    // Proceed to display the final score
    displayScore(correctAnswers);
}

// Function to display the user's final score
void displayScore(int correctAnswers)
{
    std::cout << "You got " << correctAnswers << " out of 5 correct answers." << std::endl;
}
