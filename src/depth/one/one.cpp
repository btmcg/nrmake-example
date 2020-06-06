#include <iostream>
#include <string>


class one
{
public:
    one()
            : str_("one")
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
