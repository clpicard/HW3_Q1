#include "Person.h"
#include <sstream>
using namespace std;

Person::Person() : Fname(""), Lname(""), birthDay(1), birthMonth(1), birthYear(1) {}

Person::Person(string first, string last, int day, int month, int year)
    : Fname(first), Lname(last), birthDay(day), birthMonth(month), birthYear(year) {}

string Person::getName() { return Fname + " " + Lname; }

string Person::getBirthdate() {
    ostringstream bday;
    bday << birthDay << "/" << birthMonth << "/" << birthYear;
    return bday.str();
}


// Student Class Definitions
Student::Student(string first, string last, int year, int day, int month, int credits)
    : Person(first, last, day, month, year), num_credits(credits) {}

void Student::setCredits(int credits) { num_credits = credits; }

int Student::getCredits() { return num_credits; }

// GradStudent Class Definitions
GradStudent::GradStudent(string first, string last, int year, int day, int month, int credits)
    : Student(first, last, year, day, month, credits), thesis_title("The Love of Guinea Pigs") {}

void GradStudent::setThesisTitle(string title) { thesis_title = title; }

string GradStudent::getThesisTitle() { return thesis_title; }

// UndergradStudent Class Definitions
UndergradStudent::UndergradStudent(string first, string last, int year, int day, int month, int credits)
    : Student(first, last, year, day, month, credits), club_name("Pick Up Trash Don't Be Trash Club") {}

void UndergradStudent::setClubName(string club) { club_name = club; }

string UndergradStudent::getClubName() { return club_name; }