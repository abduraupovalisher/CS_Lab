#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
class Student {
private:
    string name;
    long id;
    string groupName;

public:
    Student(string n, long i, string g) : name(n), id(i), groupName(g) {}
    string getGroupName() const {
        return groupName;
    }
};

void countStudentsInGroups(const vector<Student>& students) {
    map<string, int> groupCount;

    for (const auto& student : students) {
        ++groupCount[student.getGroupName()];
    }

    for (const auto& group : groupCount) {
        cout << group.first << ":" << group.second << endl;
    }
}

int main() {
    int n;
    cin >> n; 

    vector<Student> students;
    string name, groupName;
    long id;

    for (int i = 0; i < n; ++i) {
        cin >> name >> id >> groupName;
        students.emplace_back(name, id, groupName);
    }

    countStudentsInGroups(students);

    return 0;
}
