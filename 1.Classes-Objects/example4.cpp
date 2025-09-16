// Multiple-objects
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string standard;
    int age;
    string stream;
    
    void displayInfo(){
        cout<< "Name: " << name << ", Age:" << age << ", class:" << standard <<  ", stream:" << stream << endl;
    }
};

int main() {
    // Create multiple objects
    Student student1, student2, student3;
    
    student1.name = "Neggggga";
    student1.standard = "XI";
    student1.age = 16;
    student1.stream = "PCM";
    
    student2.name = "Speed";
    student2.standard = "XII";
    student2.age = 18;
    student2.stream = "Commerce";
    
    student3.name = "Sidhu";
    student3.standard = "X";
    student3.age = 22;
    student3.stream = "Can't Opt, Failure";

    // Dsi[play Information
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();

    return 0;
}