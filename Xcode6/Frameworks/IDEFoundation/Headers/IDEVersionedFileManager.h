

#import <Foundation/Foundation.h>

@class DVTDispatchLock, NSMutableSet;

@interface IDEVersionedFileManager : NSObject
{
    unsigned long long _batchEditModeCounter;
    NSMutableSet *_workingCopiesWeHaveTouchedInBatchEditMode;
    DVTDispatchLock *_batchEditLock;
}

+ (id)_errorWithUnderlyingErrors:(id)arg1 type:(int)arg2;
+ (id)_errorDescriptionForType:(int)arg1;
+ (void)_callCompletionBlockWithResult:(BOOL)arg1 error:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)_delegatePerformBlock:(CDUnknownBlockType)arg1;
+ (void)setDelegate:(id)arg1 withDispatchQueue:(id)arg2;
+ (void)initialize;
- (void)moveItemsAtFilePaths:(id)arg1 toFilePaths:(id)arg2 inContext:(id)arg3 completionBlockDispatchQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)copyItemsAtFilePaths:(id)arg1 toFilePaths:(id)arg2 completionBlockDispatchQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addItemsAtFilePaths:(id)arg1 workspace:(id)arg2 force:(BOOL)arg3 completionBlockDispatchQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_addItemsAtFilePaths:(id)arg1 workspace:(id)arg2 force:(BOOL)arg3;
- (void)_addPathStrings:(id)arg1 toWorkingTree:(id)arg2;
- (void)removeItemsAtFilePaths:(id)arg1 moveToTrash:(BOOL)arg2 completionBlockDispatchQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)createDirectoryAtFilePath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 completionBlockDispatchQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;
- (void)dealloc;
- (void)setupBatchEditMode:(id)arg1;
- (BOOL)isInBatchEditMode;
- (void)endBatchEdits;
- (void)startBatchEdits;

@end
