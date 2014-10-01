

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEClientTracking-Protocol.h>

@class NSMutableSet, NSString;

@interface IDEConcreteClientTracker : NSObject <IDEClientTracking>
{
    NSMutableSet *_clientTrackingTokensRequiringCancellation;
    NSMutableSet *_clientTrackingTokensRequiringCancellationPrompt;
    NSMutableSet *_clientTrackingTokensNotSupportingCancellation;
    BOOL _isCancelling;
}

- (void)_clientCancellationTimeout;
- (void)cancelTrackedClients;
- (void)unregisterClient:(id)arg1;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)registerUncancellableClientWithName:(id)arg1;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

