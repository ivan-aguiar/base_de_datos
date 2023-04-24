import pandas as pd

#Definición clase Student

class Student:
    def __init__(self, identifier, name, surname):
        self.identifier = identifier
        self.name = name
        self.surname = surname
    
    def __str__(self):
        return "\nID: " + str(self.identifier) + "\nName: " + self.name + "\nSurname: " + self.surname
        
#Definición clase Course

class Course:
    def __init__(self, identifier, name):
        self.identifier = identifier
        self.name = name
    def __str__(self):
        return "\nCourse ID: " + str(self.identifier) + "\nCourse" + self.name

student1 = Student(1, "Ahsoka", "Tano")
course1 = Course(1, "Defense Against Dark Side")


#CSV with Pandas

raw_data = {"ID": [student1.identifier],
            "Name": [student1.name],
            "Surname": [student1.surname],
            "Course ID": [course1.identifier],
            "Course": [course1.name]}
df = pd.DataFrame(raw_data, columns = ["ID", "Name", "Surname", "Course ID", "Course"])
df.to_csv("data.csv")
df

