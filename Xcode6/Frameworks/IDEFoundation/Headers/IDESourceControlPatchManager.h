

#import <Foundation/Foundation.h>

@class NSCache, NSMutableDictionary, NSOperationQueue;

@interface IDESourceControlPatchManager : NSObject
{
    NSCache *_temporaryDirectoriesMap;
    NSMutableDictionary *_recentPatches;
    NSOperationQueue *_queue;
}

+ (id)sharedPatchManager;
- (id)_managerDirectory;
- (id)uniqueTemporaryDirectory;
- (BOOL)_revertItem:(id)arg1 fromPatch:(id)arg2 atLocation:(id)arg3 withError:(id *)arg4;
- (id)baseRevisionForTree:(id)arg1 inPatch:(id)arg2;
- (id)importPatchAtURL:(id)arg1 toWorkspace:(id)arg2 withError:(id *)arg3;
- (void)modifiedFilePathsForRootFilePath:(id)arg1 patch:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)rootFilePathsForPatch:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_applyPatchToFileFromNode:(id)arg1 toFilePath:(id)arg2;
- (id)_restoreUntouchedFileFromNode:(id)arg1 toFilePath:(id)arg2;
- (void)restoreAncestorItem:(id)arg1 fromPatch:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)restoreOriginalItem:(id)arg1 fromPatch:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)revertPatch:(id)arg1 inWorkspace:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)createPatchForItems:(id)arg1 inWorkspace:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)createPatchForWorkingTree:(id)arg1 inWorkspace:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)createPatchForDiffDescriptors:(id)arg1 comparisonDocumentLocation:(id)arg2 inWorkspace:(id)arg3 atFilePath:(id)arg4 withName:(id)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (id)_recentPatchPathStringsForWorkspace:(id)arg1;
- (void)_saveRecentPatches:(id)arg1 forWorkspace:(id)arg2;
- (void)removeRecentPatch:(id)arg1 fromWorkspace:(id)arg2;
- (void)addRecentPatch:(id)arg1 forWorkspace:(id)arg2;
- (void)createPatchForWorkspace:(id)arg1 withName:(id)arg2 message:(id)arg3 atFilePath:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)createPatchForWorkspace:(id)arg1 withName:(id)arg2 message:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)listPatchesForWorkspace:(id)arg1;
- (id)init;

@end

