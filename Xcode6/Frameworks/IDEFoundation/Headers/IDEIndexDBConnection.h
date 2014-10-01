

#import <IDEFoundation/IDEIndexDBSQLStream.h>

@class IDEIndexDatabase, NSMutableSet;

@interface IDEIndexDBConnection : IDEIndexDBSQLStream
{
    IDEIndexDatabase *_database;
    dispatch_queue_t _runQueue;
    struct sqlite3 *_dbHandle;
    CDUnknownBlockType _cancelCallback;
    long long _tempTableCount;
    NSMutableSet *_tempTables;
    BOOL _closing;
    void *_checkpointInfo;
    int _inUseCount;
    int _collectionCount;
}

+ (void)initialize;
- (id)database;
- (void)dealloc;
- (void)close;
- (void)wait;
- (void)reportSQLiteError:(int)arg1 function:(id)arg2 message:(const char *)arg3 info:(id)arg4;
- (void)finalizeSQLiteStmt:(struct sqlite3_stmt **)arg1;
- (void)runSQLiteStmt:(struct sqlite3_stmt **)arg1 sql:(id)arg2 bindings:(CDUnknownBlockType)arg3 forEachRow:(CDUnknownBlockType)arg4 whenDone:(CDUnknownBlockType)arg5;
- (void)cancelWhen:(CDUnknownBlockType)arg1;
- (BOOL)shouldCancel;
- (void)shutdown;
- (void)runSQLite:(id)arg1;
- (void)willSubmitTransaction:(id)arg1;
- (void)explainQueryPlan:(id)arg1;
- (int)doSQLChanges:(id)arg1 withBindings:(CDUnknownBlockType)arg2;
- (void)doSQLQuery:(id)arg1 withBindings:(CDUnknownBlockType)arg2 forEachRow:(CDUnknownBlockType)arg3;
- (void)didDropTempTable:(id)arg1;
- (void)didCreateTempTable:(id)arg1;
- (id)newTempTableWithName:(id)arg1 schema:(id)arg2;
- (id)newTempTableWithSchema:(id)arg1;
- (id)newTempTableName;
- (void)doBlock:(CDUnknownBlockType)arg1;
- (id)dbConnection;
- (void)setAutoCheckpointThreshold:(int)arg1;
- (id)initWithDatabase:(id)arg1 create:(BOOL)arg2 backgroundPriority:(BOOL)arg3;

@end

