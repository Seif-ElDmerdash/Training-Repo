// #include <iostream>
// #include <cmath>

// int main(){
//     using namespace std;

//     double a; double b; double c;

//     cout << "Enter A:";
//     cin >> a;
//     cout << "Enter B:";
//     cin >> b;
//     cout << "Enter C:";
//     cin >> c;

//     if(a==b && b==c && a==c){
//         cout << "This is an Equilatoral Triangle!";
//     }
//     else if (a==b || b==c || a==c){ 
//         cout << "This is an Isoceles Triangle!";
//     }
//     else{
//         cout << "This a Scalne Triangle!";
//     }

//     return 0;
// }

// Watermelon problem ;P

#include <iostream>

int main(){
    using std::cout; using std::cin; 

    int w;
    cout << "Enter a number from 1 - 100: ";
    cin >> w;
    if(w%2 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}