#include <stdio.h>
int main()
{
    int h,m,s,n;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d",&n);
    if(s+n>=60){
        m=m+1;
        s=s+n-60;
        if(m>=60){
            h=h+1;
            m = m-60;
            if(h>=24){
                h = 00;
            }
        }
    }else{
        s=s+n;
    }
    printf("%02d:%02d:%02d",h,m,s);
     
    

    return 0;
}

