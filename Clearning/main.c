//
//  main.c
//  Clearning
//
//  Created by 关春 on 2019/12/25.
//  Copyright © 2019 关春. All rights reserved.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#include <string.h>//include的作用是把对应的头文件中的所有函数原型插入到include这一行；（不是引入库）
//在使用和定义函数的地方都应该include这个头文件
//include<>是在大路径中搜索头文件，include“”是在本项目内搜索（即自定义头文件）
//全局变量可在多个.c中共享 （在.h文件总加入“extern 类型 变量名；”）；在全局变量前加static可使其成为只能在所在的d编译单元内被使用的全局变量；在函数前加tatic也使其成为单元内可用的函数；
//注意避免重复include同样的函数原型：
//#ifndef __LIST_HEAD__
//#define __LIST_HEAD__
//#include "xxx.h"
//代码体
//#endif
//或者用#pragma once

//#是编译预处理的符号
//#define PI 3.14159 //定义一个宏（符号（PI）和他的值（3.14159））
//功能上相当于对代码中（不包含“”中的string，但可以直接定义一个值为string的宏）的符号都替换为值
//#define cube(x)((x)*(x)*(x))//带有值的宏；一切都要有括号；不要加多余的分号；

//int main(int argc, const char * argv[]) {
//    int price = 0;
//    int amount = 100;
//    printf("Please input price\n");
//    scanf("%d", &price);
//    printf("Please input amount\n");
//    scanf("%d", &amount);
//    printf("Your change is: %d\n", amount-price);
//    return 0;
    
//    float foot;
//    float inch;
//
//    printf("foot&inch:");
//    scanf("%f %f",&foot, &inch);
//    printf("length =  %fm.", (foot + inch/12)*0.3048);
//
//    double foot;
//    double inch;
//
//    printf("foot&inch:");
//    scanf("%lf %lf",&foot, &inch);
//    printf("length =  %fm.", (foot + inch/12)*0.3048);
//
//    int a = 10;
//    printf("%d\n",a++);
//    printf("%d\n",++a);
//
//    printf("%d\n", 5==4);
//    printf("%d\n", 5>=4);
    
//    int hour1, min1;
//    int hour2, min2;
//
//    printf("time1:\n");
//    scanf("%d %d", &hour1, &min1);
//    printf("time2:\n");
//    scanf("%d %d", &hour2, &min2);
//
//    int ih = hour2 - hour1;
//    int im = min2 - min1;
//
//    if (ih < 0) {
//        printf("Error!");
//    }else if (im < 0){
//        ih = ih - 1;
//        im = im + 60;
//    }
//    printf("%d:%d",ih, im);
    
//    int type;
//    printf("Input:");
//    scanf("%d", &type);
//
//    switch (type) {
//        case 1:
//            printf("Hello1");
//        case 2:
//            printf("Hello2");
//            break;
//        case 3:
//            printf("Hello3");
//        case 4:
//            printf("Hello4");
//            break;
//
//        default:
//            printf("HelloD");
//            break;
//    }
    
//    int numberBig;
//    int n = 0;
//    printf("input a number:");
//    scanf("%d", &numberBig);
//
//    do {
//        n++;
//        numberBig /= 10;
//    } while ((numberBig > 0));
//
//    printf("%d\n", n);
    
//    srand(time(0));
//    int aaa = rand();
//
//    printf("%d", aaa%100);

//    int inputN = 1;
//    printf("Input your N");
//    scanf("%d",&inputN);
//
//    int fact = inputN;
//
//    for (int n = inputN-1; n>=2; n--) {
//        fact *= n;
//    }
//    printf("%d",fact);

//    for (<#initialization#>; <#condition#>; <#increment#>) {
//        for (<#initialization#>; <#condition#>; <#increment#>) {
//            for (<#initialization#>; <#condition#>; <#increment#>) {
//                if (<#condition#>) {
//                    goto out;
//                }
//            }
//        }
//    }
//out:
//    return 0;
    
//    int a,b;
//    int temp;
//    printf("input A and B:");
//    scanf("%d %d",&a, &b);
//    if (a*b == 0) {
//        printf("%d is gcd.\n", 0);
//    }else{
//        do {
//            temp = a % b;
//            a = b;
//            b = temp;
//        } while (a*b != 0);
//    }
//    printf("%d is gcd.\n", a);
//    return 0;
    
