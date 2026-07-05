#include<iostream>
#include<cstring>
class Student
{
    char *name;
    public:
        Student(const char *n)
        {
            name=new char[strlen(n)+1];
            strcpy(name,n);
        }
        void setName(const char *n)
        {
            strcpy(name,n);
        }
        void display()
        {
            std::cout<<"Name : "<<name<<"\n";
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
    s2.setName("Mike");
    s1.display();
    s2.display();
    return 0;
}