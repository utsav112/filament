#include<stdio.h>

main()
{
    char a[100];  
    int i,n,c=0;

    printf("Enter string : ");
    gets(a);
    n=strlen(a);

    for(i=0;i<n/2;i++)  
    {
    	if(a[i]==a[n-i-1])
		{
    	    c++;
        }
 	}
 	if(c==i)
	 { 
 	    printf("%s is palindrome string",a);
 	}
    else
	{
    	printf("%s is not palindrome string",a);
	}

}

