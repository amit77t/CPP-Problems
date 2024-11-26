#include<iostream>
using namespace std;

class Student{
    public: // access modifier

    string name;
    float cgpa;

    void getPercentage()
    {
        cout<<(cgpa * 10)<<" %  \n";
    }
};

int main()
{
    Student s1;
    s1.name ="Amit";
    s1.cgpa=9.0;

    cout<<s1.name<<endl;
    s1.getPercentage();
    

    return 0;
}