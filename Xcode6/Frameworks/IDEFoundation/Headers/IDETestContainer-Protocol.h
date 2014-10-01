

#import <Foundation/Foundation.h>

@class NSArray, NSSet;

@protocol IDETestContainer <NSObject>
@property(readonly, copy) NSArray *arrangedSubtests;
@property(readonly) BOOL canHaveSubtests;
@property(readonly, copy) NSSet *subtests;
@end

