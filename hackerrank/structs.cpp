#include <iostream>

using namespace std;

struct Name {
    string first;
    string last;
};

struct Student {
    Name name;
    int age, standard;
};

int main() {
    Student student;
    
    cin >> student.age >> student.name.first >> student.name.last >> student.standard;
    cout << student.age << " " << student.name.first << " " << student.name.last << " " << student.standard;
    
    return 0;
}