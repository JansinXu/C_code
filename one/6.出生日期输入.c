#include <stdio.h>

//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//数据范围：年份满足 1990 \le y \le 2015 \1990≤y≤2015 
//月份满足 1 \le m \le 12 \1≤m≤12  ，日满足 1 \le d \le 30 \1≤d≤30

//优解
int main()
{
    int a, b, c;
    scanf("%4d%2d%2d", &a, &b, &c);
    printf("year=%d\nmonth=%02d\ndate=%02d\n", a, b, c);
}

//
//#include <stdio.h>
//int main(){
//    int brithday;
//    scanf("%d", &brithday);
//    int year = brithday / 10000;
//    printf("year=%d\n", year);
//    int month = brithday % 10000 / 100;
//    if (month >= 10) {
//        printf("month=%d\n", month);
//    }
//    else {
//        printf("month=0%d\n", month);
//    }
//    int date = brithday % 100;
//    if (date >= 10) {
//        printf("date=%d\n", date);
//    }
//    else {
//        printf("date=0%d\n", date);
//    }
//    return 0;
//}
