#include <stdio.h>
#define NUMBER 5
int max_of(int v[],int n)
{
    int i;
    int max=v[0];
    for(i=1;i<n;i++)
        if(v[i]>max)
            max=v[i];
    return max;
}
int main (void)
{
    int i;
    int english[NUMBER];
    int math[NUMBER];
    int max_english,max_math;
    printf("import %d students' gade\n",NUMBER);
    for(i=0;i<NUMBER;i++){
        printf("[%d]english:",i+1);   scanf("%d",&english[i]);
        printf("    math:");   scanf("%d",&math[i]);
    }
    max_english=max_of(english,NUMBER);
    max_math=max_of(math,NUMBER);
    printf("max english is %d\n",max_english);
    printf("max math is %d\n",max_math);
    return 0;
}
