/*QUESTION#4
A car travelled back and forth from point A to point B. With a distance being (single trip) 1207KM. During
the forward trip fuel price was 118/liter while returning it was 123/liter. Calculate the total fuel cost
(both ways) and the fuel consumed (total trip). Use the car’s fuel average as input from the user (Input
must be positive make some restrictions on only accepting positive input)*/
#include<stdio.h>
int main(){
    int cost_forward,cost_backward,toatl_fuel_cost,fuel_consumed,fuel_avg,forward_fuel_price,backward_fuel_price;
    int forward_distance=1207;
    int backward_distance=1207;
    forward_fuel_price=118;
    backward_fuel_price=123;
    printf("enter the value of distance per liter:");
    scanf("%d",&fuel_avg);
     if(fuel_avg>0){
    cost_forward=(forward_distance/fuel_avg)*forward_fuel_price;
    cost_backward=(backward_distance/fuel_avg)*backward_fuel_price;
    toatl_fuel_cost=cost_forward+cost_backward;
    fuel_consumed=(forward_distance+backward_distance)/fuel_avg;
    printf("Total fuel cost is %d\n",toatl_fuel_cost);
    printf("Total fuel consumed is %d liters\n",fuel_consumed);
     }
     else{
        if(fuel_avg==0)
        printf("please enter the vlaue greater than zero!\n");
        else
     printf("you entered value less than zero \n");
     }
    return 0;
}