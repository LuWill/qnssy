//
//  UserInfo.m
//  qnssy
//
//  Created by jpm on 13-3-23.
//  Copyright (c) 2013年 jpm. All rights reserved.
//

#import "UserInfo.h"

@implementation UserInfo

- (void)dealloc{
    [_userId release];
    [_vipLevel release];
    [super dealloc];
}

@end
