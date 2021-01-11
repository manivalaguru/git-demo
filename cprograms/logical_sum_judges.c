//structure 13 th sum
int main()
{
    struct player
    {
        char name[20];
        int rank[3];
        int total;
    };

    struct player p[]={
    "sachin",{0},0,
    "pointing",{0},0,
    "dhoni",{0},0,

};
char winner[20];
int i,judge,big;
for(judge=0;judge<=2;judge++)
{
    printf("enter your ranks\n");
    for(i=0;i<=2;i++)
    {
        printf("judge %d enter your mark for %s",judge,p[i].name);
        scanf("%d",&p[i].rank[judge]);
        p[i].total+=p[i].rank[judge];
    }
}
big=p[0].total;
for(i=2;i<=3;i++)
{
    if(p[i].total>big)
    {
        big=p[i].total;
        strcpy(winner,p[i].name);
    }
}
printf("winner =%s score=%d\n",winner,big);
}