//  Created by Jack Maloney on 3/8/14.
//  Copyright (c) 2014 Jack Maloney. All rights reserved.

int main(int argc, const char * argv[])
{
    system("system_profiler SPUSBDataType | sed -n -e '/iPad/,/Serial/p' -e '/iPhone/,/Serial/p' | grep "Serial Number:" | awk -F ": " '{print $2}'");
    return 0;
}
