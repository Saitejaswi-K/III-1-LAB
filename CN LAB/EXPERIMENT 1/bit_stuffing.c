#include<stdio.h>
#include<string.h>
int main(){
    int a[20],b[30],i,j,k,count,n;
    printf("Enter frame size :");
    scanf("%d",&n);
    printf("Enter the frame in the form of 0 and 1 :");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    i=0;
    count=0;
    j=0;
    while(i < n){
        if(a[i]==1){
            while(i < n && a[i] == 1 && count < 5){
            	b[j] = a[i];
            	j++;
            	i++;
            	count++;
            }
            if(count==5){
            	b[j]=0;
		j++;			   
            }
            else if(i < n && a[i] != 1){
            	b[j] = a[i];
            	j++;
            	i++;
            }
            count = 0;
        }
        else{
            	b[j]=a[i];
            	i++;
        	j++;
        }
        
    }
    printf("After Bit Stuffing :");
    for(i=0; i<j; i++)
        printf("%d",b[i]);
    printf("\n");
    return 0;
}
