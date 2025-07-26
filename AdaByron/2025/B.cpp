#include <bits/stdc++.h>

using namespace std;



bool seCumple(unsigned int alto, unsigned int bajo){


    if( bajo > alto ){

        unsigned int temp = alto;

        alto = bajo;

        bajo = temp;

    }   

    cout << bajo << " " <<alto << endl;

    return true;

}

int main() {

    unsigned int a, b;

    cin >> a >> b;

    while(cin){
        
        seCumple(a,b);

        
        cin >> a >> b;

    }

    return 0;

}

