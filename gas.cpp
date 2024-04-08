//This program calculates the cost in money for a trip taken based on fuel ecomony
//distance travelled and the cost of gas

//All commands except for the ones with # in the header end with a ;
//The int(){} program block doesn't need a ;

#include <iostream> //this allow for using cin and cout commands, always good to have in your program
#include <stdlib.h> //this allow for some standard libraries
#include <cstdio> //this allows for using C programming commands like printf which will allow for formattinh of input that cout doesn't do

using namespace std; //allows for using cin or cout without needing std:: in front of those commands, should be in the header section of almost all programs

int main(){    //how the main program starts
    float milage;  //define a float type variable for the milage
    float cost;   //define a flat type variable for the cost of gas
    float distance; //define a float type variable for the distance travelled
    float answer;  //define a float type variable where the answer to the caulcation is stored

    cout << "Enter Milage (L/100km):\n"; //print to the terminal your text - the \n adds a new line so when you enter your variable it shwos on a new line
    cin >> milage; //the user types in a number that can have a decominal point in it as it's a float type variable

    cout << "Enter cost of gas ($x.xx/L):\n"; //output the next prompt for the user to see
    cin >> cost; //enter the cost of gas that you pay at the gas station. Again it can have a decimal point and can even have 3 numbers after the decimal as that's how they sell gas

    cout << "Enter distance travelled in km:\n"; //prompt the user for the distance travelled for the trip
    cin >> distance; //have the user enter it 

    answer = milage / 100 * distance * cost; //do th math calculation to find the amount of money spent on gas for that trip
    //To explain the calculation, fuel encomony is listed as so many litres used to go 100km.
    //So first you want to take that milage number and divide it by 100 so you find out how many litres of gas you use to onbly travel 1 km
    //Then you want to multiply that by the distance travelled and the cost of gas as you pay a certain amount per litre
    
    
    cout <<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n"; //just to output a line of dashes to highlight your answer
    cout << "Total cost of trip:\t$"; //thr \t at the end of this line put a tab character instead of a new line
    printf("%.2f",answer);  //this is why you needed the #include <cstdio> at the start of the program - it takes the answer variable and formats it to 2 decimal places
    cout <<"\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n"; //just output the same line to highlist the answer
    return 0;
} //the end block of the main program

/*

using // allow for a single line of comments for your code

Using a forward slash and a star and then a star with a forward slash allows you to comment multiple lines of text like how it's heppening here

It should look like this when you run the pogram:

Enter Milage (L/100km):
5.5
Enter cost of gas ($x.xx/L)
1.58
Enter distance travelled in km:
66
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Total cost of trip:	$5.74
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

*/%                     
