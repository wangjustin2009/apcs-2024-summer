#include <stdio.h>

int main()
{
    int i;
    int stud_num=45;
    for (i=0;i<10;i++){
        if((i % 3) == 0){
            printf(" %d.  Hello Word %d studint \n ",0, stud_num);
        }else if ((i % 3) == 1){
            printf(" %d.  Hello Word %d studint \n ",1, stud_num);
        }else if ((i % 3) == 2){
            printf(" %d.  Hello Word %d studint \n ",2, stud_num);
        }  
    }
    return 0;
}
