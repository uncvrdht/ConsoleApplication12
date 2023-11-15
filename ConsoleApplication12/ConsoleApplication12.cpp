#include <iostream>
#include <ctime>
using namespace std;
class DateTime {
public:
    int day;
    int month;
    int year;

    DateTime(int d, int m, int y) : day(d), month(m), year(y) {}

    friend  ostream& operator<<( ostream& os, const DateTime& dt);
};

 ostream& operator<<( ostream& os, const DateTime& dt) {
    os << dt.day << '/' << dt.month << '/' << dt.year;
    return os;
}

class Group {
public:
    int numberOfStudents;

    Group(int count) : numberOfStudents(count) {}

    friend  ostream& operator<<( ostream& os, const Group& group);
};

 ostream& operator<<( ostream& os, const Group& group) {
    os << "Number of students in the group: " << group.numberOfStudents;
    return os;
}

int main() {
    DateTime myDate(15, 11, 2023);
     cout << "DateTime object: " << myDate <<  endl;

    Group myGroup(30);
     cout << "Group object: " << myGroup <<  endl;

    return 0;
}