//    printf("%ld\n",sizeof(int));
//    printf("%ld\n",sizeof(char));
//    printf("%ld\n",sizeof(double));
//    printf("%ld\n",sizeof(long));

//    int count = 112;
//    int count = 12;
//    count = (count>20)?count-10:count+10;
//    printf("%d\n",count);

//    int i;
//    i = (3+4,5+6);
//    printf("%d\n",i);

//    int number[100];
//    int i=1;
//    printf("input");
//    scanf("%d",&number[i]);
//    printf("%d",number[i]);

//    int x;
//    double sum = 0;
//    int cnt = 0;
//    int number[100];
//    printf("input");
//    scanf("%d", &x);
//    while (x != -1) {
//        number[cnt] = x;
//        printf("%d\t",cnt);
//        for (int i=0; i<cnt; i++) {
//            printf("%d\t",number[i]);
//        }
//        printf("\n");
//
//        sum += x;
//        cnt ++;
//        printf("input");
//        scanf("%d", &x);
//    }
//    if (cnt > 0) {
//        printf("%f\n", sum/cnt);
//        for (int i = 0; i<cnt; i++) {
//            printf("%d\n", number[i]);
//
//        }
//    }
    
//    const int number = 10;
//    int x;
//    int count[number];
//    int i;
//
//    for (i = 0; i<number; i++) {
//        count[i] = 0;
//        printf("initial[%d]: %d\n", i, count[i]);
//    }
//
//    do{
//         printf("number =:");
//         scanf("%d",&x);
//        if (x >= 0 && x <= 9) {
//            count[x]++;
//        }
//     }while (x != -1);
//
//    for (i = 0; i < number; i++) {
//        printf("i=%d,then count[i]=%d\n",i, count[i]);
//    }

//    int a[] = {1,2,3,4,5,3,2,4,1,3,6};
//    for (int i = 0 ; i < sizeof(a)/sizeof(a[0]); i++) {
//        printf("%d\t",a[i]);
//    }
//    printf("\n");
//
//    int b[10] = {0};
//    for (int i = 0 ; i < sizeof(b)/sizeof(b[0]); i++) {
//        printf("%d\t",b[i]);
//    }
//    printf("\n");
//
//    int c[10] = {[1]=2,4,6,[7]=11};
//    for (int i = 0 ; i < sizeof(c)/sizeof(c[0]); i++) {
//        printf("%d\t",c[i]);
//    }
//    printf("\n");
//
//    int d[] = {[1]=2,4,6,[7]=11};
//    for (int i = 0 ; i < sizeof(d)/sizeof(d[0]); i++) {
//        printf("%d\t",d[i]);
//    }
//    printf("\n");

//}
//
//int search(int key, int a[], int length){
//    int ret = -1;
//    for (int i = 0; i < length; i++) {
//        if (a[i]==key) {
//            ret = i;
//            break;
//        }
//    }
//    return ret;
//}
//
//int main(void){
//    int a[] = {1,2,3,4,5,6,7,8,9,0,9,8,7};
//    int x;
//    int loc;
//
//    printf("pls input a number:");
//    scanf("%d",&x);
//    loc = search(x, a, sizeof(a)/sizeof(a[0]));
//    if (loc != -1) {
//        printf("%d is at position %d.", x, loc);
//    }else{
//        printf("%d is not exit.", x);
//    }
//    return 0;
//}

//int isPrime(int x, int Primes[], int sizeOfPrimes){
//    int ret = 1;
//    for (int i=0; i<sizeOfPrimes; i++){
//        if (x % Primes[i] == 0){
//            ret = 0;
//            break;
//        }
//    }
//    return ret;
//}
//
//int main(void){
//
//    const int number = 100;
//    int prime[number] = {2};
//    int count = 1;
//    int i = 3;
//
//    while (count < number) {
//        if (isPrime(i ,prime, count)) {
//            prime[count++] = i;
//        }
//        i++;
//    }
//    for (int i=0; i<number; i++){
//        printf("%d", prime[i]);
//        if( (i+1)%5 ) printf("\t");
//        else printf("\n");
//    }
//    return 0;
//}

//int main(void){
//    int a[2][4];//2 rows, 4 column;
//
//    for (int i=0; i<2; i++) {
//        for (int j=0; j<4; j++) {
//            a[i][j] = 0;
//        }
//    }
//
//    for (int i=0; i<2; i++) {
//        for (int j=0; j<4; j++) {
//            printf("%d\t",a[i][j]);
//        }
//        printf("\n");
//    }
//
//}


