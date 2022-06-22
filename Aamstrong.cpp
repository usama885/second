
//Q#2
//A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
//E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
//Write all Armstrong numbers between 100 to 500.


/*
#include <iostream>
using namespace std;
int main() 
{
    {
    int number, temp, rem=0, sum=0, i;

    number = 1;
    temp = i;
    
    for(int i=300; i<=500; i++)
    {
        while(number!=0)
        {
            rem = number % 10;
            sum = sum + (rem*rem*rem);
            number = number / 10;
        }  
		 //HERE THE VALUE OF num = 0
        if(sum == temp)
            cout<<temp<<endl;

        //set default values to the variables
        rem = 0;
        sum = 0;
		
		temp = i+1;
        number = i+1;
    }

}
}
*/
