#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
        char password[100];
        int alpha=0,digit=0,special=0;	
	do{
	alpha=0,digit=0,special=0;
	printf("Enter your Password\n");
        gets(password);
	for(int i=0; password[i]!='\0'; i++){
	if(isalpha(password[i])!=0)
			alpha++;
	else if(isdigit(password[i])!=0)
			digit++;
	else
		special++;
	}
	if(alpha>0 && digit>0 && special>0)
	printf("Great Your password is strong\n");
	else if(alpha>0 && digit>0)
	printf("Your password is moderate\nPlease add some special characters\n");
	else if(alpha>0 && special>0)
	printf("Your password is moderate\nPlease add some digits\n");
	else
	printf("Your password is Weak! Please change your password\n");
	}while(alpha==0 || digit==0 || special==0);

        return 0;
}
