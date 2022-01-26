#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

int main() {

    int age = 25;

    cout << "age: " << age << endl;
    cout << "age size: " << sizeof(age) << endl;
    cout << "age address: " << &age << endl;

    int* agePointer = &age;
    cout << "agePointer: " << agePointer << endl;
    cout << "dereference agePointer: " << *agePointer << endl;
    cout << "agePointer address: " << &agePointer << endl;

    int** agePointerPointer = &agePointer;
    cout << "agePointerPointer: " << agePointerPointer << endl;
    cout << "dereference agePointerPointer: " << *agePointerPointer << endl;
    cout << "derference dereference agePointerPointer: " << **agePointerPointer << endl;

    int*** agePPP = &agePointerPointer;
    cout << "agePPP: " << agePPP << endl;

    int ages[] = {0, 10, 20, 30, 40 ,50 ,
                  60 ,70 ,80, 90};

    cout << "ages[0]: " << ages[0] << endl;
    cout << "&ages[0]: " << &ages[0] << endl;
    cout << "&ages: " << &ages << endl;

    cout << "ages[2]: " << ages[2] << endl;
    cout << "&ages[2]: " << &ages[2] << endl;

    int* agesPointer = ages;
    cout << "agesPointer: " << agesPointer << endl;
    cout << "dereference (agesPointer + 2): " << *(agesPointer + 2) << endl;

    cout << "*(agePointer + 1): " << *(agePointer + 1) << endl;

    // dynamic Memory
    int* heightPtr = new int;
    *heightPtr = 14;

    cout << "heightPtr: " << heightPtr << endl;
    cout << "dereference heightPtr: " << *heightPtr << endl;

    Person paul;
    paul.name = "Paul Raupach";
    paul.age = 51;

    cout << "Paul: " << paul.name << " is " << paul.age << endl;

    Person* bob;
    bob = new Person;
    bob->name = "Bob Smith";
    bob->age = 24;

    cout << "Bob: " << bob->name << " is " << bob->age << endl;

    delete heightPtr;
    delete bob;

    return 0;
}
