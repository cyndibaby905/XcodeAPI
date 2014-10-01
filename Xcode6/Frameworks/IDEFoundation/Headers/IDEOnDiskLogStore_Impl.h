

#import <IDEFoundation/IDEOnDiskLogStore.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface IDEOnDiskLogStore_Impl : IDEOnDiskLogStore
{
    NSString *_rootDirectoryPath;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cachedLogs;
    NSOperationQueue *_asyncOperations;
    BOOL _preserveOldLogs;
}

+ (void)initialize;
- (BOOL)preserveOldLogs;
- (NSString *)description;
- (void)setPreserveOldLogs:(BOOL)arg1;
- (id)_pathForUniqueIdentifier:(id)arg1;
- (void)_removeAllButTheLatestLog;
- (void)_pruneLogsToLogStoreSizeLimit;
- (void)_removeLogRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_moveToRootDirectoryAtPath:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)addLog:(id)arg1 entityIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_saveLog:(id)arg1 logRecord:(id)arg2 toPath:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)_saveCacheWithError:(id *)arg1;
- (id)_cachePath;
- (id)testableSummariesPlistFilePathForActivityLogSection:(id)arg1;
- (id)rootDirectoryPath;
- (void)primitiveInvalidate;
- (id)initWithRootDirectoryAtPath:(id)arg1 error:(id *)arg2;

@end

