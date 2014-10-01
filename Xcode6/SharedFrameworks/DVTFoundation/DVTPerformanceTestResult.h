

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTPerformanceTestResult : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_value;
}

@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

