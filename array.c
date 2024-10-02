# include <stdio.h>
    int main()
{
    int myNum[]={25,50,75,100};
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;
    int i;
    int myNum[3];

//Access the elements of an array 

    printf("\n%d", myNum[0]);
    printf("\n%d", myNum[1]);
    printf("\n%d", myNum[2]);
    printf("\n%d", myNum[3]);

//Change an Array Element
     myNum[0]=20;
     printf("\n%d", myNum[0]);

//Loop Through an Array 
    for(i=0; i<4; i++)
    {
        printf("%d\n", myNum[i]);
    }

//Add elements to it
    myNum[0]=25;
    myNum[1]=50;
    myNum[2]=75;
    myNum[3]=100;
    printf("%d\n",myNum[2]);

//Get Array Size or Length
    printf("%lu",sizeof(ages));

// Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

// Loop through the elements of the array
       for (i = 0; i < length; i++) 
             {
                  sum += ages[i];
             }

// Calculate the average by dividing the sum by the length
    avg = sum / length;

// Print the average
     printf("The average age is: %.2f", avg);
        
}
