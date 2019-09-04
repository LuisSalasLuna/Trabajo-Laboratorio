#include <iostream>

using namespace std;

int main()
{

//1ro
 int x;
 cin >> x;
 int y = x;
 while(x != 0 && x%2 == 0){x = x/2;}
 if(x==1)
    {cout<< y <<" es potencia de 2"<< endl;}
 else
    {cout<< y <<" no es potencia de 2"<< endl;}

 //2do.1
 int n;
 cin >> n;

 int i = n;
 int v = 0;

 while(i != 0){
    if(n%i == 0){v++;};
    i--;
     }
 if(v == 2)
    {cout<< n <<" es primo"<< endl;}
 else
    {cout<< n <<" no es primo"<< endl;}

 //2do.2
 int n1;
 cin >> n1;
 int v1 = 0;

 for(int i1 = n1; i1 != 0; i1--){
     if(n1%i1 == 0){v1++;};
     }
 if(v1 == 2)
    {cout<< n1 <<" es primo"<< endl;}
 else
    {cout<< n1 <<" no es primo"<< endl;}

//3ro.1
 for(int e = 1; e <= 100;e++)
    {int v = 0;
     int i = e;
     while(i != 0){
        if(e%i == 0){v++;};
        i--;}
     if(v == 2)
        {cout<< e << endl;}}
//3ro.2
 int e2 = 1;
 while(e2 <= 100)
    {int v2 = 0;
     for(int i2 = e2; i2 != 0; i2--){if(e2%i2 == 0){v2++;}}
     if(v2 == 2)
        {cout<< e2 << endl;}
     e2++;}

 //4to.1
 int a;
 cin >> a;

 int b = a;
 int c = a-1;
 int d = 0;

 while(c != 0){
    if(a%c == 0){d = d+c;};
    c--;
     }
 if(d == a)
    {cout<< a <<" es perfecto"<< endl;}
 else
    {cout<< a <<" no es perfecto"<< endl;}

 //4to.2
 int a1;
 cin >> a1;

 int d1 = 0;

 for(int c1 = a1-1; c1 != 0; c1--){
     if(a1%c1 == 0){d1 = d1 + c1;};
     }

 if(d1 == a1)
    {cout<< a1 <<" es perfecto"<< endl;}
 else
    {cout<< a1 <<" no es perfecto"<< endl;}






}
