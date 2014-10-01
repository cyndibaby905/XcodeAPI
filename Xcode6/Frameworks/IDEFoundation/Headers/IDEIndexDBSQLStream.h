

#import <Foundation/Foundation.h>

@class IDEIndexDBConnection, IDEIndexDatabase;

@interface IDEIndexDBSQLStream : NSObject
{
}

- (void)willSubmitTransaction:(id)arg1;
- (id)newTransaction;
- (void)doSQL1:(id)arg1 withBindings:(CDUnknownBlockType)arg2;
- (void)doSQL:(id)arg1;
- (void)doBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) IDEIndexDBConnection *dbConnection;
@property(readonly, nonatomic) IDEIndexDatabase *database;

@end

