//Code to find the factorial of a number that reduce the time complexity
int fact(int);
int fact_rec(int,int);
int main() 
{
   int num, result;
   printf("Enter the number\n");
   scanf("%d",&num);
   result=fact(num);
   printf("The factorial of %d is %d\n",num,result);
   return 0;
}
int fact(int n)
{
   return fact_rec(n,1);
}
int fact_rec(int n,int result) 
{
   if(n==1) 
      return result;
   else
      return fact_rec(n-1,n*result);
}
