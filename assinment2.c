#include<stdio.h>
int main(void)
{
float amount;
int choice,result;
printf("enter amount");
scanf("%f", & amount);
printf("1 inches to meter\n");
printf("2 meter to inches\n");
printf("enter choice\n");
scanf("%d", & choice);
if (choice==1)
{
result= amount*0.0254;

}
else if(choice==2)
{
result= amount/0.0254;
}
printf("result=%d",result);
return 0;
}
