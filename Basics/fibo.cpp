#include<iostream>
#include<math.h>
using namespace std;

int reverse(int n){
    int a=0;
    while(n>0){
        a = a*10 + n%10;
        n/=10;
    }
    return a;
}

int addbin(int a,int b){
    int sum=0,carry=0,count=0,finsum;
    
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            sum = sum*10 + carry;
            carry=0;
        }

        else if((a%2==1 && b%2==0) ||(a%2==0 && b%2==1) ){
            if(carry==0){
                sum = sum*10 + 1;
                carry=0;
            }
            else{
                sum = sum*10 + 0;
                carry=1;
            }
        }
        else{
            if(carry==0){
                sum = sum*10 + 0;
                carry=1;
            }
            else{
                sum = sum*10 + 1;
                carry=1;
            }
        }
        a/=10; b/=10;
        if(sum==0){
            count++;
        }
    }
    while(a>0){
        if(a%2==0){
            if(carry==0){
                sum = sum*10 + 0;
                carry=0;
            }
            else{
                sum = sum*10 + 1;
                carry=0;
            }
        }
        else{
            if(carry==0){
                sum = sum*10 + 1;
                carry=0;
            }
            else{
                sum = sum*10 + 0;
                carry = 1;
            }
        }
        a/=10;
        if(sum==0){
            count++;
        }
    }
    while(b>0){
        if(b%2==0){
            if(carry==0){
                sum = sum*10 + 0;
                carry=0;
            }
            else{
                sum = sum*10 + 1;
                carry=0;
            }
        }
        else{
            if(carry==0){
                sum = sum*10 + 1;
                carry=0;
            }
            else{
                sum = sum*10 + 0;
                carry = 1;
            }
        }
        b/=10;
        if(sum==0){
            count++;
        }
    }   
    if(carry==1){
        sum = sum*10 + 1;
    }
    if(count==0){
        return reverse(sum);
    }
    else{
        finsum= reverse(sum)*(pow(10,count));
        return finsum; 
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<addbin(a,b);
}