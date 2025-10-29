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
