
#include <stdio.h>
#include <stdint.h>

enum LIGHT
{
    RED,
    GREEN,
    BLUE
} g_light_enum;

struct Room
{
    int_fast32_t size;
    struct Person *p;

    enum LIGHT l;

    _Static_assert(RED == 0, "WRONG");
};

struct Person
{
    int_fast32_t age;
    char name[30];
};

struct Position
{
    float x, y;
};

struct Rect
{
    enum
    {
        COLOR_RED,
        COLOR_GREEN,
        COLOR_BLUE,
    } color;
    struct Position p;

    struct
    {
        float width, height;
    } size;

} myRect = {COLOR_GREEN, 30.0f, 20.0f, 100.0f, 200.0f};

void foo1();
void foo2();
void foo3();
void foo4();
void foo5();
void foo6();

int main(int argc, char const *argv[])
{
    //foo1();
    //foo2();
    //foo3();
    //foo4();
    //foo5();
    foo6();
    return 0;
}

//Enum
void foo1(void)
{
    enum LIGHT m_light_enum = RED;
    printf("Globle Enum is %d , Local Enum is %d", g_light_enum, m_light_enum);
}

//Struct
void foo2()
{
    printf("Hello World \n");
    struct Person _person;
    _person.age = 1988;
    struct Room r;
    r.l = RED;
    r.p = &_person;
    r.size = 50;
    printf("%d\n", (*r.p).age);
    printf("enum -> %d  Person's Age-> %d  Size->%d   ", r.l, r.p->age, r.size);
}

//结构体套 匿名枚举 匿名结构体 和初始化器
void foo3()
{
    printf("COLOR->%d   x->%f   y->%f  Width->%f  Height->%f ", myRect.color, myRect.p.x, myRect.p.y,
           myRect.size.width, myRect.size.height);
}

//结构体复合字面量
void foo4()
{
    struct S
    {
        int_fast32_t x, y;
    } s;

    s = (struct S){20, 30}; //C99标准

    printf("x-> %d  y-> %d", s.x, s.y);
}

//union
void foo5()
{
    union MyUnion {
        int32_t a;
        struct
        {
            int16_t b;
            int8_t c;
        } s;
        float f;
    } un = {.s.b = 0x0201, .s.c = 0x03};

    printf("MyUnion . a is  %d \n Struct s.b is %d \ns.c is %d ", un.a, un.s.b, un.s.c);

    union MyUnion un2;
    un2 = (union MyUnion){.a = 12};
    printf("\n un2 .a is %d", un2.a);
}

//位域
void foo6()
{
    //必须是整数类型（包括 bool,enum）
    //<类型> <标识符> :<位宽表达式>
    struct BitField
    {
        int32_t a : 5; //由5个bit 组成 范围【-16，15】
        uint32_t b : 6;
        int32_t c : 7;
    };

    struct BitField b1;
    b1.a = 17; //-15 溢出了2位
    printf("\n b1 's a is %d ", b1.a);
    struct BitField b2;
    b2.a = 3;
    printf("\n b2 's a is %d ", b2.a);
}