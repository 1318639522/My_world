#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='*';
    int one_year,year,mint;//一年的天数，年份，月份
    int time[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int time_tow[]={31,28,31,30,31,30,31,31,30,31,30,31};
    //月份天数的四种情况
    int tian_one[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int tian_two[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int tian_three[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    int tian_four[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
    int q,w,t,z,y=0,u;
    int j,i,k,n=1;//循环变量
    printf("\n输入年份");
    scanf("%d",&year);
    printf("\n输入月份");
    scanf("%d",&mint);

        if((year%4==0&&year%100!=0)||(year%400==0))
      {
         one_year=366;
         printf("\n%d年为闰年！有%d天\n",year,one_year);
         printf("\n%d月有%d天！\n",mint,time[mint-1]);
    //闰年  根据输入月份用数组统计天数
      for(i=0;i<mint-1;i++)
          {y+=time[i];}

    //判断输入年份到1年1月号的天数
      q=year/4;  //输入年份中的闰年总数
      w=year-q;  //输入年份中的平年总数
      q*=366;    //闰年总数乘闰年天数计算得出总天数
      w*=365;    //平年总数乘平年天数计算得出总天数
      t=q+w;     //相加得出输入年份到1年1月的天数
      t=t-one_year+y;  //天数减去输入年份的天数，加上得到输入月份距离1年1月1日的总天数
      u=t%7;     //除以7得出余数，为输入月份一号为星期几

      if(u==0){u+=7;}//如果余数为0，则表示为星期天，为了显示，所以当为0时就赋值7
      }

       else
      {
        one_year=365;
        printf("\n%d年为平年！有%d天\n",year,one_year);
        if(mint==2)
        {
            printf("\n%d月有%d天！\n",mint,time[mint-1]-1);
        }
       else
        {
           printf("\n%d月有%d天！\n",mint,time[mint-1]);
        }

      //平年
      for(i=0;i<mint-1;i++)
        {y+=time_tow[i];}

//判断输入年份到1年1月号的天数
      q=year/4;//闰年的年数
      w=year-q;//平年的年数
      q*=366;//闰年的天数
      w*=365;//平年的天数
      t=q+w;
      t=t-one_year+y;//输入年份到1年1月1号的天数
      u=t%7;

      if(u==0){u+=7;}    //因为%7后可能会等于 0 ，0表示星期天，所以结果等于0时，则u加上7。

    }

    printf("\n     星期一  星期二  星期三  星期四  星期五  星期六  星期天\n");
    printf("\t=================================================\n");

    if(one_year==366){//为闰年时的情况
     if(time[mint-1]==31){//闰年31天的月份的情况
     for(j=0;j<6;j++){
     if(tian_one[n-1]==31)break;
     for(i=0;i<7;i++){
     if(j==0&&i<u-1){printf("\t%c",ch);}
     else {printf("\t%d",tian_one[n-1]);
     if(tian_one[n-1]==31)break;
        n++;}
            }
     printf("\n\n");
        }
     }

    else if(time[mint-1]==29){//闰年2月的情况
     for(j=0;j<6;j++){
     if(tian_three[n-1]==29)break;
     for(i=0;i<7;i++){
     if(j==0&&i<u-1){printf("\t%c",ch);}
     else{printf("\t%d",tian_three[n-1]);
     if(tian_three[n-1]==29)break;
           n++;}
               }
        printf("\n\n");
        }
      }

   else if(time[mint-1]==30){//闰年30天的月份的情况
    for(j=0;j<6;j++){
    if(tian_two[n-1]==30)break;//遇到30就停止循环
    for(i=0;i<7;i++){
    if(j==0&&i<u-1){printf("\t%c",ch);}
    else{printf("\t%d",tian_two[n-1]);
    if(tian_two[n-1]==30)break;//遇到30就停止循环
          n++;}
              }
        printf("\n\n");
         }
       }
    }

    else if(one_year==365){//平年的情况
      if(time[mint-1]==31){//平年31天的月份情况
      for(j=0;j<6;j++){
      if(tian_one[n-1]==31)break;//遇到31就停止循环
      for(i=0;i<7;i++){
      if(j==0&&i<u-1){printf("\t%c",ch);}
      else{printf("\t%d",tian_one[n-1]);
      if(tian_one[n-1]==31)break;//遇到31就停止循环
              n++;}
                  }
        printf("\n\n");
               }
             }

   else if(time[mint-1]-1==28){//平年2月的情况
    for(j=0;j<6;j++){
    if(tian_four[n-1]==28)break;//遇到28就停止循环
    for(i=0;i<7;i++){
    if(j==0&&i<u-1){printf("\t%c",ch);}
    else{printf("\t%d",tian_four[n-1]);
    if(tian_four[n-1]==28)break;//遇到28就停止循环
            n++;}
              }
      printf("\n\n");
        }
    }

   else if(time[mint-1]==30){//平年30天的月份的情况
    for(j=0;j<6;j++){
    if(tian_two[n-1]==30)break;//遇到30就停止循环
    for(i=0;i<7;i++){
    if(j==0&&i<u-1){printf("\t%c",ch);}
    else{printf("\t%d",tian_two[n-1]);
    if(tian_two[n-1]==30)break;//遇到30就停止循环
                 n++;}
                 }
            printf("\n\n");
             }
        }
    }
    printf("\t=================================================\n");
    return 0;
}
