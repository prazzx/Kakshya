USE kakshya;

CREATE TABLE BIT (
    id INT AUTO_INCREMENT PRIMARY KEY,
    day VARCHAR(20) NOT NULL,
    time_slot VARCHAR(20) NOT NULL,
    subject_code VARCHAR(20),
    subject_name VARCHAR(50),
    instructor VARCHAR(50),
    room VARCHAR(20)
);
CREATE TABLE CE1_1 (
    id INT AUTO_INCREMENT PRIMARY KEY,
    day VARCHAR(20) NOT NULL,
    time_slot VARCHAR(20) NOT NULL,
    subject_code VARCHAR(20),
    subject_name VARCHAR(50),
    instructor VARCHAR(50),
    room VARCHAR(20)
);
CREATE TABLE CE1_2 (
    id INT AUTO_INCREMENT PRIMARY KEY,
    day VARCHAR(20) NOT NULL,
    time_slot VARCHAR(20) NOT NULL,
    subject_code VARCHAR(20),
    subject_name VARCHAR(50),
    instructor VARCHAR(50),
    room VARCHAR(20)
);