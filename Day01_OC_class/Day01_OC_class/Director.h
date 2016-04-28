//
//  Director.h
//  Day01_OC_class
//
//  Created by lk on 16/2/25.
//  Copyright © 2016年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person1.h"
@interface Director : Person1
{
   // BOOL _isJinMa;
}
-void(setIsJinMa:(BOOL)IsJinMa);


-(BOOL)getInJinMa;

-(void)paiFile:(NSString*)fileName;

@end
