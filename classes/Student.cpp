#include "Student.h"
#include <string>
#include "Schedule.h"

using namespace std;

Student::Student(string id, string name, Schedule schedule) {
    this->id = id;
    this->name = name;
    this->schedule = schedule;
}

string Student::getId() const {
    return id;
}
string Student::getName() const {
    return name;
}
Schedule Student::getSchedule() const {
    return schedule;
}
void Student::setId(string id) {
    this->id = id;
}
void Student::setName(string name) {
    this->name = name;
}
void Student::setSchedule(Schedule schedule) {
    this->schedule = schedule;
}
