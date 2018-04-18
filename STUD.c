struct student
{
   int name , Glength , Cost ;
};

int main()
{
   // Create an array of structures
   int i,j,n;
   struct student s[10];
   struct student temp;

   // Access array members
   printf("\nEnter gifts length and cost ");
   for(i=0;i<10;i++){
        s[i].name = i+1 ;
        printf(" for s%d : \n",s[i].name);
        scanf("%d%d",&s[i].Glength,&s[i].Cost);

   }
    for( i = 0 ; i < 10 ; i++ ) {
        printf(" For s%d \t Gifts : %d \t Cost : %d \n" , s[i].name ,s[i].Glength,s[i].Cost);
   }
   n=10;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n - 1-i); j++)
        {
            if (s[j].Glength < s[j + 1].Glength)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Order of students is \n\n");
    for( i = 0 ; i < 9 ; i++ ) {
        printf(" s%d , " , s[i].name );
   }
   printf(" s%d " ,s[9].name);

   return 0;
}

