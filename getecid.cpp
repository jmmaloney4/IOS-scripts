//  Created by Jack Maloney on 3/8/14.
//  Copyright (c) 2014 Jack Maloney. All rights reserved.

#import <iostream>
#import <stdio.h>

int main(int argc, const char * argv[])
{
    std::cout << "Please put your iDevice into recovery before running this command"
    FILE *in;
    in = popen("system_profiler SPUSBDataType | sed -n -e '/Apple Mobile Device (Recovery Mode)/,/Serial/p' | grep 'ECID:' | awk -F ': ' '{print $2}'", "r");
    while (TRUE) {

    }
    return 0;
}
