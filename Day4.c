#include<stdio.h>
#include<stdlib.h>
int main() 
{
  int a[50],n,i,key,low,high,mid;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the key element to be searched\n");
  scanf("%d",&key);
  low=0;
  high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(a[mid]==key)
    {
      printf("Element %d found at position %d\n",key,mid+1);
      exit(0);
    }
    else if(a[mid]>key)
    high=mid-1;
    else
    low=mid+1;
  }
  printf("Key is not found\n");
  return 0;
}