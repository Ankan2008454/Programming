#include<iostream>
#include<cstring>
class Mystring
{
    char *data;
    public: 
        Mystring(const char *s)
        {
            data=new char[strlen(s)+1];
            strcpy(data,s);
            std::cout<<"Constructed!\n";
        }
        Mystring(Mystring &&other)
        {
            data=other.data;
            other.data=nullptr;
            std::cout<<"Moved!\n";
        }
        ~Mystring()
        {
            delete[] data;
            std::cout<<"Destroyed\n";
        }
        void print()
        {
            if(data)
            std::cout<<data<<"\n";
            else
            std::cout<<"Empty\n";
        }
};
int main()
{
    Mystring s1("Hello");
    Mystring s2=std::move(s1);
    s1.print();
    s2.print();
    return 0;
}