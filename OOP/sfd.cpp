#include<iostream>
#include<vector>
using namespace std;

// class X{
// static int i;
// public:void show(){cout<<"i ="<<++i<<endl;}
// };
// int X::i;
// int main(){
// X obj; obj.show();
// }

// class X {
// public:
// static void f(){cout<<"In static f()"<<endl;}
// };
// int main(){
//     X a;
//     X::f();   // direct call without an object
// }

// class A{
// int i;
// public:  
//     A(){i=10;}
//     void show(){
//         cout<<"i = "<<i<<endl;
//         }
//     A makedouble(A obj){
//         A temp; 
//         temp.i = 2*obj.i; 
//         return temp;
//         }
// };
// int main(){
//     A a1,a2;  
//     a1.show();
//     a2 = a1.makedouble(a1);
//     a2.show();
// }

// class Test{
//     const int i;
//     public:
//         Test(int x):i(x+9){}   //initialized using constructor
//         void show(){
//             //Test::i=i+6;
//             cout<<"i="<<Test::i<<endl;
//             }
// };
// int main(){
//     Test t(190);
//     t.show();
//     }

// namespace first{
//     int a=10; 
//     void show(){
//         cout<<"i m in first namespace"<<endl;
//     }
// }
// namespace second{ 
//     int a=20; 
//     void show(){
//         cout<<"i m in second namespace"<<endl;
//     } 
// }  
// int main(){ 
// cout<<first::a<<endl; 
// first::show();
// }

//  class base1 {
//  protected: int i;
//  public:
//  base1(int x) { i=x; cout << "Constructing base1\n"; }
//  ~base1()  { cout << "Destructing base1\n"; }};
//  class base2 {
//  protected: int k;
//  public:
//  base2(int x) { k=x; cout << 
// "Constructing base2\n"; }
//  ~base2() { cout << "Destructing base2\n"; } };
//  class derived: public base2, public base1 {
//  int j;
//  public:
//  derived(int x, int y, int z): base2(y), base1(z)
//  { j=x; cout << "Constructing derived\n"; }
//  ~derived() { cout << "Destructing derived\n"; }
//  void show() { cout << i << " " << j << 
// " " << k << "\n"; }
//  };
//  int main()
//  { derived ob(3, 4, 5);
//  ob.show(); // displays 4 3 5
//  return 0; 
//  }

//  class base {
//  public: int i; };
//  class derived1 : public base {
//  public: int j; };
//  class derived2 : public base {
//  public: int k; };
//  class derived3 : public 
// derived1, public derived2 {
//  public: int sum; };
//  int main() {
//  derived3 ob;
//  ob.derived1::i = 10; // this is ambiguous, which i???
//  ob.j = 20;
//  ob.k = 30;
//  // i ambiguous here, too
//  ob.sum = ob.i + ob.j + ob.k;
//  // also ambiguous, which i?
//  cout << ob.i << " ";
//  cout << ob.j << " " << ob.k ;
//  cout << ob.sum;
//  return 0;
//  }

// #include <iostream>
// using namespace std;
//
// class node{
//     public:
//     int data;
//     node* next;
//   
//     node(){}
// };
//
// void make_circle(node* head,int N){
//     for(int i=1;i<=N;i++){
//         node* nn=new node();
//         nn->data=i;
//         nn->next=NULL;
//         if(head==NULL){
//             head=nn;
//         }
//         else{
//             node* r=head;
//             while(r->next!=head){
//                 r=r->next;
//             }
//             r->next=nn;
//         }
//         nn->next=head;
//     }
//
// }
//
// void find_it(node* head, int counter, int k){
//     node *p=head,*q;
//     for(int i=1;i<=counter;i++){
//         p=p->next;
//     }
//     while(p->next!=p){
//         for(int j=0;j<k;j++){
//             q=p;
//             p=p->next;
//         }
//         q->next=p->next;
//         delete p;
//         p=q->next;
//        
//     }
//     cout<<"Child who becomes IT is"<<p->data;
//    
// }
//
// int main(){
//     node* head=NULL;
//     make_circle(head,5);
//     find_it(head,3,7);
//    
// }

// class Test {
// public:
// Test() {cout<<"in constructor"<<endl;}
// ~Test() { cout << "In destructor" << endl; }
// };
// int main() {
// Test c;
// cout <<"In main"<<endl;;
// } 

//  int reverse(int x) {
//         double ans=0;
//         while(x){
//             ans=ans*10+x%10;
//             x=x/10;
//         }
//         if(ans>(2^31-1)||ans<(-2^31)){
//             return 0;
//         }
//         return ans;
//     }
// int main(){
//     cout<<2^31-1;
//     cout<<reverse(129);
//     cout<<reverse(1534236469);
// }

// class A{
//     int i;	
//     public: 
//     A(int a):i(a){}
//     void show(){
//         cout<<"i = "<< i << endl;
//     }
// };
// int main(){
//     A a(19); 
//     a.show(); 
// }

