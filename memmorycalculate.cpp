#include <iostream>
#include <vector>
using namespace std;

class Student{
private:
    int id;
    string name;

public:
    Student(int i, string nm) {
        id = i;
        name = nm;
    }

    void display() {
        cout << "\tID : " << id << endl << "\t Name : " << name << endl;
    }
};

int main() {
    vector<Student> students;

    int no;
    cout << "Enter Number of Students: ";
    cin >> no;

    for (int i = 0; i < no; i++) {
        int id;
        string name;

        cout<<endl << "Enter ID for Student " << i + 1 << " : ";
        cin >> id;
        cout << "Enter Name for Student " << i + 1 << " : ";
        cin >> name;

        students.push_back(Student(id, name));
    }

    cout<<endl << "\t  Student List  " << endl;
   

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    return 0;
}


