//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdarg.h>
//int a(int n, ...)
//{
//    va_list
//}
//int main()
//{
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int x,y,flag=0;
//    while(~scanf("%d%d",&x,&y))
//    {
//        if(y==0&&!flag)
//        {
//            printf("0 0");
//            return 0;
//        }
//        if(y==0)
//            continue;
//        if(flag)
//            printf(" ");
//        flag=1;
//        printf("%d %d",x*y,y-1);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long a,b,c;
//    int n,i;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        scanf("%lld%lld%lld",&a,&b,&c);
//        if(a+b>c)
//            printf("Case #%d: true",i);
//        else
//            printf("Case #%d: false",i);
//        if(n!=n-1)
//            printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,a1=0,a2=0,a3=0,a5=0,ca4=0;
//    float a4=0;
//    int f=1;
//    int fa1=0,fa2=0,fa3=0,fa4=0,fa5=0;
//    scanf("%d",&n);
//    int arr[n],arr2[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//        arr2[i]=arr[i]%5;
//    }
//    for(i=0;i<n;i++)
//    {
//        if(arr2[i]==0&&arr[i]%2==0)
//        {
//            fa1=1;
//            a1+=arr[i];
//        }
//        if(arr2[i]==1)
//        {
//            fa2=1;
//            a2+=f*arr[i];
//            f*=-1;
//        }
//        if(arr2[i]==2)
//        {
//            fa3=1;
//            a3++;
//        }
//        if(arr2[i]==3)
//        {
//            fa4=1;
//            ca4++;
//            a4+=arr[i];
//        }
//        if(arr2[i]==4)
//        {
//            fa5=1;
//            if(arr[i]>a5)
//                a5=arr[i];
//        }

//    }
//    if(fa1)
//        printf("%d ",a1);
//    else
//        printf("N ");
//    if(fa2)
//        printf("%d ",a2);
//    else
//        printf("N ");
//    if(fa3)
//        printf("%d ",a3);
//    else
//        printf("N ");
//    if(fa4)
//        printf("%.1f ",a4/ca4);
//    else
//        printf("N ");
//    if(a5)
//        printf("%d",a5);
//    else
//        printf("N");
//    return 0;
//}
//#include<stdio.h>
////#include<stdlib.h>
////#include<string.h>
////#include <math.h>
//
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    char op = 0;
//    while (~scanf("%lf%c%lf=lf", &a, &op, &b))
//    {
//        switch (op)
//        {
//        case '+':
//            printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//            break;
//        case '-':
//            printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//            break;
//        case '*':
//            printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
//            break;
//        case '/':
//        {
//            if (b == 0.0) {
//                printf("Wrong!Division by zero!\n");
//            }
//            else {
//                printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
//            }
//        }
//        break;
//        default:
//            printf("Invalid operation!\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int pan(int n)
//{
//    int i;
//    if(n==1)
//        return 0;
//    for(i=2;i<=sqrt(n);i++)
//    {
//        if(!(n%i))
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int n,m,i,count=0,count1=0;
//    scanf("%d%d",&n,&m);
//    for(i=1;count1<5;i++)
//    {
//        if(pan(i))
//        {
//            count1++;
//        }
//    }
//    i--;
//    for(;i<m;i++)
//    {
//        if(pan(i))
//        {
//            if(count)
//                printf(" ");
//            if(!((count-1)%10)&&(count-1))
//                printf("\n");
//            printf("%d",i);
//            count++;
//        }
//    }
//    return 0;
//}
