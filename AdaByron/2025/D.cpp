#include <bits/stdc++.h>

using namespace std;



unsigned long long caso(unsigned long long n){

   return (unsigned long long)(n/3) +1;
    
    

}

int main() {
    int n;
    cin >> n;


    for(int i = 0; i< n; i++){
        

        unsigned long long l = 0;
        cin >> l;


        cout << "Caso #" << i  +1<<": " << caso(l) << endl;
    }

    return 0;
}