#include <stdio.h>
#include <stdbool.h>

#define LOVE_TWO  "Hello world"
const int LOVE=1314520;
int main(int argc, char const *argv[])
{
    bool value;

    if (value)
    {
        printf("it's true");
    }
    else
    {
        printf("it's false");
    }

    int num = value ? 1024 : 2048;
 
    printf("\n%d",num);

    printf("\n%d",LOVE);

    printf("\n%s",LOVE_TWO);

    printf("\n size of Bool is --> %d  \n size of Int is -->%d",sizeof(bool),sizeof(int));
    return 0;
}
