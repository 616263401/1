#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
    int i, j, x;
    int n = 0;
    // a�Ǽ�����������ÿհ���䣻b��ѩ����������*��ʾ��c��ʥ��������䣬��'0'��ʾ 
    char a = ' ', b = '*', c = '0';
    // ��һ���֣������Ҷ
    for (x = 0; x < 3; x++) {
    	// ����ʥ������߿��Խ�4���ֵ���� 
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
    // �ڶ����֣�������ɣ��߶�Ϊ5 
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
    // �������֣�������棬�߶�Ϊ3 
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
//	printf("����һ����������");
//	scanf("%d",&a);
//	while(a > 0)
//	{
//	 b = a % 10;
//	 sum = sum + b;
//	 a = a / 10;
//	}
//	printf("ÿ��λ��֮��Ϊ��%d\n",sum);
//	return 0;
//}

//�����������˰
//int main()
//{
//	int mony = 0;
//	printf("���������Ĺ��ʣ�");
//	scanf("%d",&mony);
//	if(mony <= 3000)
//	{
//		printf("���ĸ�������˰Ϊ��%d\n",mony);
//	}
//	if(mony >= 3000 && mony <=13000)
//	{
//		mony = mony * 0.10;
//		printf("���ĸ�������˰Ϊ��%d\n",mony);
//	}
//	if(mony >= 13001 && mony <=33000)
//	{
//		mony = mony * 0.15;
//		printf("���ĸ�������˰Ϊ��%d\n",mony);
//	}
//	if(mony > 33000)
//	{
//		mony = mony * 0.20;
//		printf("���ĸ�������˰Ϊ��%d\n",mony);
//	}
//
//	return 0;
//}

//����������a,b,c���䰴��С��������
//int main()
//{
//	int a,b,c;
//	printf("����������������");
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
//	printf("�Ӵ�С�����%d %d %d\n",a,b,c);
//	return 0;
//}


//6.�������������������д�������N��֮��Ϊ���ڼ���
//int main()
//{
//	int day = 6;
//	int sum = 0;
//	printf("��������������\n");
//	printf("����������:=��");
//	scanf("%d",&sum);
//	sum = day+sum;
//	switch( sum % 7 )	//˼·ȡ��
//	{
//	case 0:
//		printf("������������\n");
//		break;
//	case 1:
//		printf("����������һ\n");
//		break;
//	case 2:
//		printf("���������ڶ�\n");
//		break;
//	case 3:
//		printf("������������\n");
//		break;
//	case 4:
//		printf("������������\n");
//		break;
//	case 5:
//		printf("������������\n");
//		break;
//	case 6:
//		printf("������������\n");
//		break;
//	}
//	return 0;
//}