

#import <Foundation/Foundation.h>

@class DVTPerformanceMetric;

@interface IDESnapshotsManager : NSObject
{
    BOOL _areSnapshotsEnabled;
    DVTPerformanceMetric *_metric;
}

+ (id)sourceControlSystemUsedForSnapshotsWithError:(id *)arg1;
+ (id)snapshotsLogAspect;
+ (id)sharedManager;
- (id)restoreSnapshot:(id)arg1 fromRepositoryAtPath:(id)arg2 toLocation:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)tmpFileForFileAtOriginalLocation:(id)arg1 fromSnapshot:(id)arg2 fromRepositoryAtPath:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)modifiedFilesBetweenSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2 fromRepositoryAtPath:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)snapshotsForRepositoryAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property BOOL areSnapshotsEnabled; // @synthesize areSnapshotsEnabled=_areSnapshotsEnabled;
- (id)snapshotsFolderPath;
- (id)snapshotExtension;

@end

