

#import <IDEFoundation/IDEContainer.h>

@class DVTDispatchLock;

@interface IDEFolder : IDEContainer
{
    DVTDispatchLock *_generationLock;
    int _superclassActivity;
    unsigned long long _updateOperationGeneration;
    BOOL _didSetSuperclassActivity;
    unsigned long long _readingCount;
}

+ (BOOL)supportsMultipleInstancesPerFilePath;
+ (BOOL)_observeContainerDataFilePathsForChanges;
+ (BOOL)_THREAD_shouldAddFileWithName:(id)arg1;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
+ (void)initialize;
- (void)primitiveInvalidate;
- (void)_respondToFileChangeOnDiskWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (void)_filePathDidChange:(id)arg1;
- (void)_decrementReadingCount;
- (void)_incrementReadingCount;
@property(readonly, nonatomic) BOOL isReading;
- (void)setActivity:(int)arg1;
- (id)_THREAD_fileNamesAtFilePath:(id)arg1;
- (void)_updateSubitemsWithFileNames:(id)arg1;
- (id)_itemBaseFilePathForFilePath:(id)arg1;
- (id)createRootGroup;

@end

