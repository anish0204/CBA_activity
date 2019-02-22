#include<stdio.h>

int main()
{
int a=25,b=10;
int c,ptr;
int arr[3] = {5,9,4};
c=a+b;
ptr=fetch();
printf("Addition = %d",c);
printf("Ponter Value = %d",ptr);
printf("Array Value = %d",arr[1]);
}

int fetch()
{
int val;
val = 100;
return val;
}
