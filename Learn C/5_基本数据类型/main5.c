
#include <stdio.h>
#include <limits.h>
//整形 int,short,long,long long,bool,char,size_t,ptrdiff_t
//浮点类型 float, double, long double
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

void foo3()
{
    float f = 0.25f;
    printf("float value --> %f\n", f);

    f=-3.5E+3f;
    printf("float value --> %f\n", f);
    
    f=0x5p+10f; //(5*16)*2的10次方-->5*1024 
    printf("float value --> %f\n", f);
}

int main(int argc, char const *argv[])
{
    //foo();
    //foo2();
    foo3();
    return 0;
}
