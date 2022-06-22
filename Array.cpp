#include<iostream>
using namespace std;
int main(){
    
 int one[50], two[50], newone[100];
 int i,hold;
 cout<<"enter 1st array"<<endl;
 for(i=0; i<3;i++){
  cin>>one[i];
  newone[i]=one[i];
 }
 
 hold=i;
 cout<<"enter 2nd array"<<endl;
 for(i=0; i<3; i++){
  cin>>two[i];
  newone[hold]=two[i];
  hold++;
  
 }
 cout<<"new array printed now!"<<endl;
 for(i=0; i<hold; i++)
 cout<<newone[i]<<"  ";
 cout<<endl;
 return 0;
}

/*
#include<iostream>
using namespace std;
int main(){
	int arr[5],arr2[5],neww[10],k,i;
	int stat;
	
	cout<<"1st Array!"<<endl;
	for( i=0; i<3; i++){
		cin>>arr[i];
		neww[i] = arr[i]; 
	}
	// for the sake of hold the array index!
	stat=i;
	cout<<"2nd Array!"<<endl;
	for(int i=0; i<3; i++){
		cin>>arr2[i];
		neww[stat] = arr2[i]; 
		//add index for the sake of use of another location in the third party array!
		stat++;
	}
	
	cout<<stat;
	//Print the newly array that included previous arrays in a sigle array 
	cout<<"Copy Array!"<<endl;
	for( i=0; i<stat; i++){
		cout<<neww[stat]<<endl;
	}
	
return 0;

}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
    cout<<"Enter the Size for First Array: ";
    cin>>sizeOne;
    cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>sizeTwo;
    cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    return 0;
}
*/















/*

#include<iostream>
using namespace std;
int main(){
	int arr[10];
	
	for(int i= 0; i<10; i++){
		cin>>arr[i];
	}
	
	cout<<"Reverse Array is given below...."<<endl;

	for(int j=9; j>=0; j--){
		cout<<arr[j]<<endl;
	}
	return 0;
}

*/
//Q#2
//Write a program to print sum, average of all numbers, smallest and largest element of an array.
/*
#include<iostream>
using namespace std;
int main(){
	int arr[3],sum=0,max,min;
	int i,j;
	for(i=0; i<3; i++){		
		cout<<"Enter the "<<i+1<<" number = ";
		cin>>arr[i];
		max = arr[0];
		min = arr[0];
	}
	
	for(j=0; j<3; j++){
		if(arr[j] > max) max=arr[j];
		if(arr[j] < min) min = arr[j];
		sum += arr[j];
	}
	
	cout<<"sum is = "<<sum<<endl;
	cout<<"Average is = "<<sum / i<<endl;
	cout<<"Maximum value is = "<<max<<endl;
	cout<<"Minimum value is = "<<min<<endl;
	
	return 0;
}
*/
