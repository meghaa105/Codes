#include <stdio.h>
#include <string.h>
#define max 100000
//https://www.codechef.com/LRNDSA01/problems/LAPIN
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char arr[max];
	    int len,length,ascii1[123]={0},ascii2[123]={0},flag=0;
	    scanf("%s",arr);
	    length=strlen(arr);
	    len=length/2;
	    char half1[len], half2[len];
	    if(length%2==0)
	    {
	        for(int i=0,j=len;i<len && j<=len*2;i++,j++)
	        {
	        half1[i]=arr[i];
	        half2[i]=arr[j];
	        }
	    }
	    else
	    {
	        for(int i=0,j=len+1;i<len && j<=len*2;i++,j++)
	        {
	        half1[i]=arr[i];
	        half2[i]=arr[j];
	        }
	    }
	    
	    for(int i=0;i<len;i++)
	    {
	        ascii1[(int)half1[i]]++;
	    }
	    
	    for(int i=0;i<len;i++)
	    {
	        ascii2[(int)half2[i]]++;
	    }
	    
	    for(int i=0;i<123;i++)
	    {
	        if(ascii1[i]!=ascii2[i])
	        flag=1;
	        
	    }
	    
	    if(flag==0)
	    printf("%s\n","YES");
	    else
	    printf("%s\n","NO");
	}
	return 0;
}
