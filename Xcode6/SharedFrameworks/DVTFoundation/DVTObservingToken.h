

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTObservingToken : NSObject <DVTCancellable>
{
    BOOL _isCancelled;
    void *_keepSelfAliveUntilPrimitiveCancellationRef;
    DVTStackBacktrace *_creationBacktrace;
}

+ (void)initialize;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (void)dealloc;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (void)_primitiveCancelObservation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

