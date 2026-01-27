#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    double a; double b; double c;

    cout << "Enter A:";
    cin >> a;
    cout << "Enter B:";
    cin >> b;
    cout << "Enter C:";
    cin >> c;

    if(a==b==c){
        cout << "This is an Equilatoral Triangle!";

    else if (a==b) || (b==c) || (a==c){ 
        cout << "This is an Isoceles Triangle!";
    }
    else{
        cout << "This a Scalne Triangle!";
    }


    }

}