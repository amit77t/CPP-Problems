#include<iostream>
#include<string>
using namespace std;

class Student{



    string name;
    float cgpa;
public:
    void getPercentage()
    {
        cout<<(cgpa * 10)<<" %  \n";
    }

    //Setter
    void setName(string nameVal)
    {
    name=nameVal;
    }
    void setCgpa(float cgpaVal)
    {
        cgpa=cgpaVal;
    }

    //getter

    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;
     s1.setName("Amit");
     s1.setCgpa(9.1);

     cout<<s1.getName()<<endl;
     cout<<s1.getCgpa()<<endl;
    

    return 0;
}