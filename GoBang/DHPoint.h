//
//  DHPoint.h
//  GoBang
//
//  Created by Calvin on 2017/7/24.
//  Copyright © 2017年 Calvin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DHPoint : NSObject

@property (nonatomic, assign) NSInteger x;
@property (nonatomic, assign) NSInteger y;

- (id)initPointWith:(NSInteger)x y:(NSInteger)y;

@end
