#include <iostream>

void    ft_toupper(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }
}

int main(int argc, char *argv[])
{
    int     i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 0;
        while (argv[++i])
        {
            ft_toupper(argv[i]);
            std::cout << argv[i];
        }
        std::cout << '\n';
    }
    return (0);
}