#include <stdio.h>
union check_endian
{
    unsigned int value;
    char r;
};
union check_endian endian;

int main(void)
{
    endian.value = 0x1;

    if (endian.r == 1)
        printf("Your system is Little Endian\n");
    else
        printf("Your system is Big Endian\n");
    return 0;
}
