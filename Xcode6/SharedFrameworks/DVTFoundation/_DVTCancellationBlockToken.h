

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellationBlockCompletion-Protocol.h>

@class NSCondition, NSString;

@interface _DVTCancellationBlockToken : NSObject <DVTCancellationBlockCompletion>
{
    NSCondition *_condition;
    CDUnknownBlockType _cancellationBlock;
}

@property(copy) CDUnknownBlockType cancellationBlock; // @synthesize cancellationBlock=_cancellationBlock;
- (void)runCancellatonBlockWithOperation:(id)arg1;
- (void)waitForCancellation;
- (id)initWithCancellationBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

