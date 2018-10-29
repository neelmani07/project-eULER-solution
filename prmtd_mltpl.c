#include<stdio.h>
#include<stdlib.h>
int isSame(int n1,int n2);
void main()
{
	int i=10,st=1,found=0,j,result=0;
        while(!found)
        {
 		st=st*10+1;
 		for(j=st;j<st*10/6;j++)//to make sure 2nd digit from left doesnt excedes 6 
 		{       found=1;
 		 	for(i=2;i<=6;i++)
 		 	{
 		 		if(!isSame(j,j*i))
 		 		{
 		 			found=0;
 		 			break;
 		 		}	
			}
		        if(found)
		        {
		        	result=j;
		       		break;
		        }
		        
		}	
	}
	printf("%d",result);
	
}
int isSame(int n1,int n2)
{       int i;
	int arr[10]={0};
	for(i=n1;i!=0;i=i/10)
	{
		arr[i%10]++;
	}
	for(i=n2;i!=0;i=i/10)
	{
		if(!(arr[i%10]))
		{
			return 0;
		}
	}
	return 1;
}	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	
	
	
	
	
	
	
	
	
	
	

