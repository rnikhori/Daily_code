main()
{
    int x,y,temp;
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d y=%d",x,y);
    getch();


}
