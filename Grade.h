#pragma once
#include <string>

using namespace std;
 
class GradeBook {
public:
    GradeBook();
    void addGrade(const std::string& assignment, double score);
    double getAverage() const;
    double getHighest() const;
    int numGrades() const;
private:
    int studentId;
    string studentName;
    char grade;
    double attendanceRate;
};
