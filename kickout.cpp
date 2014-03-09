//
//  main.cpp
//  JBApp
//
//  Created by Jack Maloney on 3/8/14.
//  Copyright (c) 2014 Jack Maloney. All rights reserved.
//

#include <iostream>
#include <curl/curl.h>

void rebootDevice() {
    system("/opt/local/bin/irecovery -c 'reboot'");
}

void kickOut() {
    system("/opt/local/bin/irecovery -c 'setenv auto-boot true'");
    system("/opt/local/bin/irecovery -c 'saveenv'");
    rebootDevice();
}

int main(int argc, const char * argv[])
{
    kickOut();
    return 0;
}



