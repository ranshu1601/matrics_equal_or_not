//Program to input 3X3 matrics and find it they are equal or not 

#include<iostream>
using namespace std;

int main()
{
    int A[3][3], B[3][3],r,c;  // Defining a 2D array 
    //Read values in matrics
    cout<<"Enter first matrix row wise \n";
    for (r=0;r<3;r++)
    {
        for(c=0;c<3;c++){
            cin>>A[r][c];
        }
    }
    cout<<"Enter second matrix row wise \n";
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++){
            cin>>B[r][c];
        }
    }
    //Loop to check equality
    int flag=0;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++){
            if(A[r][c] != B[r][c]){
                flag =1 ; break ;
            }
        }
        if(flag==1)break;
    }
    if(flag !=0)
    cout<<"Matrices are unequal \n" ; 
    else
    cout<<"Matrics are equal \n" ;
    return 0;
}