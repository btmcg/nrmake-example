#include <iostream>
#include <string>


class three
{
public:
    three()
            : str_("three")
    {
        // empty
    }

    void
    print() const
    {
        std::cout << str_ << std::endl;
    }

private:
    std::string str_;
};
