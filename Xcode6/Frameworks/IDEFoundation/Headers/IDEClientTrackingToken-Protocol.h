

#import <Foundation/Foundation.h>

@class NSString;

@protocol IDEClientTrackingToken <NSObject>
@property(readonly) NSString *clientName;
- (void)unregisterClient;
@end

