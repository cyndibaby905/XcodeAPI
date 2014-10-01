

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class NSString;

@interface DVTRescindCallbackObservingToken : NSObject <DVTCancellable>
{
    CDUnknownBlockType _callbackBlock;
}

+ (id)tokenAggregatingTokens:(id)arg1;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

