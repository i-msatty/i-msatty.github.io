#include <stdio.h>


long int find_nth_term(long int n,long int a,long int b,long int c) 
{
    if (a==b==c) {
        return a+b+c;
    }
  if (n==1)
    {
  return a;
  }
  else if (n==2)
   {
  return 2;
  }
  else if (n==3) 
  {
  return c;
  }
  else if(n>3)
  {
      return find_nth_term(n-1, a, b, c)+ find_nth_term(n-2,a,b,c)+find_nth_term(n-3, a, b, c);
  }
return 0;
}

int main() {
    long int n, a, b, c;
  
    scanf("%ld\n%ld %ld %ld",&n,&a,&b,&c);
    long int ans = find_nth_term(n, a, b, c);
 
    printf("%ld", ans); 
    return 0;
}
