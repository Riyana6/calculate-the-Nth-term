#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c);

int find_nth_term(int n, int a, int b, int c) 
{
  int t[20],i,ans;
  for(i=4;i<n;i++)
  {
     ans=t[i-1]+t[i-2]+t[i-3];
     
  }
  return ans;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

