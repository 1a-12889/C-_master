/*
指针
结构体
*/

#include <iostream>
#include <windows.h>  
#include <string>

// void BubbleSort(int *arr,int len);
// void printArray(int *arr,int len);

using namespace std;

// void swap(int *p1,int *p2){
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     cout << "swap a=" << *p1 << endl;
//     cout << "swap b=" << *p2 << endl;
// }

// void BubbleSort(int *arr,int len){
//     for(int i = 0;i<len;i++){
//         for(int j = 0;j<len-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// void printArray(int *arr,int len){
//     for(int i = 0;i<len;i++){
//         cout << arr[i] << endl;
//     }
// }

struct Student {
    string name;
    int age;
    int score;
};

struct Teacher {
    int id;
    string name;
    int age;
    struct Student stu;
};

//值传递
// void printStudent1(struct Student s){
//     cout << "姓名 " << s.name << " 年龄 " << s.age << " 战力值 " << s.score << endl;
// }

// void printStudent2(struct Student *p){
//     p->name = "叶玄";
//     p->score = 90;
//     cout << "姓名：" << p->name << "年龄：" << p->age << "战力值：" << p->score << endl;
// }

void printStudent3(const Student *p){
    //值传递好处是形参的操作不会改变实参，但会拷贝数据副本，数据量大时候占内存
    //地址传递指针只占4个字节，但操作会改变实参，所以需要const修饰
    //p->age = 100 错误
    cout << "姓名 " << p->name << endl;
}
int main(){

    // 设置控制台输出编码为 UTF-8,防止乱码
    SetConsoleOutputCP(65001);

    /*
    1.指针的定义
    */
    // int a = 10;
    // //指针的定义，数据类型 *指针名字
    // int *p;
    
    // p = &a;
    // cout << "a的地址是" << p << endl;
    // cout << "a的地址是" << a << endl;

    // //解引用，修改指针指向的数据
    // *p = 100;
    // cout << "a的值是" << *p << endl;

    /*
    2.指针所占内存空间
    */
    // int *p;
    // int a = 10;
    // p = &a;

    // int a =10;
    // int *p = &a;
    // //在64位里面指针所占内存都是8位，32位里面都是4位
    // cout << "sizeof(int *) = " << sizeof(int *) << endl;
    // cout << "sizeof(p) = " << sizeof(p) << endl;
    // cout << "sizeof(float *) = " << sizeof(float *) << endl;
    // cout << "sizeof(char *) = " <<  sizeof(char *) << endl;

    /*
    3.空指针和野指针
    */

    //空指针，指向编号为0的内存，不可以访问，因为编号0-255是系统占用
    // int *p = NULL;
    // //*p = 100;错误
    // //野指针，指向了非法的内存空间,也不可以访问
    // int *p = (int *)0x1100;
    
    /*
    4.const修饰指针
    */
    // int a = 10;
    // int b = 20;
    //常量指针,指向可以改，指针指向的值不可以改
    // const int *p = &a;
    // p = &b;

    // //指针常量,指针的指向不可以改，指针的值可以改
    // int *const p = &a;
    // *p = 20;

    // //const修饰 常量和指针，都不可以改
    // const int *const p = &a;


    /*
    5.指针和数组，让指针可以访问数组
    */
    // int arr[] = {1,2,3,4};
    // int *p = arr;
    // //利用指针遍历数组
    // for(int i = 0;i<4;i++){
    //     cout << *p << endl;
    //     p++;
    // }

    /*
    6.指针和函数
    */

    //地址传递
    // int a = 20;
    // int b = 10;

    // cout << "a=" << a << endl;
    // cout << "b=" << b << endl;

    // swap(&a,&b);

    /*
    7.指针，数组和函数，实现冒泡排序
    */

    //1.定义数组
    // int arr[5] = {1,2,5,6,2};
    // //数组长度
    // int len = sizeof(arr)/sizeof(arr[0]);
    // //冒泡排序函数
    // BubbleSort(arr,len);
    // //打印排序后的数组
    // printArray(arr,len);

    /*
    1.结构体的定义
    */

    // struct Student s1;
    // s1.age = 10;
    // s1.name = "浩林";
    // s1.score = 70;
    
    // cout << "姓名 " << s1.name << " 年龄 " << s1.age << " 分数 " << s1.score << endl;
    
    // struct Student s2 = {"昊天",19,80};
   
    /*
    2.结构体数组
    */

    // struct Student s[3] = {
    //     {"六道魔君",2000,6000},
    //     {"无极圣尊",2500,8000},
    //     {"时间道祖",1500,100000}
    // };

    // for(int i = 0;i<3;i++){
    //     cout << "道号 " << s[i].name << endl;
    //     cout << "年龄 " << s[i].age << endl;
    //     cout << "战力值 " << s[i].score << endl;

    // }

    /*
    3.结构体指针
    */

    // struct Student s = {"秋山澪",19,99};
    // struct Student *p = &s;//数据类型和结构体变量保持一致
    // cout << "姓名 " << p->name << " 年龄 " << p->age << " 分数 " << p->score << endl;

    /*
    4.嵌套结构体
    */
    // Teacher t;
    // t.id = 20250904;
    // t.name = "荒天帝";
    // t.age = 20;
    // t.stu.name = "竹叶青";
    // t.stu.age = 19;
    // t.stu.score = 90;
    //打印太多了自己写

    /*
    5.结构体做函数参数
    */

    // struct Student s;
    // s.name = "荒天帝";
    // s.age = 19;
    // s.score = 88;
    // //值传递
    // printStudent1(s);
    // //地址传递
    // printStudent2(&s);

    /*
    6.结构体中const的使用
    */

    // struct Student s = {"我叫唐三",19,88};
    // printStudent3(&s);





    system("pause");
    return 0;
}