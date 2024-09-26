#include <iostream>
#include <tuple>  // For using std::tuple
using namespace std;

class Person {
    string Fname;
    string Lname;
    int age;
public:
    string FL; // Full name
    // Constructor
    Person(string f, string l, int a) {
        Fname = f;
        Lname = l;
        age = a;
    }

    // Method to get the full name
    void getFullName() {
        FL = Fname + " " + Lname;
        cout << "Full Name: " << FL << endl;
    }

    // Method to return details as a tuple
    tuple<string, string, int> getDetails() {
        return make_tuple(Fname, Lname, age);
    }
};

int main() {
    // Create a Person object
    Person person("Harshit", "Singh", 20);

    // Call getFullName method
    person.getFullName();

    // Use structured bindings to unpack the tuple returned by getDetails()
    auto [firstName, lastName, age] = person.getDetails();

    // Print the details
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;

    return 0;
}
