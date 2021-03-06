//
//  MiaiApplyRequestVo.m
//  qnssy
//
//  Created by jpm on 13-4-23.
//  Copyright (c) 2013年 jpm. All rights reserved.
//

#import "MiaiApplyRequestVo.h"

@implementation MiaiApplyRequestVo
- (id)initWithId:(NSString *)id contact:(NSString *)contact message:(NSString *)message
{
    self=[super init];
    if(self){
        NSMutableDictionary *data = [[NSMutableDictionary alloc] init];
        //此处设置参数及参数所需要的key-value
        [data setObject:[BSContainer instance].userInfo.userId forKey:@"userid"];
        [data setObject:id forKey:@"datingid"];
        [data setObject:contact forKey:@"contact"];
        [data setObject:message forKey:@"message"];
        [self.mReqDic setObject:data forKey:@"data"];
        
        
        NSMutableDictionary *method = [[NSMutableDictionary alloc] init];
        //设置请求服务器的方法名
        [method setObject:@"everydaymiai" forKey:@"c"];
        [method setObject:@"miaiapply" forKey:@"a"];
        [self.mReqDic setObject:method forKey:@"method"];
        [data release];
        [method release];
        
    }
    return self;
}

@end
