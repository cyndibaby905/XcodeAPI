

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class NSString;

@interface DVTBlockBasedCancellationToken : NSObject <DVTCancellable>
{
    unsigned char _cancelled;
    CDUnknownBlockType _block;
}

@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

