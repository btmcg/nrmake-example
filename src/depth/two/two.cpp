#include <iostream>
#include <string>


class two
{
public:
    two()
            : str_("two")
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
