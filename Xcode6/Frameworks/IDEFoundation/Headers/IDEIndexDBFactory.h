

#import <Foundation/Foundation.h>

@class IDEIndexDBTransaction, NSString;

@interface IDEIndexDBFactory : NSObject
{
    IDEIndexDBTransaction *_dbTransaction;
    NSString *_tableName;
    NSString *_columnNames;
    NSString *_values;
    NSString *_insertionSQL;
    struct sqlite3_stmt *_dbStatement;
    long long *_objectIdMap;
    long long _objectIdCount;
    long long _objectCount;
    NSString *_tempTableName;
    NSString *_insertionSQL2;
    struct sqlite3_stmt *_dbStatement2;
}

+ (void)initialize;
@property(readonly, nonatomic) long long objectCount; // @synthesize objectCount=_objectCount;
@property(readonly, nonatomic) IDEIndexDBTransaction *dbTransaction; // @synthesize dbTransaction=_dbTransaction;
- (void)dealloc;
- (void)close;
- (long long)realObjectIdForId:(long long)arg1;
- (void)addObjectId:(long long *)arg1 withBindings:(CDUnknownBlockType)arg2;
- (id)initWithTransaction:(id)arg1 table:(id)arg2 columns:(id)arg3;

@end

