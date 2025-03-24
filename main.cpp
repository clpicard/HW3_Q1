#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    // Demonstrate Person
    Person person("Winnie", "The Pooh", 8, 21, 1926);
    cout << person.getName() << " stumbled out of the Hundred Acre Wood on: " << person.getBirthdate() << endl;

    // Demonstrate Student
    Student student("Harry", "Potter", 1980, 7, 31, 45);
    cout << student.getName() << " enrolled at Hogwarts on: " << student.getBirthdate() << ", carrying " << student.getCredits() << " spell books." << endl;
    student.setCredits(60);
    cout  << student.getName() << " now has " << student.getCredits() << " spell books using the Invisibility Cloak" << endl;

    // Demonstrate GradStudent
    GradStudent gradstudent("Matilda", "Wormwood", 1988, 10, 5, 25);
    cout << gradstudent.getName() << " skipped kindergarten and started studying advanced telekinesis on: " << gradstudent.getBirthdate() << ", Thesis Title: '" << gradstudent.getThesisTitle() << "'" << endl;
    gradstudent.setThesisTitle("How to Levitate Pancakes");
    cout << "Matilda updated her thesis title to: '" << gradstudent.getThesisTitle() << endl;

    // Demonstrate UndergradStudent
    UndergradStudent undergrad("Frodo", "Baggins", 2968, 9, 22, 100);
    cout << undergrad.getName() << " reluctantly joined the 'One Ring' club on: " << undergrad.getBirthdate() << endl;
    undergrad.setClubName("Square Peg Round Hole");
    cout << "Updated Club Name: " << undergrad.getClubName() << " (Still hates it...)" << endl;

    return 0;
}
