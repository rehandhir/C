#include<stdio.h>
int main()
{
    int A[]={11,13,45,89,44,85,55,21,57};
    int i;
    bubble_sort(A,8);
    for(i=0;i<8;i++)
        printf("%d\t",A[i]);
}
void bubble_sort(int A[],int N)
{
    int round,i,temp;
    for(round=1;round<=N-1;round++)
        for(i=0;i<=N-1-round;i++)
    {
        if(A[i]>A[i+1])
        {
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }

    }
      printf("Round=%d\n",round);
}
