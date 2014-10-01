

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEClientTracking-Protocol.h>

@class IDEConcreteClientTracker, NSString;

@interface IDEAppClientTracker : NSObject <IDEClientTracking>
{
    IDEConcreteClientTracker *_clientTracker;
}

+ (id)sharedAppClientTracker;
- (void)cancelTrackedClients;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)registerUncancellableClientWithName:(id)arg1;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

