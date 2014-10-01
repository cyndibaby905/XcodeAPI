

#import <IDEFoundation/IDESourceControlTreeItem.h>

@class DVTFilePath, NSMutableDictionary;

@interface IDESourceControlWorkingTreeItem : IDESourceControlTreeItem
{
    DVTFilePath *_filePath;
    NSMutableDictionary *_statusForKeyDictionary;
    BOOL _edited;
}

+ (BOOL)automaticallyNotifiesObserversOfConflictStateForUpdateOrMerge;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlLocalStatus;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void)setSourceControlStatus:(int)arg1 forKey:(id)arg2;
- (int)sourceControlStatusForKey:(id)arg1;
- (id)blameEntriesForRevisionNumber:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)temporaryFileForBranchName:(id)arg1 revisionNumber:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)currentRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
@property BOOL edited; // @synthesize edited=_edited;
- (void)setConflictStateForUpdateOrMerge:(unsigned long long)arg1;
- (void)setSourceControlServerStatus:(int)arg1;
- (void)setSourceControlLocalStatus:(int)arg1;
- (id)ideModelObjectTypeIdentifier;
- (void)repositoryURLStringAtBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)repositoryURLString;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1;

@end

