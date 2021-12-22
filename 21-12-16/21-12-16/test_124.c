#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
    int i, j, x;
    int n = 0;
    // a是间隔填充物，这里用空白填充；b是雪花，这里用*表示；c是圣诞树的填充，用'0'表示 
    char a = ' ', b = '*', c = '0';
    // 第一部分，输出树叶
    for (x = 0; x < 3; x++) {
    	// 想让圣诞树变高可以将4这个值调高 
        for (i = 0; i < x + 4; i++) {
            for (j = 0; j < 80; j++) {
                if ((j <= 25 + n) && (j >= 25 - n)) {
                	printf("%c", c);
				} else if ((j % (n + 6) == n) && ( (j > 25 + n) || (j < 25 - n))) {
					printf("%c", b);
				} else {
					printf("%c", a);
				}  
            }
            printf("\n");
            n = n + 2;
        }
        n = n - 2 * (x + 2);
    }
    // 第二部分，输出树干，高度为5 
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 80; j++) {
            if (j >= 22 && j <= 28) {
            	printf("%c", c);
			} else if ((j % (n + 6) == n) && ((j > 25 + n) || (j < 25 - n))) {
            	printf("%c", b);
			} else {
            	printf("%c", a);
			}   
        }
        n = n + 2;
        printf("\n");
    }
    // 第三部分，输出地面，高度为3 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 80; j++) {
            if (j % 2 == 0) {
            	printf("%c", b);
			} else {
            	printf("%c", a);
			}
            	
        }
        printf("\n");
    }
    return 0;
}



//int main()
//{
//    int i,j,k;
//    for(i=1;i<=20;i++)
//    {
//        for(j=20;j>i;j--)
//        {
//            printf(" ");
//        }
//        for(k=0;k<2*i-1;k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//	return 0;
//}






//int main()
//{
//	int i,j;
//	for(i=1; i<=9; i++)
//	{
// 	  for(j=1; j<=i; j++)
//	  {
//		printf("%d*%d=%-2d ",j,i,i*j);
//	  }
//	  printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a,b,sum = 0;
//	printf("输入一个正整数：");
//	scanf("%d",&a);
//	while(a > 0)
//	{
//	 b = a % 10;
//	 sum = sum + b;
//	 a = a / 10;
//	}
//	printf("每个位数之和为：%d\n",sum);
//	return 0;
//}

//计算个人所得税
//int main()
//{
//	int mony = 0;
//	printf("请输入您的工资：");
//	scanf("%d",&mony);
//	if(mony <= 3000)
//	{
//		printf("您的个人所得税为：%d\n",mony);
//	}
//	if(mony >= 3000 && mony <=13000)
//	{
//		mony = mony * 0.10;
//		printf("您的个人所得税为：%d\n",mony);
//	}
//	if(mony >= 13001 && mony <=33000)
//	{
//		mony = mony * 0.15;
//		printf("您的个人所得税为：%d\n",mony);
//	}
//	if(mony > 33000)
//	{
//		mony = mony * 0.20;
//		printf("您的个人所得税为：%d\n",mony);
//	}
//
//	return 0;
//}

//输入三个数a,b,c将其按从小到大排列
//int main()
//{
//	int a,b,c;
//	printf("请输入三个整数：");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>b)
//	{
//	 int tmp = 0;
//	 tmp = b;
//	 b = a;
//	 a = tmp;
//	}
//	if(b>c)
//	{
//	 int tmp = 0;
//	 tmp = c;
//	 c = b;
//	 b = tmp;
//	}
//	printf("从大到小排序后：%d %d %d\n",a,b,c);
//	return 0;
//}


//6.假设今天是星期六，编写程序计算N天之后为星期几。
//int main()
//{
//	int day = 6;
//	int sum = 0;
//	printf("今天是星期六：\n");
//	printf("请输入天数:=》");
//	scanf("%d",&sum);
//	sum = day+sum;
//	switch( sum % 7 )	//思路取余
//	{
//	case 0:
//		printf("今天是星期天\n");
//		break;
//	case 1:
//		printf("今天是星期一\n");
//		break;
//	case 2:
//		printf("今天是星期二\n");
//		break;
//	case 3:
//		printf("今天是星期三\n");
//		break;
//	case 4:
//		printf("今天是星期四\n");
//		break;
//	case 5:
//		printf("今天是星期五\n");
//		break;
//	case 6:
//		printf("今天是星期六\n");
//		break;
//	}
//	return 0;
//}