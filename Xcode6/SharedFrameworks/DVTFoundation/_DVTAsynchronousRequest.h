

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class NSString;

@interface _DVTAsynchronousRequest : NSObject <DVTCancellable>
{
    long long _type;
    CDUnknownBlockType _block;
}

+ (id)_scheduledRequestWithOrder:(long long)arg1 modes:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)_scheduledRequestWithDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_scheduledRequestWithDelay:(double)arg1 modes:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)_invokeBlock:(id)arg1;
- (id)_initWithBlock:(CDUnknownBlockType)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

