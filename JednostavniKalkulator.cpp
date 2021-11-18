 #include <iostream>
 using namespace std;
 
 
 int main (){
     
     int x;
     int y;
     char operacija;
     
     
     cout <<"unesite dva broja"<<endl;
     cin >>x>>y;
     
     cout <<"izaberite operaciju (+,-,*,/)"<<endl;
     cin >>operacija;
     
     switch(operacija) {
        case '+':
            cout << x << " + " << y << " = " << x + y;
            break;

        case '-':
            cout << x << " - " << y << " = " << x - y;
            break;

        case '*':
            cout << x << " * " << y << " = " << x * y;
            break;

        case '/':
            cout << x << " / " << y << " = " << x / y;
            break;

        default:
            
            cout << "GRESKA";
            break;
    }
     
     
     
     
     
     system ("pause");
     return 0;
     
 }