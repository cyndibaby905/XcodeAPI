

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEClientTrackingToken-Protocol.h>

@class NSArray, NSString;

@protocol IDEClientTracking <NSObject>
- (void)cancelTrackedClients;
- (NSArray *)clientsNotSupportingCancellation;
- (NSArray *)clientsRequiringCancellationPrompt;
- (id <IDEClientTrackingToken>)registerUncancellableClientWithName:(NSString *)arg1;
- (id <IDEClientTrackingToken>)registerClientWithName:(NSString *)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(void (^)(void))arg3;
@end

