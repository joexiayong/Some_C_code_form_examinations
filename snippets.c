#include <stdio.h>
#include <string.h>
#define PI 3.14);

void p25_50()
{
    char *a[] = {"mondy", "tuesday", "wendesday"}, *p;
    p = a[1];

    printf("%c,%s\n", *(p + 1), a[0]);
    //u,mondy
}
void p25_49()
{
    void fun(char *a, char *b)
    {
        while (*a == '*')
            a++;
        while (*b = *a)
        {
            b++;
            a++;
        }
    }
    char *s = "*****a*b*****", t[80];
    fun(s, t);
    puts(t);
}
void p25_48()
{ /*
字符串指针相减
*/
    int fun(char *s)
    {
        char *p = s;
        while (*p != 0)
            p++;

        return p - s;
    }
    printf("%d\n", fun("goodbey!"));
}
void useString()
{
    char *s, *b;
    s = "abc";
    b = "abcdefg";
    printf("%d", b - s);
}
void p23_36()
{
    void fun(char *s)
    {
        while (*s)
        {
            if (*s % 2)
                printf("%c", *s);
            s++;
        }
    }
    char a[] = "BYTE";
    fun(a);
}
void p20_48()
{
    int fun(char s[])
    {
        char *p = s;
        while (*p != 0)
            p++;
        return (p - s);
    }
    printf("%d", fun("0ABCDEFGHIJK"));
}
void someWay()
{
        printf("%f",PI
}
void p20_47()
{
    //
    char a[5] = {"ABCDE"};
    char b[5] = {'A', 'B', 'C', 'D', 'E'};
    char *c;
    c = "ABCDE";
    char *d;
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%s\n", d);
    char s[10] = "Chinese\0\0";
    printf("%d\n", strlen(s));
}
void p15_24()
{
    int k = 0;
    char *flag = "Fales";
    if (k = 1)
    {
        flag = "True";
    }
    int kEqualeTo1 = (k = 1);
    printf("kEqualeTo1 = %d\n", kEqualeTo1);
    printf("k=%d\n", k);
    printf("flag = %s\n", flag);
    // kEqualeTo1 = 1
    // k=1
    // flag = True
}
// void structSnippets{
//     typedef struct MyStruct
//     {

//     };
// }

void p33_34()
{
    int fun()
    {
        static int m = 1;
        return m *= 3;
    }
    int i = 2, s = 1;
    while (i--)
    {
        s = fun();
    }
    printf("%d\n", s);
    // 9
}
void cmp_plus()
{
    int i, j, k, l;
    for (i = 0; i < 10; i++)
        printf("%d\n", i);

    for (j = 0; j < 10; ++j)
        printf("%d\n", j);
    k = 3;
    while (k--)
    {
        printf("while k-- = %d\n", k);
        // while k-- = 2
        // while k-- = 1
        // while k-- = 0
    }
    k = 3;
    while (--k)
    {
        printf("while --k = %d\n", k);
        // while --k = 2
        // while --k = 1
    }
    
}

void p32_26(){
    int a[2][3],*p;
    p=a;
    p=a[1][2];
    p=&a[1][2];
    p=&a;
    // a为二维数组，需要使用行指针，
    // int (*p)[3] a[2][3]
    // p=a
// 159:6: warning: assignment to 'int *' from incompatible pointer type 'int (*)[3]' [-Wincompatible-pointer-types]
//      p=a;
//       ^
// 160:6: warning: assignment to 'int *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
//      p=a[1][2];
//       ^
// 162:6: warning: assignment to 'int *' from incompatible pointer type 'int (*)[2][3]' [-Wincompatible-pointer-types]
//      p=&a;
}

void p30_13(){
    /*
    原题目要求选出不合法的c语言常量
    正确答案为 '\083' ，八进制中不能出现八
    但是我选的是 '\' 这在程序中无论如何不能编译通过。
    
    */
    const char a = '\n';
    const char b = '\\';
    const char c = '\073';
    const char d = '\xcc';
}
int main()
{

    //p25_48();
    //p23_36();
    //p20_48();
    //p20_47();
    // p15_24();
    // p33_34();
    //cmp_plus();
    p30_13();
    printf("asd");
    return 0;
}
