#include<iostream>
class Item
{
    private:
        static int value;
    public:
        static int fun()
        {
            return value;
        }
};
int Item::value{10};
int main()
{
    std::cout<<Item::fun();
    return 0;
}