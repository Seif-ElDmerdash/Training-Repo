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

// #include <iostream>

// int main(){
//     using std::cout; using std::cin; 

//     int w;
//     cin >> w;
//     if(1<=w<=100)
//         {if(w%2 == 0 && w!=2){
//             cout << "YES";
//         }
//         else{
//             cout << "NO";
//         }}
//     return 0;
// }

// Simple Caculator

#include <iostream>

int main(){

    using std::cout; using std::cin;

    double num1; double num2;double result;
    char op;

    cout << "************ CALCULATOR ************" << "\n";

    cout << "Enter operation (+ - / *)" << "\n";
    cin >> op;
    cout << "Enter #1: ";
    cin >> num1;
    cout << "Enter #2: ";
    cin >> num2;
    switch(op){
        case '+':
            result = num1 + num2;
            cout << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            cout << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            cout << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            cout << result << "\n";
            break;
        default:
            cout << "Invalid response" << "\n";
    }


    cout << "************************************";



    return 0;
}