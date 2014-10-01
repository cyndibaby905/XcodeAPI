

#import <Foundation/Foundation.h>

@interface IDESnapshotsEngine : NSObject
{
}

+ (void)fileAndDirectoryDifferencesBetweenPath:(id)arg1 andPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)beginRestoreOfSnapshot:(id)arg1 fromRepositoryAtPath:(id)arg2 toLocation:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)finishRestoreOfSnapshotWithContext:(id)arg1 exportedSnapshotLocation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)exportSnapshot:(id)arg1 fromRepositoryAtPath:(id)arg2 toLocation:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)_exportSnapshot:(id)arg1 toLocation:(id)arg2 tmpExportLocation:(id)arg3;
+ (id)_pathForTmpFiles;
+ (id)_removeFilePaths:(id)arg1 inPath:(id)arg2;
+ (id)_copyOrReplaceFilePaths:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
+ (BOOL)isPathValidForSnapshots:(id)arg1;
+ (id)_firstInterestingFilePathInLocation:(id)arg1;
+ (id)exportRequestForSnapshot:(id)arg1 fromRepositoryAtPath:(id)arg2 toLocation:(id)arg3;
+ (BOOL)commitSnapshot:(id)arg1 withCommitMessage:(id)arg2 error:(id *)arg3;
+ (BOOL)snapshotFiles:(id)arg1 toRepository:(id)arg2 error:(id *)arg3;
+ (id)filesToSnapshotInWorkspace:(id)arg1;
+ (id)consolidatedFilePathFromPaths:(id)arg1 workingTreesRoots:(id)arg2;
+ (BOOL)createSnapshotRepositoryAtPath:(id)arg1 forWorkspace:(id)arg2 error:(id *)arg3;
+ (void)performSyncGitRequest:(int)arg1 files:(id)arg2 repositoryPath:(id)arg3 message:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

