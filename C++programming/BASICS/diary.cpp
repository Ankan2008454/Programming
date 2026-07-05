#include<iostream>
#include<string>
class diary;
class bestf
{
    public:
        void readsecret(diary d);
   
};
class diary
{
    private: std::string secret;
    public:
        void setsecret(std:: string s)
        {secret =s;}
    friend void bestf::readsecret(diary d);
};
void bestf::readsecret(diary d)
{
    
        std::cout<<"Reading diary: "<<d.secret<<"\n";
}
int main()
{
    diary a;
    a.setsecret("I have a crush on C++ coding");
    bestf bf;
    bf.readsecret(a);
    return 0;
}
