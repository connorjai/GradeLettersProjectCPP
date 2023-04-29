//Name: Connor Gladish
//Date: 03/26/23
//Description: Grade Letters
#include <iostream>
//https://en.cppreference.com/w/cpp/container/vector
//https://www.youtube.com/watch?v=RXzzE2wnnlo
//https://en.cppreference.com/w/cpp/container/vector/push_back
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

string getLetterGrade(int grade) {
    if (grade >= 90) {
        return "A";
    }
    else if (grade >= 80) {
        return "B";
    }
    else if (grade >= 70) {
        return "C";
    }
    else if (grade >= 60) {
        return "D";
    }
    else {
        return "F";
    }
}

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    int numA = 0, numB = 0, numC = 0, numD = 0, numF = 0;
    int totalGradePoints = 0;

    int highestGrade = 0, lowestGrade = 100;
    string highestGradeName, lowestGradeName;

    vector<string> namesA, namesB, namesC, namesD, namesF;
    //https://cplusplus.com/reference/cstring/
    for (int i = 1; i <= numStudents; i++) {
        string name;
        int grade;
        cout << "Enter name and grade " << i << " of " << numStudents << ": ";
        cin >> name >> grade;

        string letterGrade = getLetterGrade(grade);
        totalGradePoints += grade;
        if (letterGrade == "A") {
            numA++;
            namesA.push_back(name);
        }
        else if (letterGrade == "B") {
            numB++;
            namesB.push_back(name);
        }
        else if (letterGrade == "C") {
            numC++;
            namesC.push_back(name);
        }
        else if (letterGrade == "D") {
            numD++;
            namesD.push_back(name);
        }
        else {
            numF++;
            namesF.push_back(name);
        }

        if (grade > highestGrade) {
            highestGrade = grade;
            highestGradeName = name;
        }
        else if (grade == highestGrade && name != highestGradeName) {
            highestGradeName += " and " + name;
        }
        if (grade < lowestGrade) {
            lowestGrade = grade;
            lowestGradeName = name;
        }
        else if (grade == lowestGrade && name != lowestGradeName) {
            lowestGradeName += " and " + name;
        }

        cout << "  " << name << " made letter grade: " << letterGrade << endl;
    }

    cout << "All grades read in. Here are the stats:" << endl;
    cout << "There were:" << endl;
    cout << " " << numA << " A:";
    for (size_t i = 0; i < namesA.size(); i++) {
        if (i == namesA.size() - 2) {
            cout << " " << namesA[i] << " and";
        }
        else if (i == namesA.size() - 1) {
            cout << " " << namesA[i];
        }
        else {
            cout << " " << namesA[i] << " and";
        }
    }
    cout << endl;
    cout << " " << numB << " B:";
    for (size_t i = 0; i < namesB.size(); i++) {
        if (i == namesB.size() - 2) {
            cout << " " << namesB[i] << " and";
        }
        else if (i == namesB.size() - 1) {
            cout << " " << namesB[i];
        }
        else {
            cout << " " << namesB[i] << " and";
        }
    }
    cout << endl;
    cout << " " << numC << " C:";
    for (size_t i = 0; i < namesC.size(); i++) {
        if (i == namesC.size() - 2) {
            cout << " " << namesC[i] << " and";
        }
        else if (i == namesC.size() - 1) {
            cout << " " << namesC[i];
        }
        else {
            cout << " " << namesC[i] << " and";
        }
    }
    cout << endl;
    cout << " " << numD << " D:";
    for (size_t i = 0; i < namesD.size(); i++) {
        if (i == namesD.size() - 2) {
            cout << " " << namesD[i] << " and";
        }
        else if (i == namesD.size() - 1) {
            cout << " " << namesD[i];
        }
        else {
            cout << " " << namesD[i] << " and";
        }
    }
    cout << endl;
    cout << " " << numF << " F:";
    for (size_t i = 0; i < namesF.size(); i++) {
        if (i == namesF.size() - 2) {
            cout << " " << namesF[i] << " and";
        }
        else if (i == namesF.size() - 1) {
            cout << " " << namesF[i];
        }
        else {
            cout << " " << namesF[i] << " and";
        }
    }


    cout << endl;
    double classAverage = (double)totalGradePoints / numStudents;
    cout << "The average grade was: " << fixed << setprecision(1) <<
        classAverage << " which is a ";
    if (classAverage <= 50) {
        cout << "F" << endl;
    }
    else if (classAverage >= 60 and classAverage <= 69) {
        cout << "D" << endl;
    }
    else if (classAverage >= 70 and classAverage <= 79) {
        cout << "C" << endl;
    }
    else if (classAverage >= 80 and classAverage <= 89) {
        cout << "B" << endl;
    }
    else if (classAverage <= 90) {
        cout << "A" << endl;
    }
    cout << "The highest grade was: " << highestGrade << " and was made by: " <<
        highestGradeName << endl;
    cout << "The lowest grade was: " << lowestGrade << " and was made by: " <<
        lowestGradeName << endl;

    return(0);
}
//I remember this one being super fun to make. Not complicated.
//Had several parts of what we had learned incorporated. Good mini-proj.