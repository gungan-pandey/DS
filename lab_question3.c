// 3rd non-repeating element
#include<stdio.h>
#define max 100
int main()
{
  int arr[max],n,i,count=0;
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enter the element of array");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  int c=0;
  for(i=0;i<n;i++)
  {
      c=0;
      for(int j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
            c=1;
            arr[j]=0;
        }
      }
      if(c==0)
      {
          count++;
          if(count==3 && arr[i]!=0)
          {
              printf("%d",arr[i]);
              break;
          }
      }
  }
  return 0;

}
