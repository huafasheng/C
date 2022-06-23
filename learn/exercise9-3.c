#include <stdio.h>
#include <string.h>
struct book{
    char name[31];
    float price;
};
int main()
{
    
    int n;
    struct book minBook;
    struct book books[10];
    scanf("%d",&n);
    getchar();
    for (size_t i = 0; i < n; i++)
    {
        gets(books[i].name);
        scanf("%f",&books[i].price);
        getchar();
    }
   
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (books[i].price<books[j].price)
            {
               minBook = books[i];
               books[i] = books[j];
               books[j] = minBook;

            }
            
        }
        
    }
    printf("%.2lf\n%s\n",books[0].price,books[0].name);
    printf("%.2lf\n%s",books[n-1].price,books[n-1].name);


    
    
    return 0;
}

