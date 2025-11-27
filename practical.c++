#include <iostream>
using namespace std;

//-------------------- 1. STUDENT --------------------
class Student {
private:
    char name[20];
    int rollno;

public:
    Student(const char n[] = "", int r = 0) {
        int i = 0;
        while (n[i] != '\0') {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
        rollno = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollno << endl;
    }
};

//-------------------- 2. CAR --------------------
class Car {
private:
    char model[20];
    int year;
    int speed;

public:
    void setData(const char m[], int y, int s) {
        int i = 0;
        while (m[i] != '\0') {
            model[i] = m[i];
            i++;
        }
        model[i] = '\0';

        year = y;
        speed = s;
    }

    void showData() {
        cout << "Model: " << model << ", Year: " << year << ", Speed: " << speed << endl;
    }
};

//-------------------- 3. DEVICE--------------------
class Device {
protected:
    char brand[20];
    int power;

public:
    void setDevice(const char b[], int p) {
        int i = 0;
        while (b[i] != '\0') {
            brand[i] = b[i];
            i++;
        }
        brand[i] = '\0';

        power = p;
    }

    void showDevice() {
        cout << "Brand: " << brand << ", Power: " << power << "W" << endl;
    }

    virtual void display() {}
};

class Laptop : public Device {
public:
    void display() {
        cout << "This is a Laptop" << endl;
    }
};

class Smartphone : public Device {
public:
    void display() {
        cout << "This is a Smartphone" << endl;
    }
};

//-------------------- 4. DISCOUNT--------------------
class Device2 {
public:
    virtual float calculateDiscount() = 0;
};

class Laptop2 : public Device2 {
public:
    float calculateDiscount() {
        return 1500;
    }
};

class Smartphone2 : public Device2 {
public:
    float calculateDiscount() {
        return 800;
    }
};

//-------------------- 5. ANIMAL --------------------
class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};

class Lion : public Animal {
public:
    void makeSound() { cout << "Lion: Roar" << endl; }
    void move() { cout << "Lion runs on land." << endl; }
};

class Fish : public Animal {
public:
    void makeSound() { cout << "Fish: (no sound)" << endl; }
    void move() { cout << "Fish swims in water." << endl; }
};

int main() {

    int choice = -1;

    while (choice != 0) {

        cout << endl;
        cout << "\t================ MENU ================" << endl <<endl;
        cout << "1. Student Class" << endl;
        cout << "2. Car Class" << endl;
        cout << "3. Device (Inheritance)" << endl;
        cout << "4. Discount (Abstract Class)" << endl;
        cout << "5. Animals (Polymorphism)" << endl; 
        cout << "0. Exit" << endl;
        cout <<endl<<"Enter your choice: ";
        cin >> choice;
        cout << endl;

      
        if (choice == 1) {
            Student s1("Akshay", 17);
            Student s2("Rahul", 12);
            s1.display();
            s2.display();
        }

        else if (choice == 2) {
            Car c;
            c.setData("BMW", 2025, 180);
            c.showData();
        }

        else if (choice == 3) {
            Laptop l;
            Smartphone s;

            l.setDevice("Dell", 65);
            s.setDevice("OnePlus", 20);

            l.showDevice();
            l.display();

            s.showDevice();
            s.display();
        }

        else if (choice == 4) {
            Device2* d1 = new Laptop2();
            Device2* d2 = new Smartphone2();

            cout << "Laptop Discount: " << d1->calculateDiscount() << endl;
            cout << "Smartphone Discount: " << d2->calculateDiscount() << endl;

            delete d1;
            delete d2;
        }

        else if (choice == 5) {
            Animal* a1 = new Lion();
            Animal* a2 = new Fish();

            a1->makeSound();
            a1->move();

            a2->makeSound();
            a2->move();

            delete a1;
            delete a2;
        }

        else if (choice == 0) {
            cout << "Exiting program..." << endl;
        }

        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

