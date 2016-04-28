//
//  Person1.m
//  Day01_OC_class
//
//  Created by lk on 16/2/25.
//  Copyright © 2016年 lk. All rights reserved.
//

#import "Person1.h"

@implementation Person1
-(void)setName:(NSString*)name1
{
    name=name1;
}
-(NSString*)getName
{
    return name;
}
-(void)eat
{
    NSLog(@"吃饭");
}
-(void)sleep
{
    NSLog(@"睡觉");
}
-(void)daren
{
    NSLog(@"打人");
}
@end
