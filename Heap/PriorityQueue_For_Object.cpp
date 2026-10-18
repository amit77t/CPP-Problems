#include<iostream>
#include<queue>
using namespace std;


class Student{
public:
   string name;
   int marks;
    Student(string name, int marks)
    {
        this->name=name;
        this->marks=marks;
    }

    bool operator < (const Student &obj) const{
        return this->marks <obj.marks;
    }
};


int main()
{
    priority_queue<Student> pq;

    pq.push(Student("otis", 89));
    pq.push(Student("mike", 90));
    pq.push(Student("james", 75));
    pq.push(Student("albus", 69));


    while(!pq.empty())
    {
        cout<<"Top : "<<pq.top().name << ","<<pq.top().marks;
        pq.pop();


    }

    return 0;
    
}








int main()
{
    return 0;
}