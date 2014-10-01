

#import <DVTFoundation/DVTOperationGroup.h>

@class IDEBuildOperation;

@interface IDEBuildOperationGroup : DVTOperationGroup
{
    IDEBuildOperation *_buildOperation;
}

+ (id)operationGroupWithSuboperations:(id)arg1;
+ (id)operationGroupWithBuildOperation:(id)arg1 otherOperations:(id)arg2;
@property(readonly) IDEBuildOperation *buildOperation; // @synthesize buildOperation=_buildOperation;

@end

