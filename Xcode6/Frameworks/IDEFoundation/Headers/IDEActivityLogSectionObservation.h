

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IDEActivityLogSectionObservation : NSObject <DVTCancellable>
{
    CDUnknownBlockType _block;
}

+ (id)sharedNullObservation;
@property(readonly, copy) NSString *description;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (CDUnknownBlockType)block;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

