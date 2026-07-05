#include<iostream>
class student
{
    private:
          int roll;
          int marks;
    public:
        void putdata(int a,float b);
        void display();
};

void student::putdata(int a, float b)
{
    roll=a;
    marks=b;
}

void student::display()
{
    std::cout<<"The roll no of the student is : "<<roll<<"\n";
    std::cout<<"The marks of the student is : "<<marks;
}

int main()
{
    student c;
    c.putdata(101,75);
    c.display();
}