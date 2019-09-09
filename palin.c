//minimum number of characters to form a palindrome
#include<stdio.h>
#include<string.h>
main(){
    
    int i=0,j,totChar=0,flag=0,c;
    char str[100];
    printf("Enter a String\n");
    scanf("%s",str);
    int len=strlen(str);
    j=len-1;
    
    while(i<j)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
            flag=1;
        }
        else
        {
            totChar++;
            i++;
            flag=0;
        }
    }
    if(flag!=1)
    totChar=len-1;
    c=totChar-1;
    printf("Total Characters required=%d\n",totChar);
    
    for(i=0;i<totChar;i++)
        str[len+i]=str[c--];
    str[len+i]='\0';
    printf("Final String of Palindrome=%s\n",str);
    
}