// class Test  { 
// public: Test() {cout << "In constructor"<<endl; } 
//     ~Test() { cout << "In destructor"<<endl; } 
// }; 
// void myfunc() {  Test obj; } 
// int main() { 
// cout << "Start main()"<<endl;     
// cout << "End main()"<<endl; myfunc(); 
// }

// class A{
//    public:
//    virtual void disp()= 0;
// };
// class B: public A{
//    public:
// //  virtual void disp() = 0;
//     void disp(){};
// };
// class C: public B{
//    public:
//    void disp(){
//        cout<<"Welcome";}
//    };
// int main(){ 
//   C obj;
//   B o;
//  obj.disp();
//  return 0;
//  }

// class Test{
// int i;
// public:
// Test(int a){i=a;}
// void show(){ cout<<i<<endl;}
// friend void operator - (Test &x); 
// };
// void operator-(Test &x){ x.i = -x.i;}
// int main(){
// Test x1(11);
// -x1; x1.show();
// } 

// class Array { 
//     int ptr[], size;
// public: 
//    Array(int* p,int s) { ptr[0]=p[0]; ptr[1]=p[1];  size=s;}
//   int& operator[](int i) { 
//     if (i >= size) { 
//         cout << "Array index out of bound, exiting"; exit(0); 
//     } 
//     return ptr[i]; 
// } 
// };
// int main() { 
// int a[] = { 1, 2 };  
// Array arr1(a,2);   arr1[8] = 6; } 

// class Test {
// int i;      
// public:
// // Test(){
// //     i=0;
// //     }
// Test operator()(int a){ 
//     return *this;
//     }
// void show(){
//     cout << i << endl;
//     }   
// };
// int main() {
// Test t1; 
// t1.show();
// t1 = t1(15); 
// t1.show();
// }

//  template <class T, int n>
//  class Test {
//  T var;
//  public:
//  Test () {var = n; cout<<"n = "<<n<<endl;}
//  T divideBy2 () {return var/2;}
//  };
//  int main(){
//  Test <char,99> t2;
//  cout<<t2.divideBy2()<<endl;
//  }

// class test{
//      public:
//      const int x;
//     test():x(20){
//         // x=20;
//     }
//     void show() {
//     cout<<x<<endl;
//     }
//   };
//   int main(){
//      test t1;
//     //t1.x=30;
//     t1.show(); 
//   }

// template <class T1, class T2>
//  void show(T1 a, T2 b){cout<<a<<", "<<b<<endl;}
//  void show(int a, int b){cout<<"For integer cases";}
//  int main(){
//  show(100,"hello hello");
//  show(3,3);
//  }

// template <class T>
//  class Test {
//  T var; 
// public:
//  Test (T i) {var=i;}
//  T divideBy2 () {return var/2;}
//  };
//  int main(){
//  Test <int> t1(50); 
// Test <double> t2(-10.20);
//  cout<<t1.divideBy2()<<" "<<t2.divideBy2()<<endl;
//  }

//  void divide(int x, int y){
//  cout<<"inside the function\n";
//     if(y==0){ 
//         throw y;
//     }
//     else{
//     cout<<"result is "<<(x/y)<<endl;
//     }
//  }
//  int main(){
//  try{
//  cout<<"inside try block\n";
//  divide(20,10);
//  divide(20,0);
//  divide(30,3);
//  }
// //  catch(int i)  {
// //  cout<<"caught exception "<<i<<endl;
// //  }
//  divide(20,10);
//  divide(20,10);
//  divide(30,0);
//   catch(int i)  {
//  cout<<"caught exception "<<i<<endl;
//  }
//  return 0;
//  }

// class Animal{
// public: 
// virtual void sound(){};
// void sleeping() {cout<<"Sleeping"; }
// };
// class Dog: public Animal{
// public:
// void sound() {cout<<"Woof"<<endl;}
// };

// int main(){ 
//    Dog obj;  obj.sound();  obj.sleeping();
// }

// class Celsius{
// float temper;
// public:
// //…
// operator float(){
//         float fer = temper *9/5 + 32;
//         return fer;
//     }
// //…
// };
// int main(){
// Celsius cel;         // finish code by setter & getter
// float fer=cel;                // UDT to basic type
//     cout<<fer;
// }

// int main() { 
// int n;
// cout<<"How many char?"; cin>>n; 
// cin.sync();
// char *st = new char[n];
// cout<<"\nEnter string of atmost n char: ";
// cin.getline(st, n); 
// cout<<endl<<"You entered: "<<st<<endl;
// delete []st;
// }

// int main(){
//     int n;
//     cout<<"Enter a number : "<<endl;
//     cin>>n;
//     cin.ignore();
//     string s1;
//     char d[7];
//     cout<<"Enter a string : "<<endl;
//     cin.getline(d,7);
//     // cin.ignore();
//     getline(cin,s1);
//     cout<<"Array "<<d;
//     cout<<"String "<<s1;
// }

