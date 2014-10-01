

#import <Foundation/Foundation.h>

@class DVTFilePath, IDESnapshotItem, NSArray;

@interface IDESnapshotsRestoreContext : NSObject
{
    IDESnapshotItem *_snapshot;
    DVTFilePath *_repositoryPath;
    DVTFilePath *_exportLocation;
    NSArray *_pathsToRestore;
}

+ (id)contextWithSnapshot:(id)arg1 repositoryPath:(id)arg2 exportLocation:(id)arg3 pathsToRestore:(id)arg4;
@property(retain) NSArray *pathsToRestore; // @synthesize pathsToRestore=_pathsToRestore;
@property(retain) DVTFilePath *exportLocation; // @synthesize exportLocation=_exportLocation;
@property(retain) DVTFilePath *repositoryPath; // @synthesize repositoryPath=_repositoryPath;
@property(retain) IDESnapshotItem *snapshot; // @synthesize snapshot=_snapshot;

@end

