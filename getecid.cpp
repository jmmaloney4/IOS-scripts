//  Created by Jack Maloney on 3/8/14.
//  Copyright (c) 2014 Jack Maloney. All rights reserved.

#import <stdio.h>

int main(int argc, const char * argv[])
{
    FILE *in;
    in = popen("system_profiler SPUSBDataType | sed -n -e '/Apple Mobile Device (Recovery Mode)/,/Serial/p' | grep 'ECID:' | awk -F ': ' '{print $2}'", "r");
    while (TRUE) {
        
    }
    return 0;
}
