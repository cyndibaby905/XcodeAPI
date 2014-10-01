

#import <IDEFoundation/IDEExecutionTracker.h>

@class DVTObservingToken, DVTOperation;

@interface IDEExecutionOperationTracker : IDEExecutionTracker
{
    DVTOperation *_operation;
    DVTObservingToken *_isFinishedObservingToken;
    BOOL _operationFinished;
}

@property(nonatomic) BOOL operationFinished; // @synthesize operationFinished=_operationFinished;
@property(retain) DVTOperation *operation; // @synthesize operation=_operation;
- (BOOL)isFinished;
- (void)cancelWithReason:(int)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithOperation:(id)arg1 serviceTier:(int)arg2;

@end

