//
// Created by Shahzod Erkinov on 29/10/25.
//

#include <iostream>
using namespace std;


/*    Problem 1

float sumNUM(int numbers[]){
    float sum = 0;
    for ( int i=0;i<size; i++){
        sum+= (float)numbers[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int the_number[n];
    for(int i=0; i<n; i++)
    {
        cin>>the_number[i];
    }
    cout<<sumNUM(the_number,);

}
*/

/*    PROBLEM 2

    float avgNUM(int numbers[], int size  ){
        float sum = 0;
        for ( int i=0;i<size; i++){
            sum+= (float)numbers[i];
        }
        return sum/size;
    }

    int main()
    {
        int n;
        cin>>n;
        int the_number[n];
        for(int i=0; i<n; i++)
        {
            cin>>the_number[i];
        }
        cout<<avgNUM(the_number,n);

    }

*/

/* PROBLEM 3

int minNum(int arr[],int size) {
    int min=arr[0];
    for(int i=0; i<size; i++) {
        if(arr[i]<arr[0]) {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int n ;
    cin>>n ;
    int array[n];
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    cout<<"Min= "<<minNum(array,n);

    return 0;
}
*/

/* PROBLEM 4

int minNum(int arr[],int size=15) {
    int max =arr[0],dx;
    for(int i=0; i<size; i++) {
        if(arr[i]>max) {
            max=arr[i];
            dx=i;
        }
    }
    return dx;
}

int main()
{
    int n = 15 ;
    cout<<" input 15 elements "<< endl;
    int array[n];
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    cout<<"the Index of largest num= "<<minNum(array,n);

    return 0;
}

*/

/* Problem 5

#include <iostream>
using namespace std;

bool strictly( int ar[],  int ar1[], int size){
    int count=0;
    if()
    for(int i=0;i<size;i++){
        if(ar[i]!=ar1[i]) count ++;
    }
    return (count==0)?true:false;
}

int main()
{
 int n,m;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cin>>m;
 int arr2[m];
 for(int i=0;i<m;i++){
     cin>>arr2[i];
 }
 if(n==m){
 if(strictly(arr,arr2,n)) cout << "identical";
 else cout<< "they are not identical";
 }
 else {cout<<"they are not identical"}
    return 0;
}
*/

/*proble 6

int main()
{
	int n,up=0,low=0,dig=0,spe=0;
	cin>>n;
	char arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		if(arr[i]>='0' and arr[i]<='9' ){ dig++;}
		else if(arr[i]>='a' and arr[i]<='z' ){ low++;}
		else if(arr[i]>='A' and arr[i]<='Z' ){ up++;}
		else { spe++ ;}
	}
    cout<< "Uppercase "<< up<< endl;
	cout<< "Lowercase "<< low<<endl;
	cout<< "Digits "<< dig<<endl;
	cout<< "Special "<< spe<< endl;
	return 0;
}
*/
/*Problem 7

int main()
{
    int n,d;
    cin>>n;
   int  list[n];
    for (int i=0;i<n;i++){
        cin >>list[i];
    }
     sort(list,list+n);

    for(int li: list){
        cout <<li<<" ";
    }

}
*/

/* Problem 9
#include <algorithm>
void reversearr(int arr[],int st,int end){
    for(int i=end-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n,d;
    cin>>n;
   int  list[n];
    for (int i=0;i<n;i++){
        cin >>list[i];
    }
    reversearr(list,0,n);


}
*/