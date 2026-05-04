#pragma once
#include <string>
#include <map>

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
    std::map<std::string, double> grades;
};
