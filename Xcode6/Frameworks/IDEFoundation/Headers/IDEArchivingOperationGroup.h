

#import <DVTFoundation/DVTOperationGroup.h>

@class IDEArchivingOperation, IDEBuildOperationGroup;

@interface IDEArchivingOperationGroup : DVTOperationGroup
{
    IDEArchivingOperation *_archivingOperation;
    IDEBuildOperationGroup *_buildForArchiveOperation;
}

+ (id)operationGroupWithSuboperations:(id)arg1;
+ (id)operationGroupWithArchivingOperation:(id)arg1 otherOperations:(id)arg2;
@property(retain) IDEBuildOperationGroup *buildForArchiveOperation; // @synthesize buildForArchiveOperation=_buildForArchiveOperation;
@property(readonly) IDEArchivingOperation *archivingOperation; // @synthesize archivingOperation=_archivingOperation;

@end

