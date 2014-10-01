

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@protocol IDETestableProvider <NSObject>
@property(readonly) NSString *name;
@property(readonly, copy) NSArray *testables;
- (id <IDETestable>)testableForBlueprint:(id <IDEBlueprint>)arg1;
@end

