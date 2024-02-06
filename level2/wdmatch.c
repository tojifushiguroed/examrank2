#include <unistd.h>

int main(int ac, char **av)
{
    if (ac != 3) {
        write(1, "\n", 1);
        return 0;
    }

    char *lookin = av[2];
    char *search = av[1];
    int i = 0;
    int j = 0;

    while (search[i]) {
        if (search[i] == lookin[j]) {
            i++; 
        }
        j++;

        if (lookin[j] == '\0' && search[i] != '\0') {
            write(1, "\n", 1);
            return 0;
        }
    }
    i = 0;
    while (search[i]) {
        write(1, &search[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
