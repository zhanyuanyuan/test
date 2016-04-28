//
//  Person1.h
//  Day01_OC_class
//
//  Created by lk on 16/2/25.
//  Copyright © 2016年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person1 : NSObject
{
    NSString* name;
    int age;
}
-(void)setName:(NSString*)name1;
-(NSString*)getName;
-(void)eat;
-(void)sleep;
-(void)daren;
@end
