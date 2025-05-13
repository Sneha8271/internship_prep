#include<bits/stdc++.h>
using namespace std;
//non parameterized function
/*
void printName(string name){
    cout<<"sneha"<<endl;

}
int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    printName(name);
    return 0;
}*/



/*int sum(int num1,int num2){
    int num3= num1+num2;
    return num3;
}
int main(){
    int num1, num2;
    cout<<"enter two numbers:";
    cin>>num1>>num2;
    int result = sum(num1, num2);
    cout << result << endl;
    return 0;
}*/


/*int max(int num1, int num2){
    if(num1>=num2){
        return num1;
    } else {
        return num2;
    }
    }
int main(){
    int num1,num2;
    cout<<"enter two numbers:";
    cin>>num1>>num2;
    int maximum=max(num1,num2);
    cout<<maximum<<endl;
    return 0;
}*/


//pass by value-takes a copy of the value and stores it in the function
/*void dosomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;

}

int main(){
    int num =10;
    dosomething (num);
    cout<<num<<endl;
    return 0;
}
    //output is 10 15 20 10
    */


//pass by reference- takes the address of the variable and stores it in the function

/*void dosomething (string &s){
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s="raj";
    dosomething(s);
    cout<<s<<endl;
    return 0;
}
//output is taj taj 
*/

void dosomething(int arr[], int n){
    arr[0]+=100;
    cout<<"value inside function: "<<arr[0]<<endl;

}
int main(){
    int n=5;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    dosomething(arr, n);

  cout<<"value inside int main: "<<arr[0]<<endl;
return 0;
}