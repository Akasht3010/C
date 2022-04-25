#include<stdio.h>

int main(){
     int physics,maths,chemistry;
     float total;
     printf("Enter physics marks:\n");
     scanf("%d",&physics);

     printf("Enter maths marks:\n");
     scanf("%d",&maths);

     printf("Enter chemistry marks:\n");
     scanf("%d",&chemistry);
     total = (physics + maths + chemistry)/3;

if(total<40 || physics<33 || maths<33 || chemistry<33){
    printf("Your marks are %f and you are fail\n",total);
}
else{
    printf("Your marks are %f and you are pass\n",total);
}
return 0;
}

#include<stdio.h>

int main(){
    
return 0;
}