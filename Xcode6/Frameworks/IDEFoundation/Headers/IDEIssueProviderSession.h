

#import <Foundation/Foundation.h>

@interface IDEIssueProviderSession : NSObject
{
    double _timestamp;
}

@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
- (id)init;

@end

