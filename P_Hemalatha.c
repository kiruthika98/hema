#include<stdio.h>
int main()
{
    void move(int);
    void slow(int);
    void brake(int);
    void start();
    int speed,km,obstacle,sensors,choice,key,d;
    char currentplace[20],destinationplace[20];
    printf("enter the current place");
    scanf("%s" ,currentplace);
    printf("enter the destination place");
    scanf("%s",destinationplace);
    printf("enter km from current place");
    scanf("%d",&km);
    printf("press 1 for ON and 0 for OFF key to start a car");
    scanf("%d",&key);
    if(key==(1||2))
    {
    printf("car started to move\n");
    }
    else
    {
        printf("press ON key to start a car");
    }
 A:   printf("1.victim\n2.speed braker\n3.signal\n4.no obstacle\n");
    printf("enter the obstacles");
    scanf("%d",&obstacle);
    switch(obstacle)
    {
        case 1:
                printf("enter the speed");
                scanf("%d",&speed);
                printf("enter the distance from car to victim");
                scanf("%d",&choice);
                if(choice<=10)
                {
                    slow(speed-50);
                }
                else if(choice<5)
                {
                    brake(0);
                }
                else
                {
                    printf("car continue to move with the speed %d",speed);
                }
                break;
        case 2:
               printf("enter the speed");
                scanf("%d",&speed);
                slow(speed=20);
                break;
                
        case 3:
             printf("enter the speed");
                scanf("%d",&speed);
               printf("1.red\n2.yellow\n3.green\n");
               scanf("%d",&choice);
               if(choice==1)
               {
                   brake(0);
                   printf("car stops moving");
               }
               else if(choice==2)
               {
                   start();
                   printf("car ready to move");
               }
               else
               {
                   move(speed);
                   printf("car is moving");
               }
               break;
               case 4:
               printf("no obstacle it s moving");
                break;  
}
    if(d==km)
    {
        printf("desitination reached\n");
        printf("car stops,traveller reached destination");
    }
   else
        {
            goto A;
        }
return 0;
}

move(int speed)
{
    int d;
    printf("car is moving at th espeed %d",speed);
    d=speed*2;
    
}
slow(int speed)
{
    int d;
    printf("car slowed down to the speed %d",speed);
    d=speed*1;
}
brake(int speed)
{
    printf("car stops moving");
}
start()
{
    printf("starts");
}
