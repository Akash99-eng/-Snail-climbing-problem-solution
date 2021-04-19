#include <stdio.h>

int main() {
int i ,depth,day;
int n;
scanf("%d\n",&n);
for(i=7;i<=n;i=i+7){
    depth=i-2;
    i=depth;
    printf("distance in day=%dfeet\n",i);
    if(i>=10){
    day=i/5;
    
    printf("total days for achivement=%ddays\n",day);
    break ;
    
    }
    
    }
    
    return 0;
    
}
