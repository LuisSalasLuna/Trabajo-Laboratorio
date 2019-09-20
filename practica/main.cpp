#include <iostream>

using namespace std;

int main()
{
    //1
    int n ;
    int a; int b; int c; int d; int e;
    cin >> n ;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    e = n%10;
    cout << e <<'\t'<< d <<'\t'<< c <<'\t'<< b <<'\t'<< a <<'\t'<< endl;


    //2
    int n1;
    int a1 =1;
    int contador =0;
    cin >> n1;
    while(a1 <= n1)
    {contador ++;
    a1= a1*10;}
    cout << "tiene" <<contador<<"digitos"<< endl;

    //3
    int n2 ;
    int a2; int b2; int c2; int d2; int e2;
    cin >> n2 ;
    int m2 = n2;
    a2 = n2%10;
    n2 = n2/10;
    b2 = n2%10;
    n2 = n2/10;
    c2 = n2%10;
    n2 = n2/10;
    d2 = n2%10;
    n2 = n2/10;
    e2 = n2%10;
    if(a2 == e2 && b2 == d2)
        cout <<m2 << "es palinndrome";

    //4
    int p;
    int k = 1;
    int n3 = 0;
    int n4 = 1;
    cin >> p;
    int s;
    cout << 1 << endl;
    if(p==0 || p==1)
        {cout << 1 << endl;}
    else {while(p>k){
        s = n3+n4;
        n3 = n4;
        n4 = s;
        k++;
    cout << s << endl;
    }}

    //5
    char f;
    cin >> f;
    int g = static_cast<int>(f);
    if(g > 47 && g < 58)
        {cout << f << " es numero " <<endl;}
    else
        {cout << f << " no es numero " <<endl;}
    //6
    char x;
    cin >> x;
    char z;
    int y = static_cast<int>(x);
    if(y >= 65 && y <= 90)
        {z = static_cast<int>(y+32);}
    if(y >= 97 && y <=122)
        {z = static_cast<int>(y-32);}
    cout << z;



    return 0;
}
