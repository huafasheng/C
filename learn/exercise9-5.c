#include <stdio.h>
#include <string.h>
struct friend{
    char name[10];
    int  birthday;
    char telephone[17];
};
int main()
{
    struct  friend friends[10],friend;
    int n;
    scanf("%d",&n);
    getchar();
    for (size_t i = 0; i < n; i++)
    {
        scanf("%s %d %s",&friends[i].name,&friends[i].birthday,&friends[i].telephone);
        getchar();
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (friends[i].birthday<friends[j].birthday)
            {
               friend = friends[i];
               friends[i] = friends[j];
               friends[j] = friend;

            }
            
        }
        
    }
    for (size_t i = 0; i <n; i++)
    {
       printf("%s %d %s\n",friends[i].name,friends[i].birthday,friends[i].telephone);
    }
    
    
   
}

