// CFirst.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MAXLINE 1000
int strlen(char s[]);
void strcat(char s[],char t[]);

void squeeze(char s[],char c[]);

int any(char s1[],char s2[]);
int bitcount(unsigned x)
{
	int b;
	for(b=0;x!=0;x&=(x-1))
	{
		if(x&01) b++;
	}
	return b;
}
int getline(char line[],int maxline);
void copy(char to[],char from[]);
void reverse(char input[]);
int _tmain(int argc, _TCHAR* argv[])
{
	char target[256]="abcdefghij";
	reverse(target);
	printf("%s",target);
	return 0;
}


void reverse(char input[])
{
	int i,j;
	i=j=0;
	while(input[i++]!='\0')i++;
	i-=2;
	while (i>=j)
	{
		char temp=input[i];
		input[i]=input[j];
		input[j]=temp;
		i--;
		j++;
	}
}

int getline(char s[],int lim)
{
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!='&'&&c!='\n';i++)
	{
		s[i]=c;
	}
	if(c=='\n')
	{
		s[i]=c;
		i++;
	}
	s[i]='\0';
	return i;
}

void copy(char to[],char from[])
{
	int i=0;
	int j=0;
	while((to[i++]=from[j++])!='\0');
}


int any(char s1[],char s2[])
{
	int i,j;
	i=j=0;
	while (s1[i]!='\0')
	{
		if(s2[j]=='\0') break;
		if(s1[i]==s2[j])
	    {
			j++;
		}
		else
		{
			j=0;
		}
		i++;
	}
	if(s2[j]=='\0') return i-j;
	return -1;
}



bool isin(char s[],char c)
{
	int i=0;
	while(s[i]!=c&&s[i]!='\0')
	{
		i++;
	}
	return s[i]=='\0'?false:true;
}


void squeeze(char s[],char c[])
{
	int i,j;
	i=j=0;
	for(;s[i]!='\0';i++)
	{
		if(isin(c,s[i])==false)
		{
			s[j++]=s[i];
		}
	}
	s[j]='\0';
}


void strcat(char s[],char t[])
{
	int i,j;
	i=j=0;
	while(s[i]!='\0')i++;
	while ((s[i++]=t[j++])!='\0');
}

int strlen(char s[])
{
	
	return 0;
}

