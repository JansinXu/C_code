#include <stdio.h>

//����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������
//���ݷ�Χ��������� 1990 \le y \le 2015 \1990��y��2015 
//�·����� 1 \le m \le 12 \1��m��12  �������� 1 \le d \le 30 \1��d��30

//�Ž�
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
