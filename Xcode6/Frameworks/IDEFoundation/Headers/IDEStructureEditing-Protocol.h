

@class NSArray, NSIndexSet, NSString;

@protocol IDEStructureEditingContext;

@protocol IDEStructureEditing
- (BOOL)allowRemovingContainerGroup;
- (BOOL)structureEditSetName:(NSString *)arg1 inContext:(id <IDEStructureEditingContext>)arg2;
- (BOOL)canStructureEditName;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(NSIndexSet *)arg1 error:(id *)arg2;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(NSIndexSet *)arg1;
- (BOOL)structureEditSortSubitemsAtIndexes:(NSIndexSet *)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(NSIndexSet *)arg1 byNameOrByType:(BOOL)arg2;
- (NSArray *)structureEditInsertFileURLs:(NSArray *)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (BOOL)canStructureEditInsertFileURLs:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (NSArray *)structureEditInsertSubitems:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
@end

