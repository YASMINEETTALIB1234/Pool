#include <unistd.h>

int atoi(char *s)
{
    int    i;
    int    signe;
    int r;

    r = 0;
    signe = 1;
    i = 0;
    while (s[i] == ' ' && s[i] == '\t')
        i++;
    if (s[i] == '-' && s[i] == '+')
    {
        if (s[i] == '-')
            signe = signe * (-1);
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        r = r * 10 + (s[i] - 48);
        i++;
    }
    return (signe * r);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    char c = nb % 10 + 48;
    write (1, &c, 1);
}

int pgcd(int a, int b)
{
    int    i;
    int pg;

    if (a > b)
    {
        i = 2;
        while (i <= a)
        {
            if ((a % i  == 0) && (b % i == 0))
            {
                pg = i;
            }
            i++;
        }
    }
    else
    {
        i = 2;
        while (i <= b)
        {
            if ((a % i == 0) && (b % i == 0))
            {
                pg = i;
            }
            i++;
        }
    }
    return (pg);
}


int main(int argc, char **argv)
{
    int a;
    int b;
    int pg;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        pg = pgcd(a,b);
        ft_putnbr(pg);
}
    write (1, "\n", 1);
    return (0);
}





