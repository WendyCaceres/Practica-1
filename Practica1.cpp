//a. I/O + Sequences Only
//1. Entry Level: Kattis - hello * (just print “Hello World!”)
#include<iostream>

int main()
{
    std::cout << "Hola Mundo";
    return 0;
}

//2. UVa 10071 - Back to High School ... * (super simple: output 2 ⇥ v ⇥ t)
#include<stdio.h>

int main()
{
    int v, t, s;
    while(scanf("%d%d", &v,&t)==2)
    {
        printf("%d\n",(v*t)*2);
    }
    return 0;
}

//3.UVa 11614 - Etruscan Warriors ... * (root of a quadratic equation)

#include<stdio.h>
#include<math.h>

int main(){
    int v;
    long long n;
    scanf("%d", &v);
    while(v--){
        scanf("%d", &n);
        printf("%d\n", (long long)floor(sqrt(2.0*n+0.25) + 0.5) -1);
    }
    return 0;
}

//4. UVa 13025 - Back to the Past * (giveaway, just print the one-line answer)

#include<stdio.h>
int main(){
    printf("January 11, 2023 Wednesday\n");
    return 0;
}

//b. Repetition Only
// 5. Kattis - different * (use abs function per test case)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = -10;
    int abs_x = abs(x);
    printf("abs(x)", ("%d"), abs_x);
    return 0;
}

//Kattis - qaly * (trivial loop)
//no se como hacer, sorry

//c. Selection Only
//4. Kattis - onechicken * (if-else if-else; 4 cases (piece vs pieces))

#include<iostream>
using namespace std;

int main(){
int a,b;
cin >> a >>b;
if( b < a){
    cout << "Laura tendria" << to_string(a-b);
    cout <<(b-a ==1, ("parte"),("parte"));
    cout << "fail!" << endl;
}else{
    cout << "Laura necesitara" << to_string(b - a);
    cout << "mas" << (a -b ==1, ("parte"), ("parte"));
    cout << "fail!" << endl;   
}
return 0;
}

// Kattis - provincesandgold * (if-else if-else; 6 cases)
#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    a = 100; 
    b = 2000;
    int sum = a + b + c;
    if(sum < 10){
        if(sum > 40)
        cout << "Aa";
        else if (sum < 4)
        cout << "Bb";
        else 
        cout << "Cc";
        cout << "Dd";
    }
    return 0; 
}


//e. Control Flow (solvable in under 7 minutes36)
//3. UVa 11799 - Horror Dash * (one linear scan; find max value)
#include <cstdio>
int main(){
    int A, N, current, max;
    scanf("%d", &A);
    for (int t = 1; t <= A; ++t) {
        max = 1;
        scanf("%d", &   N);
        while (N--) {
            scanf("%d", &current);
            if (max < current)
                max = current;
        }
        printf("Case %d: %d\n", t, max);
    }



//4. UVa 12279 - Emoogle Balance * (simple linear scan)
#include<cstdio>
using namespace std;

int main();{
    int n, count = 0;
    while(scanf("%d", &n), n){
        count++;
        int rest = 0, a;
        for(int b = 0; b < n; b++){
            scanf("%d", &a);
        }
        printf("%d, %d\n");
    }
    return 0;
}


