#include<stdio.H>
int main()
{
    int x,y;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    y=x%2;

      if(y==0){
        printf("x is Even\n");
      }
      else{
        printf("x is Odd\n");
      }

      return 0;
}
