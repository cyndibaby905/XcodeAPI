

#import <IDEFoundation/IDEIndexDBSQLStream.h>

@class NSMutableArray;

@interface IDEIndexDBTransaction : IDEIndexDBSQLStream
{
    NSMutableArray *_runQueue;
    IDEIndexDBSQLStream *_parent;
    NSMutableArray *_dbFactories;
}

@property(retain, nonatomic) IDEIndexDBSQLStream *parent; // @synthesize parent=_parent;
- (void)submit;
- (void)closeFactories;
- (id)newFactoryForTable:(id)arg1 columns:(id)arg2;
- (void)doBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long queueSize;
- (id)dbConnection;
- (id)init;

@end

