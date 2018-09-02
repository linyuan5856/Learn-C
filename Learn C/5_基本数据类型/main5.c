
#include <stdio.h>
#include <limits.h>
//int,short,long,long long,bool,char,size_t,ptrdiff_t

void foo()
{

    printf("int max -->%d \n int min -->%d \n", INT_MAX, INT_MIN);

    printf("\n0x%x", INT_MAX); //16进制 Int_MAX
    printf("\n0x%x", INT_MIN); //16进制 Int_MIN
    printf("\n0x%x", 20);      //16进制
    printf("\n0%o", 20);       //8进制

    printf("\n short max -->%d \n shrot min -->%d \n", SHRT_MAX, SHRT_MIN);

    printf("\n size of Long %d", sizeof(long));
    printf("\n long min %ld", LONG_MIN);
    printf("\n long max %ld", LONG_MAX);
    printf("\n long long min %lld", LLONG_MIN);
    printf("\n long long max %lld", LLONG_MAX);
}

void foo2()
{

    char ch = 'a';
    printf("[1] ch is %c\n", ch);
    ch = 'abc';
    printf("[2] ch is %c\n", ch);

    int s = '0\cba';
    printf("s=%s\n", (char *)&s);
    
}

int main(int argc, char const *argv[])
{
    //foo();
    foo2();
    return 0;
}
