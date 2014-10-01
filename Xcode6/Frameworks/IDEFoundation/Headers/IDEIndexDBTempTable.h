

#import <Foundation/Foundation.h>

@class IDEIndexDBConnection, IDEIndexDatabase, NSString;

@interface IDEIndexDBTempTable : NSObject
{
    IDEIndexDBConnection *_dbConnection;
    NSString *_tableName;
    BOOL _readOnly;
    long long _count;
}

@property(readonly, nonatomic) IDEIndexDBConnection *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void)enumerateFromOffset:(long long)arg1 limit:(long long)arg2 forEachRow:(CDUnknownBlockType)arg3;
- (long long)count;
- (void)connectionDidClose;
- (void)drop;
- (int)insertSQLChanges:(id)arg1 withBindings:(CDUnknownBlockType)arg2;
- (void)dumpContents;
@property(readonly, nonatomic) IDEIndexDatabase *database;
- (NSString *)description;
- (id)initWithConnection:(id)arg1 name:(id)arg2 schema:(id)arg3;

@end

