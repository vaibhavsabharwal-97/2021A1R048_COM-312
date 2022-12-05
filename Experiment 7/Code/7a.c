#include <stdio.h>
#include <time.h>
int main ()
{
int j,k,n;
while (1) { // infinite loop
printf("\nEnter the any number : ");
scanf("%d",&k) ;
printf("Enter the any number : ");
scanf("%d",&j);
n = k%j; // calculation
printf("%d",n); // printing the result
time_t rawtime; //displaying the current time
struct tm * timeinfo;
time( &rawtime ) ;
timeinfo = localtime ( &rawtime );
printf ( "\nCurrent local time and date: %s", asctime (timeinfo) );
}
}
