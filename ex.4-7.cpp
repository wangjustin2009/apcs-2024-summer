#include <iostream>
int a(int x,int y){
    return x*y;
}
    
int main()
{  
    int x,y;
    printf("輸入高和寬: \n");
    scanf("%d %d",&x ,&y);
    
    printf("面積 = %d \n",a(x,y));
    
    return 0;
}