//int main(void){
//    int i = 0;
//    printf("%x\n",&i);
//    printf("0x%x\n",&i);
//    printf("%p\n",&i);
//
//    int p = (int)&i;
//    printf("%x\n",p);
//
//    printf("%lu\n",sizeof(int));
//    printf("%lu\n",sizeof(&i));
//    printf("%lu\n",sizeof(p));
//    /* &取出的是一个变量的地址；对于没有地址的东西是不能使用&的；
//     获得变量的地址（并输出实际变量）的操作，操作数必须是变量，(“%x”,&i);
//     输出地址本身使用的是%p；
//     该地址的数据类型和int未必是相等的，取决于编译器*/
//
//    printf("%p\n",&i);
//    printf("%p\n",&p);//目前i和p是紧挨着放在内存的堆栈中的（地址相差4个字节）
//
//    int a[10];
//    printf("\n");
//    printf("%p\n",&a);
//    printf("%p\n",a);//数组名称等同于数组的第一个元素的地址；
//    printf("%p\n",&a[0]);
//    printf("%p\n",&a[1]);
//
//    int j;
//    int* pointer =&j;
//    printf("\n");
//    printf("%p\n",pointer);
//    printf("%p\n",&pointer);
//
//    /* int* p,q; 和 int *p,q; 的作用是一致的，即p是一个指针，q是一个int；
//     int *p,*q 的意思是p和q都是指针；*/
//
//    /*  普通i变量的值是实际的值；
//        指针变量的值是（被指向的具有实际值的普通变量）的地址；
//     */
//}

//void f(int *p){
//    printf("%p\n",p);
//    printf("%d\n",*p);//*p作为一个整体可以被看作“其指向的地址中的值”；
//    *p = *p+1;//发生了值的改变（实际上是在对i的值产生改变）
//};
//
//void g(int k){
//    printf("%d\n",k);
//}
//
//int main(void){
//    int v = 6;
//    printf("%d\n",v);
//    printf("%p\n",&v);
//    f(&v);
//    g(v);
//    printf("%d\n",v);
//    /* *&yptr -> *(&yptr) -> *(yptr的地址) -> 得到yptr的地址上的变量 -> yptr; */
//}

//void swap(int *pa, int *pb);
//
//int main(void){
//    int a=5;
//    int b=6;
//
//    swap(&a, &b);
//    printf("%d %d", a, b);
//}
//
//void swap(int *pa, int *pb){
//    int t = *pa;
//    *pa = *pb;
//    *pb = t;
//}

//int divide(int a, int b, int *result);
//
//int main(void){
//    int a=10;
//    int b=6;
//    int c;
//
//    if(divide(a, b, &c)){
//        printf("res = %d", c);
//    }
//    return 0;
//}
//
//int divide(int a, int b, int *result){
//    int ret = 1;
//    if (b == 0) {ret = 0;}
//    else {*result =a/b;}
//    return ret;
//
//}

//函数参数表中的数组是指针，指向该数组的第一个变量的地址 （int a[]）==（int *a）;

/*以下参数表达是等价的：
    int sum(int *ar, int n);
    int sum(int *, int);
    int sum(int ar[], int n);
    int sum(int [], int); */

//数组变量本身是特殊的指针 int a[10]; int *p=a 无需用&取指针；
//但d每一个单元所表达的是变量 变量需要用&取地址；
//数组变量是const的指针 所以不能对数组变量赋值
//int b[] 等同于 int * const b；

//指针本身如果是const： 说明一旦得到了某个变量的地址 就不能再指向其他变量；
//指针的“指向”是const： 表示不能通过该指针修改这个变量的值；（但可以直接修改该变量）（const的含义是该“修改链条被锁定”）
//变量是const：该变量无法被修改；


//int i；
//const int* p1 = &i;//等于第二种
//int const* p2 = &i;//通过指针不可修改
//
//int *const p3 = &i;//指针不可修改

// *在const之前，表示他所指的东西不可修改，即通过该指针不可修改指向变量的值；
// *在const之后，表示指针本身不可修改

//const int a[] = {1,2,3}
//等于该数组内的每个变量都是const int

//指针+1 挪到下一个位置（单位为sizeof）
//-1 上一个（往前挪）
//++ --同理
//指针相加 无意义（指向一个不知道是哪里的地方）
//相减：地址差/sizeof， 等于两个指针之间可放几个单位

//*p++: 取出p所指的数据，然后把p移到下一个位置
//如果指针不是指向一片连续分配的空间 这种运算是没有意义的

