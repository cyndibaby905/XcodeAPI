

#import <IDEFoundation/IDEContainerItem.h>

#import <IDEFoundation/IDEStructureEditing-Protocol.h>

@class DVTCopyOnWriteMutableArray, DVTFilePath, IDEContainer, NSArray, NSMutableArray, NSString;

@interface IDEGroup : IDEContainerItem <IDEStructureEditing>
{
    IDEContainer *_container;
    NSString *_name;
    DVTFilePath *_resolvedFilePath;
    DVTCopyOnWriteMutableArray *_subitems;
    BOOL _subitemsAreValid;
    BOOL _pendingAsynchronousUpdate;
    int _sourceControlLocalStatus;
    int _sourceControlServerStatus;
    unsigned long long _conflictStateForUpdateOrMerge;
}

+ (Class)_groupClassForGroup:(id)arg1;
+ (Class)_fileReferenceClassForFileReference:(id)arg1;
+ (Class)_groupClassForSubitems;
+ (Class)_fileReferenceClassForSubitems;
+ (id)_groupForFolderURL:(id)arg1 targetGroup:(id)arg2;
+ (id)_fileReferenceWithFileURL:(id)arg1 targetGroup:(id)arg2;
+ (BOOL)_shouldCreateContainerItemForFileURL:(id)arg1 isFolder:(char *)arg2;
+ (BOOL)automaticallyNotifiesObserversOfConflictStateForUpdateOrMerge;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlLocalStatus;
+ (BOOL)automaticallyNotifiesObserversOfSubitems;
+ (id)keyPathsForValuesAffectingConflictStateForUpdateOrMerge;
+ (id)keyPathsForValuesAffectingSourceControlServerStatus;
+ (id)keyPathsForValuesAffectingSourceControlLocalStatus;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, getter=isLocationKnown) BOOL locationKnown;
- (BOOL)createNewSubgroupAtIndex:(unsigned long long)arg1;
- (id)_availableNameBasedOn:(id)arg1;
- (id)_subgroupNamed:(id)arg1;
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (BOOL)canStructureEditName;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)structureEditRemoveSubitemsPreflightForIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (BOOL)structureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (id)structureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)structureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
- (BOOL)_acceptsItem:(id)arg1;
- (BOOL)_isSubitemOfItem:(id)arg1;
- (BOOL)allowRemovingContainerGroup;
- (void)_takeConfigurationFromGroup:(id)arg1;
- (void)_copyAndInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)primitiveInvalidate;
- (void)debugPrintInnerStructure;
- (void)_invalidateComputedSourceControlStatus;
- (void)_setConflictStateForUpdateOrMergeNeedsUpdate;
- (void)_setSourceControlServerStatusNeedsUpdate;
- (void)_setSourceControlLocalStatusNeedsUpdate;
- (void)_setConflictStateForUpdateOrMerge:(unsigned long long)arg1;
- (void)_setSourceControlServerStatus:(int)arg1;
- (void)_setSourceControlLocalStatus:(int)arg1;
- (unsigned long long)aggregateSourceControlConflictStatus;
- (int)aggregateSourceControlServerStatus;
- (int)aggregateSourceControlLocalStatus;
- (unsigned long long)conflictStateForUpdateOrMerge;
- (int)sourceControlServerStatus;
- (int)sourceControlLocalStatus;
- (void)invalidateComputedSubitems;
- (id)computedSubitemsWithOldSubitems:(id)arg1;
- (void)insertObject:(id)arg1 inGroupSubitemsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromGroupSubitemsAtIndex:(unsigned long long)arg1;
- (void)insertGroupSubitems:(id)arg1 atIndexes:(id)arg2;
- (void)removeGroupSubitemsAtIndexes:(id)arg1;
- (unsigned long long)countOfGroupSubitems;
- (id)objectInGroupSubitemsAtIndex:(unsigned long long)arg1;
@property(readonly) NSMutableArray *mutableSubitems;
- (void)_setSubitems:(id)arg1;
@property(readonly) NSArray *subitems;
- (id)_subitems;
@property(readonly) BOOL subitemsAreComputed;
@property(readonly) BOOL subitemsAreEditable;
- (id)resolvedFilePath;
- (void)_invalidateResolvedFilePath;
- (void)changePath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)_didSetContainer;
- (void)_setContainer:(id)arg1;
- (BOOL)_willSetContainer:(id)arg1;
- (id)container;
- (id)initWithPath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_addObject:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setNameFromUTF8String:(const char *)arg1 fromXMLUnarchiver:(id)arg2;
- (id)ideModelObjectTypeIdentifier;

@end

