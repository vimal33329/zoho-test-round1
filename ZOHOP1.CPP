#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

char str[30];

void prt(int st,int en)
{
for(int i=st;i<en;i++)
{
cout<<str[i];
}
}


void prtf(int st,int en)
{
for(int i=st;i<en;i++)
{
cout<<str[i];
}
}

void main()
{
clrscr();
cout<<"Enter the string : ";
gets(str);
int n = strlen(str);
int mid = n/2;
int i=mid;

while(str[i]!='\0')
{ prt(mid,i+1); i++; cout<<"\n"; }


for(i=0;i<mid;i++){
prt(mid,n);
prtf(0,i+1);
cout<<"\n";
}

getch();
}