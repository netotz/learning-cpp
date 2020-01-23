#include <iostream>
#include <cstdio>

using namespace std;

class Name {
    private:
        string first, last;
    public:
        void set_first(string first_name) {
            first = first_name;
        }
        string get_first() {
            return first;
        }

        void set_last(string last_name) {
            last = last_name;
        }
        string get_last() {
            return last;
        }
};

class Student {
    private:
        int age, standard;
    public:
        Name name;

        void set_age(int student_age) {
            age = student_age;
        }
        int get_age() {
            return age;
        }

        void set_standard(int student_standard) {
            standard = student_standard;
        }
        int get_standard() {
            return standard;
        }

        string toString() {
            char buffer[255];
            sprintf(buffer, "%d,%s,%s,%d", age, name.get_first().c_str(), name.get_last().c_str(), standard);
            return buffer;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student student;
    student.set_age(age);
    student.set_standard(standard);
    student.name.set_first(first_name);
    student.name.set_last(last_name);
    
    cout << student.get_age() << "\n";
    cout << student.name.get_last() << ", " << student.name.get_first() << "\n";
    cout << student.get_standard() << "\n";
    cout << "\n";
    cout << student.toString();
    
    return 0;
}