#include "GradeBook.h"

GradeBook::GradeBook() {
    studentId = 0;
    studentName = "";
    grade = 'F';
    attendanceRate = 0.0;
    // grades is automatically empty
};

void GradeBook::addGrade(const std::string& assignment, double score) {
    grades[assignment] = score;
};

double GradeBook::getAverage() const {
    if (grades.empty()) return 0.0;
    double sum = 0.0;
    for (const auto& pair : grades) {
        sum += pair.second;
    }
    return sum / grades.size();
};

double GradeBook::getHighest() const {
    if (grades.empty()) return 0.0;
    double max = 0.0;
    for (const auto& pair : grades) {
        if (pair.second > max) max = pair.second;
    }
    return max;
};

int GradeBook::numGrades() const {
    return grades.size();
};