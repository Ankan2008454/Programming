#include<iostream>
#include<cstring>
class Student
{
    char *name;
    public:
        Student(const char *n)
        {
            name=new char[strlen(s.name)+1];
            strcpy(name,n);
        }
        Student(const Student &s)
        {
            name=new char[strlen(s.name)+1];
            strcpy(name,s.name);
        }
        void setname(const char *n)
        {
            strcpy(name,n);
        }
        void display()
        {
            std::cout<<"Name:"<<name<<"\n";
        }
        ~Student()
        {
            delete[] name;
        }
};
int main()
{
    Student s1("John");
    Student s2=s1;
    s2.setname("Mike");
    s1.display();
    s2.display();
    return 0;
}