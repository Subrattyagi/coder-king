//the distance between two cities(in km) is input through the keyboard.
//Write a program to convert and print this distance in meters,feet,inches,centimeters.

#include<stdio.h>

void main() {
    //Declare variables
    float distancekm,distanceMeters,distanceFeet,distanceInches,distanceCentimeters;

    //Input distance in kilometers
    printf("Enter the distance between two cities in kilometers:"); 
    scanf("%f",&distancekm);

    //Convert distance
    distanceMeters=distancekm*1000;
    distanceFeet=distancekm*3280.84; //1km=3280.84 feet
    distanceInches=distancekm*39370.1; //1km=3970.1 inch
    distanceCentimeters=distancekm*100000; //1km=100000 cm

    //Print the converted distances
    printf("\nConverted distances:\n");
    printf("Meters:%.2f m\n",distanceMeters);
    printf("Feet:%.2f ft\n",distanceFeet);
    printf("Inches:%.2f in\n",distanceInches);
    printf("Centimeters:%.2f cm\n",distanceCentimeters);

}