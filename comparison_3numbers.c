main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?(a>c)?a:c :(b>c)?b:c;
    printf("%d is the greatest number",(a>b)?(a>c)?a:c :(b>c)?b:c);
    getch();
}
