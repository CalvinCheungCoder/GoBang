//
//  AI.h
//  GoBang
//
//  Created by Calvin on 2017/7/24.
//  Copyright © 2017年 Calvin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHPoint.h"

typedef NS_ENUM(NSInteger, OccupyType) {
    OccupyTypeEmpty = 0,
    OccupyTypeUser,
    OccupyTypeAI ,
    OccupyTypeUnknown,
};

@interface DHPointData : NSObject

@property (nonatomic, strong) DHPoint *p;
@property (nonatomic, assign) int count;

- (id)initWithPoint:(DHPoint *)point count:(int)count;

@end

@interface DHOmni : NSObject

@property (nonatomic, strong) NSMutableArray *curBoard;
@property (nonatomic, assign) OccupyType oppoType;
@property (nonatomic, assign) OccupyType myType;

- (id)initWithArr:(NSMutableArray *)arr opp:(OccupyType)opp my:(OccupyType)my;
- (BOOL)isStepEmergent:(DHPoint *)pp Num:(int)num type:(OccupyType)xType;

@end


@interface AI : NSObject

+ (DHPoint *)geablog:(NSMutableArray *)board type:(OccupyType)type;
+ (DHPoint *)SeraphTheGreat:(NSMutableArray *)board type:(OccupyType)type;

@end
