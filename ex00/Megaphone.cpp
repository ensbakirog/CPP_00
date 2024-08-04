#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (size_t i = 1; argv[i]; i++)
            for (size_t j = 0; argv[i][j]; j++)
                std::cout << (char)std::toupper(argv[i][j]);
    }
    return (std::cout << std::endl, EXIT_SUCCESS);
}
