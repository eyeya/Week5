#include <stdio.h>
int main(int argc, char **argv)
{
int begin = 0, sum = 0, end;
printf("Enter end number : ");
scanf("%d", &end);
while(begin <= end) 
{
sum = sum + begin;
begin++;
}
printf("Sum = %d", sum);
}
