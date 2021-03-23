#include"Head.h"
//**********************
//  1.可以在赋值的同时进行求和
//  2.可以在赋值的同时进行求最大/小值
//  3.进行每个位置值的判断
//  4.如果输入格式是一行，则在输入同时输出能够做到最后一起输出想要的样子
//**********************


//// 规律1的实例
//// 计算平均成绩
//int main()
//{
//    int scores[5] = { 0 };
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &scores[i]);
//        sum += scores[i];
//    }
//    printf("%.1f", sum / 5.0);
//    return 0;
//}

//// 规律2的实例
////最高身高----数组赋值同时求最大值
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int s = 0;
//    int x = 0;
//    int y = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > s) {
//                s = arr[i][j];
//                x = i;
//                y = j;
//            }
//        }
//    }
//    printf("%d %d", x + 1, y + 1);
//    return 0;
//}

////规律3的实例
////上个三角矩阵判定
//int main() //------进行每个位置值的判断
//{
//    // 输入数据
//    int n = 0;// 忘记赋值了
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    //int flag=0;
//    for (i = 0; i < n; i++)// --for(i=0;i<n;j++)为什么写的是j
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (i > j && arr[i][j] != 0)
//                //if(i>=j&&arr[i][j]!=0)斜对角线不包括
//                     //flag=1;
//                break; // break是优化算法的，
//        // 用一个flag就行停止外部循环也行，j!=n也可以
//        }
//        if (j < n)
//            break;
//    }
//    // 联想到打印图形中的对角线规律
//    if (i < n)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}

//// 规律4的实例
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    // 分行输入就不能达到矩阵的效果--1 2 3 4 5 
//                                     6 7 8 9 10
//    // 不分行可以---1 2 3 4 5 6 7 8 9 10
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//}