#include<stdio.h>
int main()
{
  char s[20];
  int i;
  printf("Enter the string\n");
  scanf("%s",s);
  printf("vowels are :");
  for(i=0;s[i];i++) 
  {
      if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
      {
          printf(" %c ",s[i]);
      }
  }
  printf("\n");
}
