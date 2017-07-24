//
//  DHPoint.m
//  GoBang
//
//  Created by Calvin on 2017/7/24.
//  Copyright © 2017年 Calvin. All rights reserved.
//

#import "DHPoint.h"

@implementation DHPoint

- (id)initPointWith:(NSInteger)x y:(NSInteger)y {
    
    self = [self init];
    if (self) {
        self.x = x;
        self.y = y;
    }
    return self;
}

- (id)init {
    
    self = [super init];
    if (self) {
        self.x = -1;
        self.y = -1;
    }
    
    return self;
}

@end
