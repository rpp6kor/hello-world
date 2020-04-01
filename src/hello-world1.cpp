#include <iostream>

class test_class
{
    public:
    test_class(){}

    void start_here()
    {
        std::cout << "Strat here" << std::endl;
    }

    void end_here()
    {
        std::cout << "End here..." << std::endl;
    }
};


int main()
{
    test_class otest_class{};
    otest_class.start_here();
    otest_class.end_here();

    return 0;
}