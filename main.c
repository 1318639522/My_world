#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='*';
    int one_year,year,mint;//һ�����������ݣ��·�
    int time[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int time_tow[]={31,28,31,30,31,30,31,31,30,31,30,31};
    //�·��������������
    int tian_one[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int tian_two[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int tian_three[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    int tian_four[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
    int q,w,t,z,y=0,u;
    int j,i,k,n=1;//ѭ������
    printf("\n�������");
    scanf("%d",&year);
    printf("\n�����·�");
    scanf("%d",&mint);

        if((year%4==0&&year%100!=0)||(year%400==0))
      {
         one_year=366;
         printf("\n%d��Ϊ���꣡��%d��\n",year,one_year);
         printf("\n%d����%d�죡\n",mint,time[mint-1]);
    //����  ���������·�������ͳ������
      for(i=0;i<mint-1;i++)
          {y+=time[i];}

    //�ж�������ݵ�1��1�ºŵ�����
      q=year/4;  //��������е���������
      w=year-q;  //��������е�ƽ������
      q*=366;    //����������������������ó�������
      w*=365;    //ƽ��������ƽ����������ó�������
      t=q+w;     //��ӵó�������ݵ�1��1�µ�����
      t=t-one_year+y;  //������ȥ������ݵ����������ϵõ������·ݾ���1��1��1�յ�������
      u=t%7;     //����7�ó�������Ϊ�����·�һ��Ϊ���ڼ�

      if(u==0){u+=7;}//�������Ϊ0�����ʾΪ�����죬Ϊ����ʾ�����Ե�Ϊ0ʱ�͸�ֵ7
      }

       else
      {
        one_year=365;
        printf("\n%d��Ϊƽ�꣡��%d��\n",year,one_year);
        if(mint==2)
        {
            printf("\n%d����%d�죡\n",mint,time[mint-1]-1);
        }
       else
        {
           printf("\n%d����%d�죡\n",mint,time[mint-1]);
        }

      //ƽ��
      for(i=0;i<mint-1;i++)
        {y+=time_tow[i];}

//�ж�������ݵ�1��1�ºŵ�����
      q=year/4;//���������
      w=year-q;//ƽ�������
      q*=366;//���������
      w*=365;//ƽ�������
      t=q+w;
      t=t-one_year+y;//������ݵ�1��1��1�ŵ�����
      u=t%7;

      if(u==0){u+=7;}    //��Ϊ%7����ܻ���� 0 ��0��ʾ�����죬���Խ������0ʱ����u����7��

    }

    printf("\n     ����һ  ���ڶ�  ������  ������  ������  ������  ������\n");
    printf("\t=================================================\n");

    if(one_year==366){//Ϊ����ʱ�����
     if(time[mint-1]==31){//����31����·ݵ����
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

    else if(time[mint-1]==29){//����2�µ����
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

   else if(time[mint-1]==30){//����30����·ݵ����
    for(j=0;j<6;j++){
    if(tian_two[n-1]==30)break;//����30��ֹͣѭ��
    for(i=0;i<7;i++){
    if(j==0&&i<u-1){printf("\t%c",ch);}
    else{printf("\t%d",tian_two[n-1]);
    if(tian_two[n-1]==30)break;//����30��ֹͣѭ��
          n++;}
              }
        printf("\n\n");
         }
       }
    }

    else if(one_year==365){//ƽ������
      if(time[mint-1]==31){//ƽ��31����·����
      for(j=0;j<6;j++){
      if(tian_one[n-1]==31)break;//����31��ֹͣѭ��
      for(i=0;i<7;i++){
      if(j==0&&i<u-1){printf("\t%c",ch);}
      else{printf("\t%d",tian_one[n-1]);
      if(tian_one[n-1]==31)break;//����31��ֹͣѭ��
              n++;}
                  }
        printf("\n\n");
               }
             }

   else if(time[mint-1]-1==28){//ƽ��2�µ����
    for(j=0;j<6;j++){
    if(tian_four[n-1]==28)break;//����28��ֹͣѭ��
    for(i=0;i<7;i++){
    if(j==0&&i<u-1){printf("\t%c",ch);}
    else{printf("\t%d",tian_four[n-1]);
    if(tian_four[n-1]==28)break;//����28��ֹͣѭ��
            n++;}
              }
      printf("\n\n");
        }
    }

   else if(time[mint-1]==30){//ƽ��30����·ݵ����
    for(j=0;j<6;j++){
    if(tian_two[n-1]==30)break;//����30��ֹͣѭ��
    for(i=0;i<7;i++){
    if(j==0&&i<u-1){printf("\t%c",ch);}
    else{printf("\t%d",tian_two[n-1]);
    if(tian_two[n-1]==30)break;//����30��ֹͣѭ��
                 n++;}
                 }
            printf("\n\n");
             }
        }
    }
    printf("\t=================================================\n");
    return 0;
}
