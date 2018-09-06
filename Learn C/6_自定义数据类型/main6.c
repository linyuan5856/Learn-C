
#include <stdio.h>

enum LIGHT
{
    RED,
    GREEN,
    BLUE
} g_light_enum;

void foo1();


int main(int argc, char const *argv[])
{
    foo1();

    return 0;
}

void foo1(void)
{
    enum LIGHT m_light_enum = RED;
    printf("Globle Enum is %d , Local Enum is %d", g_light_enum, m_light_enum);
}