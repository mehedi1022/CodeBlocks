-- create
CREATE TABLE EMPLOYEE (
  empId INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  dept TEXT NOT NULL
);

-- insert
INSERT INTO EMPLOYEE VALUES (0001, 'Clark', 'Sales');
INSERT INTO EMPLOYEE VALUES (0002, 'Dave', 'Accounting');
INSERT INTO EMPLOYEE VALUES (0003, 'Arvarice', 'Marketing');
INSERT INTO EMPLOYEE VALUES (0004, 'Mark', 'Accounting');
INSERT INTO EMPLOYEE VALUES (0005, 'Claude', 'Sales');
INSERT INTO EMPLOYEE VALUES (0006, 'Kingstone', 'Marketing');
INSERT INTO EMPLOYEE VALUES (0007, 'Joy', 'Sales');
INSERT INTO EMPLOYEE VALUES (0008, 'Kevin', 'Sales');
INSERT INTO EMPLOYEE VALUES (0009, 'Kiana', 'Marketing');
INSERT INTO EMPLOYEE VALUES (0010, 'Bianca', 'Accounting');
INSERT INTO EMPLOYEE VALUES (00011, 'Jeanne', 'Accounting');
INSERT INTO EMPLOYEE VALUES (00012, 'Kelvin', 'Sales');

-- fetch 

SELECT name FROM EMPLOYEE;
SELECT dept FROM EMPLOYEE;
SELECT * FROM EMPLOYEE WHERE dept = 'Accounting' or dept = 'Sales';

-- delete from EMPLOYEE Where dept = 'Sales' or dept = 'Marketing';

UPDATE EMPLOYEE SET name = 'Alfred Schmidt', dept = 'Marketing' WHERE empId = 0001;

SELECT * from EMPLOYEE;

CREATE TABLE Department (
  studentId INT PRIMARY KEY,
  name TEXT NOT NULL,
  dept TEXT NOT NULL
);

INSERT INTO Department VALUES (001, 'Ahad', 'ENG');
INSERT INTO Department VALUES (002, 'Avro', 'EEE');
INSERT INTO Department VALUES (003, 'Argho', 'CIVIL');
INSERT INTO Department VALUES (004, 'Mughdo', 'PHAR');
INSERT INTO Department VALUES (005, 'Kirti', 'ARCH');
INSERT INTO Department VALUES (006, 'Jahidul', 'DBA');
INSERT INTO Department VALUES (007, 'Aritro', 'DBA');
INSERT INTO Department VALUES (008, 'Jihad', 'EEE');
INSERT INTO Department VALUES (009, 'Salman', 'CSE');
INSERT INTO Department VALUES (0010, 'Adib', 'CIVIL');

UPDATE Department SET studentId = case
  when studentId = 1 then 2001
  when studentId = 2 then 2002
  when studentId = 3 then 2003
  when studentId = 4 then 2004
  when studentId = 5 then 2005
  when studentId = 6 then 2006
  when studentId = 7 then 2007
  when studentId = 8 then 2008
  when studentId = 9 then 2009
  when studentId = 10 then 2010
  ELSE studentId
END;
  
UPDATE EMPLOYEE  SET name = case
  When empId > 6 then 'Okay'
  else 'Not Okay'
end;

SELECT * From EMPLOYEE;
SELECT * From Department;

CREATE TABLE ClassRoom (
  building INTEGER NOT NULL,
  room_number TEXT NOT NULL,
  capacity INTEGER
);

INSERT INTO ClassRoom VALUES (1, '101', 42);
INSERT INTO ClassRoom VALUES (2, '205', 52);
INSERT INTO ClassRoom VALUES (3, '301', 51);
INSERT INTO ClassRoom VALUES (4, '101', 27);
INSERT INTO ClassRoom VALUES (5, '710', 48);
INSERT INTO ClassRoom VALUES (6, '604', 42);

SELECT * From ClassRoom;

delete from ClassRoom where building = 4;
SELECT * From ClassRoom;
SELECT * From ClassRoom where building < 5;

-- or
SELECT * From ClassRoom where building = 2 or capacity = 42;
-- and
SELECT * From ClassRoom where building = 2 or capacity = 52;


SELECT * From ClassRoom;
-- Add column
ALTER TABLE ClassRoom ADD Email varchar(255) not null;
SELECT * From ClassRoom;
-- drop column
ALTER Table ClassRoom Drop column capacity;
SELECT * From ClassRoom;
-- rename table
/*ALTER TABLE ClassRoom RENAME TO Room;
SELECT * From ClassRoom;*/

ALTER TABLE ClassRoom
RENAME COLUMN building TO BUILDING_NO;
SELECT * FROM ClassRoom;

UPDATE ClassRoom SET Email = '123abc@gmail.com'
where BUILDING_NO>0;

SELECT * FROM ClassRoom;