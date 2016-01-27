//
//  main.cpp
//  cppRecursive
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>

using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main() {
    int num;
    cout << "Enter a number to do calculate factorial operation\n";
    cin >> num;
    cout << fact(num) << endl;
    return 0;
}
