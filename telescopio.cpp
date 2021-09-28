#include <iostream>

using namespace std;

int main(){
    int A , N , F ;
    int cont ;
    int soma = 0 ;
    cin >> A ;
    cin >> N ;
        for( cont = 0 ; cont < N ; cont++){

            cin >> F ;

            if ( (F * A) >= 40000000 ) {

                soma++;
            }
        }
        cout << soma << endl;
return 0;
}
