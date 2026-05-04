#include "GradeBook.h"
#include <iostream>

int main() {
    std::cout << "Test Case 1: Basic functionality with multiple grades" << std::endl;
    GradeBook gb1;
    gb1.addGrade("Assignment1", 85.0);
    gb1.addGrade("Assignment2", 92.0);
    gb1.addGrade("Assignment3", 78.0);
    std::cout << "Average: " << gb1.getAverage() << " (Expected: 85.0)" << std::endl;
    std::cout << "Highest: " << gb1.getHighest() << " (Expected: 92.0)" << std::endl;
    std::cout << "Number of grades: " << gb1.numGrades() << " (Expected: 3)" << std::endl;
    std::cout << std::endl;

    std::cout << "Test Case 2: Empty grade book" << std::endl;
    GradeBook gb2;
    std::cout << "Average: " << gb2.getAverage() << " (Expected: 0.0)" << std::endl;
    std::cout << "Highest: " << gb2.getHighest() << " (Expected: 0.0)" << std::endl;
    std::cout << "Number of grades: " << gb2.numGrades() << " (Expected: 0)" << std::endl;
    std::cout << std::endl;

    std::cout << "Test Case 3: Single grade" << std::endl;
    GradeBook gb3;
    gb3.addGrade("Assignment1", 100.0);
    std::cout << "Average: " << gb3.getAverage() << " (Expected: 100.0)" << std::endl;
    std::cout << "Highest: " << gb3.getHighest() << " (Expected: 100.0)" << std::endl;
    std::cout << "Number of grades: " << gb3.numGrades() << " (Expected: 1)" << std::endl;

    return 0;
}