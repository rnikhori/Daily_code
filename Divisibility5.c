main()
{
    int N;
    printf("Enter a number");
    scanf("%d",&N);
    if(N%5==0)
    {
        printf("%d is divisible by 5",N);
    }
    else
    {
        printf("This number is not divisible by 5");
    }
    getch();
}
