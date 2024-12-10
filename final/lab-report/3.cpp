#include <iostream>
#include <string>
using namespace std;
int counter = 1;
class Marks {
protected:
    int rollNumber;
    string name;
public:
    Marks() {
        rollNumber = counter++;
        name = "";
    }
    void Name(string n) {
        name = n;
    }
    int RollNumber() {
        return rollNumber;
    }
    string Name() {
        return name;
    }
};
class Physics : public Marks {
private:
    int phy_marks;

public:
    void Marks(int marks) {
        phy_marks = marks;
    }

    int Marks() {
        return phy_marks;
    }
};

class Chemistry : public Marks {
private:
    int chem_marks;

public:
    void Marks(int marks) {
        chem_marks = marks;
    }

    int Marks() {
        return chem_marks;
    }
};
class Mathematics : public Marks {
private:
    int math_marks;
public:
    void Marks(int marks) {
        math_marks = marks;
    }

    int Marks() {
        return math_marks;
    }
};
int main() {
    int numStudents;
    cout << "Enter the number of students in the class: ";
    cin >> numStudents;

    Physics* p = new Physics[numStudents];
    Chemistry* c = new Chemistry[numStudents];
    Mathematics* m = new Mathematics[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        string name;
        int physics, chemistry, mathematics;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter marks in Physics, Chemistry, and Mathematics: ";
        cin >> physics >> chemistry >> mathematics;

        p[i].Name(name);
        p[i].Marks(physics);

        c[i].Name(name);
        c[i].Marks(chemistry);

        m[i].Name(name);
        m[i].Marks(mathematics);
    }
    double totalClassMarks = 0;
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; ++i) {
        int totalMarks = p[i].Marks() + c[i].Marks() + m[i].Marks();
        totalClassMarks += totalMarks;

        cout << "Roll Number: " << p[i].RollNumber()
             << ", Name: " << p[i].Name()
             << ", Physics: " << p[i].Marks()
             << ", Chemistry: " << c[i].Marks()
             << ", Mathematics: " << m[i].Marks()
             << ", Total: " << totalMarks
             << ", Average: " << totalMarks / 3.0 << endl;
    }

    float classAverage = totalClassMarks / (numStudents * 3);
    cout << "Average Marks: " << classAverage << endl;
    cout << "Name: Kaniz Fatema" << endl << "ID: 20245103154" << endl;

    return 0;
}
