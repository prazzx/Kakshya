// Kakshya: Classroom Management Application

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Enum to represent room status
enum RoomStatus {
    AVAILABLE,
    OCCUPIED,
    FULL
};

// Structure to represent a classroom
struct Classroom {
    string name;
    RoomStatus status;
};

// Base class for user roles
class User {
protected:
    string username;
    string role;

public:
    User(string uname, string r) : username(uname), role(r) {}

    virtual void displayOptions() = 0; // Pure virtual function
};

// Derived class for Coordinators
class Coordinator : public User {
private:
    vector<Classroom>& classrooms;

public:
    Coordinator(string uname, vector<Classroom>& cls) : User(uname, "Coordinator"), classrooms(cls) {}

    void uploadRoutine() {
        cout << "Uploading routine...\n";
        // Placeholder for routine upload logic
    }

    void allocateClassroom(string className, RoomStatus status) {
        for (auto& classroom : classrooms) {
            if (classroom.name == className) {
                classroom.status = status;
                cout << "Classroom " << className << " allocated with status " << status << "\n";
                return;
            }
        }
        cout << "Classroom " << className << " not found!\n";
    }

    void displayOptions() override {
        cout << "1. Upload Routine\n2. Allocate Classroom\n";
    }
};

// Derived class for Class Representatives
class CR : public User {
private:
    vector<Classroom>& classrooms;

public:
    CR(string uname, vector<Classroom>& cls) : User(uname, "Class Representative"), classrooms(cls) {}

    void markClassroomOccupied(string className) {
        for (auto& classroom : classrooms) {
            if (classroom.name == className) {
                if (classroom.status == AVAILABLE) {
                    classroom.status = OCCUPIED;
                    cout << "Classroom " << className << " marked as occupied.\n";
                } else {
                    cout << "Classroom " << className << " is already occupied or full.\n";
                }
                return;
            }
        }
        cout << "Classroom " << className << " not found!\n";
    }

    void displayOptions() override {
        cout << "1. Mark Classroom Occupied\n";
    }
};

// Derived class for Teachers
class Teacher : public User {
private:
    vector<Classroom>& classrooms;

public:
    Teacher(string uname, vector<Classroom>& cls) : User(uname, "Teacher"), classrooms(cls) {}

    void cancelBooking(string className) {
        for (auto& classroom : classrooms) {
            if (classroom.name == className) {
                if (classroom.status != AVAILABLE) {
                    classroom.status = AVAILABLE;
                    cout << "Booking for classroom " << className << " cancelled.\n";
                } else {
                    cout << "Classroom " << className << " is already available.\n";
                }
                return;
            }
        }
        cout << "Classroom " << className << " not found!\n";
    }

    void displayOptions() override {
        cout << "1. Cancel Booking\n";
    }
};

// Utility function to display classroom statuses
void displayClassrooms(const vector<Classroom>& classrooms) {
    cout << "\nClassroom Statuses:\n";
    for (const auto& classroom : classrooms) {
        cout << "Classroom " << classroom.name << " - Status: ";
        switch (classroom.status) {
            case AVAILABLE:
                cout << "Available\n";
                break;
            case OCCUPIED:
                cout << "Occupied\n";
                break;
            case FULL:
                cout << "Full\n";
                break;
        }
    }
}

int main() {
    // Initializing classrooms
    vector<Classroom> classrooms = {
        {"Room A", AVAILABLE},
        {"Room B", AVAILABLE},
        {"Room C", AVAILABLE}
    };

    // Creating users
    Coordinator coordinator("Alice", classrooms);
    CR cr("Bob", classrooms);
    Teacher teacher("Charlie", classrooms);

    // Simulated actions
    coordinator.allocateClassroom("Room A", FULL);
    cr.markClassroomOccupied("Room B");
    teacher.cancelBooking("Room A");

    displayClassrooms(classrooms);

    return 0;
}
