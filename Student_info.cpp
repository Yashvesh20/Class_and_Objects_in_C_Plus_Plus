Yashvesh Singh 24070123138
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name,branch,subject,year;
    float result;
};
int main(){
Student s1;
    s1.name = "Yashvesh Singh";
    s1.branch = "ENTC";    
    s1.subject = "C++";
    s1.year = "2nd Year";
    s1.result = 9.4;    
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;
     s1.name = "Himansh Raj";
    s1.branch = "Computer Science";    
    s1.subject = "Python;
    s1.year = "2nd Year";
    s1.result = 6.9;    
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;

}
