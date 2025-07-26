#include <bits/stdc++.h>

using namespace std;


void imprimir(int n, char ch){
    for(int i = 0; i < n; i++){
        cout << ch;
    }
}

void square(int n, char ch){

    // for(int i = 0; i < n; i++){
    //     cout << setfill('*') << std::setw(n*2 +1); cout<< "\n";
    // }


     for(int i = 0; i < n; i++){
        imprimir(2*n,ch);
        cout << "\n";
    }
}

void triangle(int n, char ch){

    for(int i = 1 ; i < n+1; i++){

        imprimir( n -i ,' ');
        imprimir(2*i-1,ch);

        cout << "\n";

    }

}


void triangle_1(int n, char ch){

    for(int i = 0 ; i < n; i++){

        imprimir(i ,' ');
        imprimir(2* (n -i)-1,ch);

        cout << "\n";

    }

}

void diam(int n, char ch){

    triangle(n, ch);
    for(int i = 1 ; i < n; i++){

        imprimir(i ,' ');
        imprimir(2* (n -i)-1,ch);

        cout << "\n";

    }
}

void fleD(int n, char ch){
    for(int i = 0; i < n; i++){
        imprimir(1+2*i,ch);
        cout << "\n";
    }

    for(int i = 1; i < n; i++){
        imprimir(2*(n-i)-1,ch);
        cout << "\n";
    }
    

}

void fleI(int n, char ch){
    for(int i = 0; i < n; i++){
        imprimir(2*(n-i-1),' ');
        imprimir(2* i +1,ch);
        
        cout << "\n";
    }

    for(int i = 1; i < n; i++){
        imprimir(2*i,' ');

        imprimir(2*(n-i)-1,ch);
        cout << "\n";
    }
    

}

void trap(int n, char ch){
    for(int i = 0; i < n; i++){
        imprimir(n-1-i,' ');
        imprimir(n +i*2,ch);
        cout << "\n";
    }
}


int main(){
    string w;
    int n;
    char s;

    cin >> w >> n >> s;


    while (cin){



            if(w== "square"){
                square(n,s);
                }
            else if(w == "triangle"){
                triangle(n,s);
                }
            else if(w == "down-arrow"){
                triangle_1(n,s);
                }
            else if(w == "left-arrow"){
                fleI(n,s);
                }
            else if(w == "right-arrow"){
                fleD(n,s);
                }
            else if(w == "diamond"){
                diam(n, s);
                }
            else if(w == "trapecious"){
                trap(n, s);
                }

    cin >> w >> n >> s;
        if(cin){
            cout <<"\n";
        }


    }
    return 0;
}