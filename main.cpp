#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool is_triangle(int a,int b,int c);
int check_triangle_type(int a,int b,int c);

int main() {
    cout<<"Please input the edge of the triangle"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if(!is_triangle(a,b,c)){
        cout<<"This is not a triangle!"<<endl;
    } else{
        switch (check_triangle_type(a,b,c)){
            case 1:
                cout<<"this4  is a acute triangle"<<endl;
                break;
            case 2:
                cout<<"this is a right triangle"<<endl;
                break;
            case 3:
                cout<<"this is a obtuse triangle"<<endl;
                break;
            default:
                cerr<<"There is a error!"<<endl;
                exit(1);
        }
    }
    return 0;
}

bool is_triangle(int a,int b,int c){
    if (a+b<c || a+c<b || b+c<a)
        return false;
    else
        return true;
}

int check_triangle_type(int a,int b,int c){
    if (a > b)
        swap(a,b);
    if (a > c)
        swap(a,c);
    if (b > c)
        swap(b,c);
    int temp1 = pow(a,2)+pow(b,2);
    int temp2 = pow(c,2);
    if (temp1 > temp2)
        return 1;
    if (temp1 == temp2)
        return 2;
    if (temp1 < temp2)
        return 3;
}