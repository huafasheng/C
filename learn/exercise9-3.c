#include <stdio.h>
struct book{
    char* name;
    float price;
};
int main()
{
    
    int n;
    struct  book maxBook,minBook,books[n];
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
         scanf("%f",&books[i].price);
         scanf("%s",&books[i].name);
    }
    minBook.name = books[0].name;
    minBook.price = books[0].price;
    for (size_t i = 1; i < n; i++)
    {
        if(books[i].price < minBook.price){
            
        }
    }
    
    
    return 0;
}

