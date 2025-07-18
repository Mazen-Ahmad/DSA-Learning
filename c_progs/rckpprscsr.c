#include<stdio.h>
int main()
{
      char ch;
      printf("Choose Rock, Paper or Scissor\n");
      char choice[10];
      scanf("%s",&choice);
      char word[10];
      //   scanf("%s",choice);
      int i=0;
      while(choice[i]!='\0')
      {
        if(choice[i]>=97 && choice[i]<=122)
        {
            ch= choice[i] - 32;
            word[i]=ch;
        }
        else if(choice[i]>=65 && choice[i]<=90)
        {
            word[i] = choice[i];
        }
            i=i+1;
      } 
      puts(word);     
      return 0;
}
