//greatest number to be formed from given numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int swap(const void *c,const void *d){
    int n1=*(int*)c;
    int n2=*(int*)d;
    
    int a=pow(10,floor(log10(n2))+1)*n1+n2;
    int b=pow(10,floor(log10(n1))+1)*n2+n1;
    
    if(n1==0) return 1;
    if(a<b) return 1;
    
return 0;
}

int main()
{
	//code
	    int n;
	    scanf("%d",&n);
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    
	    qsort(arr,n,sizeof(int),swap);
	    
        for(int i=0;i<n;i++) 
	        printf("%d",arr[i]);

	
	return 0;
}
