//school has following grading system
// 80-100: A
// 60-79: B
// 50-59: C
// 45-49: D
// 25-44: E
// below 25: F
//ask user to enter marks and print the grade
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    if (marks>=80&&marks<=100){
        cout<<"A";
    }
    else if (marks>=60&&marks<=79){
        cout<<"B";
    }
    else if (marks>=50&&marks<=59){
        cout<<"C";
    }
    else if (marks>=45&&marks<=49){
        cout<<"D";
    }
    else if (marks>=25&&marks<=44){
        cout<<"E";
    }
    else if (marks<25){
        cout<<"F";
    }
    else{
        cout<<"invalid marks";
    }
}