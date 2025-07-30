#include<iostream>
#include<string.h>
using namespace std;

//REVERSE A STRING USING RECURSION
// void rev(string s){
//     if(s.length()==0){
//         return;
//     }
//     string rest=s.substr(1);
//     rev(rest);
//     cout<<s[0];
// }
// int main(){
//     rev("BINOD");
// }

//REPLACE PI WITH 3.14 IN A STRING
// void change(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         change(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         change(s.substr(1));
//     }
// }
// int main(){
//     string s="pippxxppiixipi";
//     change(s);
// }

//TOWER OF HANOI
// void toh(int n,char s,char h,char d){
//     if(n==0){
//         return;
//     }
//     toh(n-1,s,d,h);
//     cout<<s<<" "<<"--->"<<" "<<d<<endl;
//     toh(n-1,h,s,d);
// }
// int main(){
//     int n;
//     cin>>n;
//     toh(n,'A','B','C');
// }

//REMOVE DUPLICATES FROM A STRING
// void removedup(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]!=s[1]){
//         cout<<s[0];
//     }
//     removedup(s.substr(1));
// }
// int main(){
//     removedup("aaaabbbcddeee");
// }

//MOVE ALL X TO END OF STRING
// void movex(string p){
//     if(p.length()==0){
//         return;
//     }
//     if(p[0]=='x'){
//         movex(p.substr(1));
//         cout<<'x';
//     }
//     else{
//         cout<<p[0];
//         movex(p.substr(1));
//     }
// }
// int main(){
//     movex("axxbdxhxioxxe");
// }

//PRINT ALL SUBSTRINGS OF A STRING
// void sub(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     sub(s.substr(1),ans);
//     sub(s.substr(1),ans+s[0]);
// }
// int main(){
//     sub("ABC","");
// }

//GENERATE SUBSTRINGS WITH ASCII CODES
// void asciisub(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<"  ";
//         return;
//     }
//     asciisub(s.substr(1),ans);
//     asciisub(s.substr(1),s[0]+ans);
//     asciisub(s.substr(1),to_string(int(s[0]))+ans);
// }
// int main(){
//     asciisub("AB","");
//}

//KEYPAD PHONE PROBLEM
// string keypad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
// void prints(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<" ";
//         return;
//     }
//     string code=keypad[s[0] -'0'];
//     for(int i=0;i<code.length();i++){
//         prints(s.substr(1),ans+code[i]);
//     }
// }
// int main(){
//     prints("29","");
// }