//int main(void){
//    char ac[] = {0,5,2,3,4,5,6,7,8,9,-1};
//    char *p = ac;
//    char *p1 = &ac[5];
//    printf("p       = %p\n",p);
//    printf("p+1     = %p\n",p+1);
//    printf("*(p+1)  = %d\n",*(p+1));
//    //*(p+n) == ac[n]
//    printf("p1-p    = %ld\n",p1-p);
//
//    int ai[] = {0,4,2,3,4,5,6,7,8,9,};
//    int *q = ai;
//    int *q1 = &ai[3];
//    printf("q       = %p\n",q);
//    printf("q+1     = %p\n",q+1);
//    printf("*(q+1)  = %d\n",*(q+1));
//    printf("q1-1    = %ld\n",q1-q);
//
//    while (*p != -1) {
//        printf("%d\t",*p++);
//    }
//}

//指针可以比较 地址是线性排列的 指针的大小表示位置的前后关系
//指针不应具有0值 0地址可用来表示该指针无效 NULL是0地址的符号
//指针的类型即其指向对象的类型 不同类型的指针不可直接赋值 指针本身的大小都是一样的（即一个地址格式）
//不同指针类型可以做强制类型转换: int *p = &i; void *q =(void) p;

//int main(void){
//    const int n = 30;
//    int *a = (int*)malloc(n*sizeof(int));//a作用上等于是一个数组
//    free(a);//释放空间
//}

//int main(void){
//    void *p;
//    int cnt = 0;
//    while ((p=malloc(100*1024*1024))) {
//        cnt++;
//    }
//    printf("%d00MB space", cnt);
//    free(p);
//}

/////////
//char word[] = {'a','d','g','e','?','\0'}//'\0'作为结尾的一串字符是字符串

//char *str = "Hello"; str是一个指针，指向一个字符串常量，其本身是const的 试图对str所指的字符串进行写入会导致错误；两个不同的指针如果指向同一个字符串，说明其实际上指向同一个位于“只读代码段”的地址；动态分配空间；str被用于赋值时只是让新的指针指向同一个字符串

//char word[] = "Hello";字符串word是可以修改的；该字符串是将只读代码段的hello字符串拷贝过来的结果；可作为本地变量，空间自动被回收

//char line[10] = "Hello";//当前占6个位置 还有一个0作为结尾。

//int main(void){
//    char word[8];
//    char word2[8];
//    printf("inputString");
//    scanf("%7s\t",word);//读到空格/tab/回车为止；最多读到第七个;剩余部分会给下一个scanf
//    scanf("%7s\n",word2);
//    printf("%s\t",word);
//    printf("%s\n",word2);
    
//    char buffer[100] = "";
//    if(buffer[0] == '\0'){
//       printf("Yes");
//    }

//    char buffer[] = ""//这个字符串的长度是1，且被‘/0’占据，z实际空间是0；
//char *a[];和char a[][];的含义不同；
//}


//enum COLOR {RED, YELLOW, GREEN}；//枚举：定义了一组const量；

//typedef struct {
//    int month;
//    int day;
//    int year;
//} date;
//
//int main(void){
//
//    date myday;
//    date *p = &myday;
//    (*p).month = 12;
//    p->month = 12;//->表示指针所指的结构变量中的成员
//    date dates[] = {{11,2,33},{12,3,44},{12,3,44}};
//}

//typedef union {
//    int i;
//    char ch[sizeof(int)];
//}CHI;
//
//int main(int argc, char const *argv[]){
//    CHI chi;
//    int i;
//    chi.i = 1234;
//    for (i = 0; i<sizeof(int); i++) {
//        printf("%02hhX\t", chi.ch[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

//static//静态本地变量，调用后的值保留，再调用时不会被重新初始化；静态本地变量实际上是特殊的全局变量，但作用域是本地的（生存期是全局的）；

//int* f(void);
//void g(void);
//
//int main(int argc, char const *argv[]){
//    int *p = f();
//    printf("*p = %d\n",*p);
//    g();
//    printf("*p = %d\n",*p);
//
//    return 0;
//}
//
//int* f(void){
//    int i = 12;
//    return &i;
//}
//
//void g(void){
//    int k = 24;
//    printf(" k = %d\n",k);
//}
/*输出：
*p = 12
 k = 24
*p = 24 */
//返回本地变量的地址是不安全的；
//最好的方法是返回传入的指针；

