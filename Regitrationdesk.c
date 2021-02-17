#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
  char s[105][32];
  int n,i,j,c=0;
  clrscr();
  printf("              REGISTRATION DESK                  \n");
  printf("-------------------------------------------------\n");
  printf("%d",&n);
  printf("Enter users request of name");
  scanf("%d",s[0]);
  for(i=1;i<=n;i++){
    gets(s[i]);
    for(j=0;j<i;j++){
        if(strcmp(s[i],s[j])==0)
        c++;
    }
    if(c>0)
    printf("%s%d",s[i],c);
    else
    printf("OK\n");
    c=0;
  }
  getch();
return 0;
}

