

#import <Foundation/Foundation.h>

@class NSString;

@interface _DVTDisallowFinishToken : NSObject
{
    NSString *_reason;
}

@property(copy) NSString *reason; // @synthesize reason=_reason;
- (NSString *)description;
- (id)initWithReason:(id)arg1;

@end

