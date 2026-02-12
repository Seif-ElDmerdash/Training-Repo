// // #include <iostream>
// // #include <cmath>

// // int main(){
// //     using namespace std;

// //     double a; double b; double c;

// //     cout << "Enter A:";
// //     cin >> a;
// //     cout << "Enter B:";
// //     cin >> b;
// //     cout << "Enter C:";
// //     cin >> c;

// //     if(a==b && b==c && a==c){
// //         cout << "This is an Equilatoral Triangle!";
// //     }
// //     else if (a==b || b==c || a==c){ 
// //         cout << "This is an Isoceles Triangle!";
// //     }
// //     else{
// //         cout << "This a Scalne Triangle!";
// //     }

// //     return 0;
// // }

// // Watermelon problem ;P

// // #include <iostream>

// // int main(){
// //     using std::cout; using std::cin; 

// //     int w;
// //     cin >> w;
// //     if(1<=w<=100)
// //         {if(w%2 == 0 && w!=2){
// //             cout << "YES";
// //         }
// //         else{
// //             cout << "NO";
// //         }}
// //     return 0;
// // }

// // Simple Caculator

// #include <iostream>

// int main(){

//     using std::cout; using std::cin;

//     double num1; double num2;double result;
//     char op;

//     cout << "************ CALCULATOR ************" << "\n";

//     cout << "Enter operation (+ - / *)" << "\n";
//     cin >> op;
//     cout << "Enter #1: ";
//     cin >> num1;
//     cout << "Enter #2: ";
//     cin >> num2;
//     switch(op){
//         case '+':
//             result = num1 + num2;
//             cout << result << "\n";
//             break;
//         case '-':
//             result = num1 - num2;
//             cout << result << "\n";
//             break;
//         case '*':
//             result = num1 * num2;
//             cout << result << "\n";
//             break;
//         case '/':
//             result = num1 / num2;
//             cout << result << "\n";
//             break;
//         default:
//             cout << "Invalid response" << "\n";
//     }


//     cout << "************************************";



//     return 0;
// }


// #include <iostream>

// int main(){
//     using namespace std;
    
//     int x;  cout << "Enter a number: "; cin >> x;

//     cout << ((x&1) ==0 ? "Even" : "Odd");

//     return 0;
// }


// #include <iostream>

// int main(){
//     using namespace std;

//     char unit ; double temp;
    
//     cout << "F = Fahrenheit" << "\n";
//     cout << "C = Celsius" << "\n";
//     cout << "Enter what unit you want to convert to" << "\n";
//     cin >> unit;

//     if(unit == 'F'|| unit == 'f'){

//         cout << "Enter the temprature in Celsius: " << "\n";
//         cin >> temp;
//         temp = (1.8*temp) + 32;
//         cout << "Temprature in Fahrenheit = " << temp << "\n";
//     }
//     else if(unit == 'C'|| unit == 'c'){

//         cout << "Enter the temprature in Fahrenheit: " << "\n";
//         cin >> temp;
//         temp = (temp - 32) / 1.8;
//         cout << "Temprature in Celsius = " << temp << "\n";
//     }
//     else{
//         cout << "Enter F or C only.";
//     }

//     return 0;
// }


// #include <iostream>

// int main(){
//     using namespace std;

//     string name;
//     while(name.empty()){
//         cout << "Enter your name: ";
//         getline(cin,name);
//     }

//     cout << "Hello " << name;
//     return 0;

// }

// #include <iostream>

// int main(){
//     using std::cout,std::cin;
    
//     int number;

//     do{
//         cout << "Enter a positive number: " , cin >> number;
//     }while(number < 0);

//     cout << "The number is " << number;

//     return 0;
// }

// #include <iostream>

// int main(){
//     using std::cout,std::cin;

//     for(int i = 1 ; i <=3; i++){

//         cout<<"Ramdan Kareem ya wlad el nas!!\n";
//     }
//  return 0;
// }

// #include <iostream>
// int main(){
//     using std::cout ,std::cin;

//     for(int i=1; i<= 20; i++){
//         if(i==13){
//             continue;
//         }
//         cout<<i<<"\n";
//     }

//     return 0;
// }


// #include <iostream>
// int main(){
//     using std::cout ,std::cin;
//     int rows ,columns; char symbol;

//     cout << "Enter number of rows: " , cin >> rows;
//     cout << "Enter number of columns: " , cin >> columns;
//     cout << "Enter the symbol: " , cin >> symbol;

//     for(int i=1; i<=rows;i++){
//         for (int j=1; j<=i; j++){
//             cout << symbol;
//         }
//         cout <<"\n";
//     }

// }


#include <iostream>
int main(){
    using std::cout ,std::cin;
    int rows; char symbol;

    cout << "Enter number of rows: " , cin >> rows;
    cout << "Enter the symbol: " , cin >> symbol;

    for(int i=1; i<=rows;i++){
        for(int s=rows; s>i; s--){
            cout <<" ";
        }
        for (int j=1; j<=i; j++){
            cout << symbol << " ";
        }
        cout <<"\n";
    }
    
    return 0;
}