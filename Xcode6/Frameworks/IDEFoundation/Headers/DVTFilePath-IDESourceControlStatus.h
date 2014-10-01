

#import <DVTFoundation/DVTFilePath.h>

@class NSArray;

@interface DVTFilePath (IDESourceControlStatus)
+ (id)containerTypeIdentifiersKeyedByImportantSubpaths;
+ (id)importantSubpathsKeyedByContainerTypeIdentifier;
@property(readonly) NSArray *IDESourceControl_importantSubpaths;
- (id)IDESourceControl_containerFilePathIncludingAssetCatalogs:(BOOL)arg1;
@property(readonly) DVTFilePath *IDESourceControl_containerFilePath;
- (void)removeAssociatedWorkingTree:(id)arg1;
- (void)associateWorkingTree:(id)arg1;
- (id)workingTree;
- (void)removeAssociatedWorkingTreeItem:(id)arg1;
- (void)associateWorkingTreeItem:(id)arg1;
- (id)workingTreeItem_createIfNecessary:(BOOL)arg1;
- (id)workingTreeItem;
- (void)workingTreeItemWithCompletionBlock:(CDUnknownBlockType)arg1;
@end

