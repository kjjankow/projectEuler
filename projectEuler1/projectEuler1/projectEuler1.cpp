//
//  projectEuler1.cpp
//  projectEuler1
//
//  Created by Keith Jankowski on 10/14/15.
//  Copyright © 2015 Keith Jankowski. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int divCheck=0;
    
    for (int i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
        {
            divCheck = divCheck + i;
        }
    }
    
    cout << divCheck << endl;
    
    return 0;
}
