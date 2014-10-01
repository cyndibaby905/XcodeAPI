

#import <DVTFoundation/DVTOperation.h>

@class IDESchemeActionRecord;

@interface IDESchemeActionResultOperation : DVTOperation
{
    BOOL _isObservingIsExecuting;
    BOOL _isFinished;
    BOOL _isExecuting;
    DVTOperation *_trackingOperation;
    IDESchemeActionRecord *_schemeActionRecord;
    CDUnknownBlockType _actionCallbackBlock;
    CDUnknownBlockType _schemeActionResultComputationBlock;
}

+ (id)schemeActionResultOperationWithSchemeActionRecord:(id)arg1 trackingExecutionOfOperation:(id)arg2 actionCallbackBlock:(CDUnknownBlockType)arg3 schemeActionResultComputationBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isObservingIsExecuting; // @synthesize isObservingIsExecuting=_isObservingIsExecuting;
@property(copy) CDUnknownBlockType schemeActionResultComputationBlock; // @synthesize schemeActionResultComputationBlock=_schemeActionResultComputationBlock;
@property(copy) CDUnknownBlockType actionCallbackBlock; // @synthesize actionCallbackBlock=_actionCallbackBlock;
@property(retain) IDESchemeActionRecord *schemeActionRecord; // @synthesize schemeActionRecord=_schemeActionRecord;
@property(retain) DVTOperation *trackingOperation; // @synthesize trackingOperation=_trackingOperation;
- (void)_doCancellationCleanup;
- (void)main;
- (void)start;
- (BOOL)isConcurrent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end
