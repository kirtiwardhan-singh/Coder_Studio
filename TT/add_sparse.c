#include<stdio.h>
#include<stdlib.h>
struct element
{
    int i,j,k;
}e;
struct sparse
{
    int m,n,num;
    struct element*e;
}s,s2,sum;
void create(struct sparse *s,struct sparse *s2,struct sparse *sum)
{
    printf("Rows");
    scanf("%d",s->m);
    printf("column");
    scanf("%d",s->n);
    printf("non zero");
    scanf("%d",s->num);
    s->e=(struct element*)malloc(s->num*sizeof(struct element));
    for(int i=0;i<s->num;i++)
    scanf("%d %d %d",s->e[i].i,s->e[i].j,s->e[i].k);

    printf("Rows");
    scanf("%d",s2->m);
    printf("column");
    scanf("%d",s2->n);
    printf("non zero");
    scanf("%d",s2->num);
    s2->e=(struct element*)malloc(s2->num*sizeof(struct element));
    for(int i=0;i<s2->num;i++)
    scanf("%d %d %d",s2->e[i].i,s2->e[i].j,s2->e[i].k);

    sum->e=(struct element*)malloc((s2->num + s->num )*sizeof(struct element));
    

}
int main() 
{
    
    return 0;
}