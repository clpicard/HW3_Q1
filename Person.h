#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
public:
    Person();
    Person(std::string first, std::string last, int year, int day, int month);
    std::string getName();
    std::string getBirthdate();

private:
    std::string Fname;
    std::string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;
};

// Student Class
class Student : public Person
{
private:
    int num_credits;

public:
    Student(std::string first, std::string last, int year, int day, int month, int credits);
    void setCredits(int credits);
    int getCredits();
};

// GradStudent Class
class GradStudent : public Student
{
private:
    std::string thesis_title;

public:
    GradStudent(std::string first, std::string last, int year, int day, int month, int credits);
    void setThesisTitle(std::string title);
    std::string getThesisTitle();
};

// UndergradStudent Class
class UndergradStudent : public Student
{
private:
    std::string club_name;

public:
    UndergradStudent(std::string first, std::string last, int year, int day, int month, int credits);
    void setClubName(std::string club);
    std::string getClubName();
};

#endif // PERSON_H
