

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@interface DVTPerformanceTestOutput : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_results;
}

@property(readonly) NSArray *results; // @synthesize results=_results;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 results:(id)arg2;
- (id)initWithTestClass:(id)arg1 testMethod:(id)arg2 performanceMetricName:(id)arg3 unitOfMeasurement:(id)arg4 measurements:(id)arg5;

@end

