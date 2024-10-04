// #include<stdio.h>
// void swap(int* x,int* y)
// {
//     int temp;
//     temp=*x; //temp=2    x ke ander jo bhi adress hai wha jao or uske value utha ke lao = *x
//     *x=*y; //a=9
//     *y=temp; //*y=2 -> b=2
//     return;
// }
// int main()
// {
//     int a=2;
//     int b=9;
//     swap(&a,&b);
//     printf("%d\n",a);
//     printf("%d",b);
//     return 0;
// }

//masti with pointers very very very important


#include<stdio.h>
int main()
{
    int a=25;
    int *x = &a;  //int* = int ka adress store krta 
    //very imp -> *x=7; // a is changed
    int** y= &x; // or int* y= &x //int** = int* ka adress store krta hai
    int*** z=&y; 
    printf("%p\n",&x); //%p se adress print hota hai
    printf("%p\n",y);
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d",***z);
    return 0;
}
