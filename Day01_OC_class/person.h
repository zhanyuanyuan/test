//
//  person.h
//  Day01_OC_class[UIColor colorWithRed:1.0 green:0.0 blue:0.0 alpha:1.0]
//
//  Created by lk on 16/2/25.
//  Copyright © 2016年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    NSString* name;
    int age;
}
-(void)setName:(NSString*)name1;
-(NSString*)getName;
@end
