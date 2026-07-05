#include<iostream>
class student
{
    int roll;
    float marks;
    public:
        void putdata(int a, float b)
        {
            roll=a;
            marks=b;
        }
        void display()
        {
            std::cout<<"Roll No: "<<roll;
            std::cout<<"Marks: "<<marks;
        }
};
void modifydata(student s,int r,float m)
{
    s.putdata(r,m);
    s.display();
}
int main()
{
    student s1;
    std::cout<<"Before call: "<<"\n";
    s1.putdata(101,98.7);
    s1.display();
    std::cout<<"After call: "<<"\n";
    modifydata(s1,101,78.9);
    s1.display();
}