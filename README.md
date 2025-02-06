# Kakshya - Classroom Management System

## Overview
Kakshya is a **Classroom Management Application** designed to streamline classroom scheduling and resource allocation within educational institutions. It helps track real-time classroom availability and provides role-based access for Coordinators, Teachers, and Class Representatives (CRs).

## Features
- **Real-time Classroom Vacancy Tracking**: Classrooms are marked using a **color-coded system** (e.g., red for occupied, green for available).
- **Role-Based Access Control**:
  - **Coordinators**: Upload routines and allocate classrooms based on university blocks.
  - **Class Representatives (CRs)**: Mark classrooms as occupied if needed.
  - **Teachers**: Cancel bookings, updating the status dynamically.
- **Database Integration**: Uses **MySQL** for managing login credentials and schedules.
- **User-Friendly Interface**: Built using **C++ with Qt** for an interactive and responsive experience.

## Technologies Used
- **C++** (Core application logic)
- **Qt (Qt Designer)** (Frontend UI)
- **MySQL** (Database management)

## Installation & Setup
### Prerequisites
Ensure the following are installed on your system:
- **Qt Framework** (for GUI development)
- **MySQL** (for database management)

### Steps
1. **Clone the Repository:**
   ```bash
   git clone <repository-url>
   cd Kakshya
   ```
2. **Configure the MySQL Database:**
   - Set up a local MySQL server.
   - Create a database named `kakshya`.
   - Import the required schema and tables.
3. **Build the Application:**
   - Open the project in **Qt Creator**.
   - Build and run the application.
4. **Run the Application:**
   - Log in with the appropriate credentials based on your role.
   - Start managing classroom schedules effectively.

## Usage
- **Coordinators**: Upload and manage class schedules.
- **CRs**: Mark classrooms as occupied when necessary.
- **Teachers**: Cancel room bookings when required.
- **Live Updates**: The system dynamically updates room availability in real time.

## Contribution Guidelines
- Follow best practices in **C++ and MySQL**.
- Ensure UI updates align with **Qt principles**.
- Keep code **clean and well-commented** for maintainability.

## License
Specify license details if applicable.

## Contact & Support
For issues, improvements, or feature requests, open a GitHub issue or contact the developer.

