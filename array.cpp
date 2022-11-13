#include<iostream>
using namespace std;

int main(){
    int length, pos, x, n;
    cout<<"Enter the length of array: \n";
    cin>>length;
    int array[length];
cout<<"Start insert function\n";
    cout<<"Enter the elements of array\n";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    cout<<"Insertion succesful\n\n";

    cout<<"Displaying array elements:\n\n";
    for(int i=0; i<length; i++){
        cout<<array[i]<<endl ;
    }

    cout<<"Inserting an element at a position"<<endl ;
    cout<<"Enter the position where element is to be inserted"<<endl ;
    cin>>pos;
    cout<<"Enter the element"<<endl ;
    cin>>x;
    for(int i=length+1; i>=pos; i--){
       if(i != pos){
        array[i]=array[i-1];
       } 
       else {
        array[i]= x;
       }
    }
    length++ ;

    cout<<"Displaying array elements:"<<endl ;
    for(int i=0; i<length; i++){
        cout<<array[i]<<endl ;
    }

    cout<<"starting deleting function"<<endl;
   cout<<"Enter the position of element to be deleted";
   cin>>n;
   int temp = array[n];
   for(int i=n; i>=length-1; i--){
    array[i]=array[i+1];
   }
   length--;
    cout<<"Displaying array elements:"<<endl ;
    for(int i=0; i<length; i++){
        cout<<array[i]<<endl ;
    }


}