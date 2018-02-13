#include<stdio.h>
int main()
{ int i,n,p[10]={1,2,3,4,5,6,7,8,9,10},min,k=1,burst=0,pri[10];
int bt[10],temp,temp1,j,at[10],wt[10],rt[10],tt[10],ta=0,sum=0;
float wavg,tavg,tsum,wsum;
printf("\nenter the No. processes ");
scanf("%d",&n);
for(i=0;i<n;i++) {
printf("\tenter the burst time of %d process",i+1);
scanf("%d",&bt[i]);
printf("\tEnter the arrival time of %d process ",i+1);
scanf("%d",&at[i]);
printf("\tEnter the priority time of %d process",i+1);
scanf("%d",&pri[i]);
}

}
