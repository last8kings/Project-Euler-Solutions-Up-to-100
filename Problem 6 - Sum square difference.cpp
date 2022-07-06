#include <bits/stdc++.h>
using namespace std;
    

int main() {
   int sumofsquares = 0;
   int squareofsums = 0;
   for(int i = 1;i<=100;i++){
      sumofsquares+=i*i;
      squareofsums+=i;
   }
   squareofsums *= squareofsums;
   cout<<squareofsums-sumofsquares;
   return 0;
   } 
