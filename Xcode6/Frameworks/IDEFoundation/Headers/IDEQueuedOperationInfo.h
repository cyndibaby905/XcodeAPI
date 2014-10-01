

#import <Foundation/Foundation.h>

@class DVTOperation, IDEExecutionOperationTracker, NSArray, NSMutableArray, NSString;

@interface IDEQueuedOperationInfo : NSObject
{
    NSMutableArray *_buildOperations;
    BOOL _isRunning;
    NSString *_commandName;
    IDEExecutionOperationTracker *_tracker;
}

@property BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain) IDEExecutionOperationTracker *tracker; // @synthesize tracker=_tracker;
@property(copy) NSString *commandName; // @synthesize commandName=_commandName;
- (NSString *)description;
- (void)removeBuildOperation:(id)arg1;
- (BOOL)containsBuildOperation:(id)arg1;
@property(readonly, copy) NSArray *buildOperations;
@property(readonly) DVTOperation *topLevelOperation;
- (id)initWithCommandName:(id)arg1 tracker:(id)arg2;
- (id)initWithCommandName:(id)arg1 tracker:(id)arg2 buildOperations:(id)arg3;

@end

