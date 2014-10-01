

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class IDEIndexDBTempTable, NSArray;

@interface IDEIndexCollection : NSObject <NSFastEnumeration>
{
    IDEIndexDBTempTable *_tempTable;
    NSArray *_instantiatedRows;
    Class _expectedClass;
}

@property(readonly, nonatomic) IDEIndexDBTempTable *tempTable; // @synthesize tempTable=_tempTable;
- (id)uniqueObjects;
- (id)onlyObject;
- (id)firstObject;
- (id)instantiateRow:(struct sqlite3_stmt *)arg1;
- (id)tempTableSchema;
- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)instantiateRowsUpto:(unsigned long long)arg1;
- (void)dealloc;
- (void)dropTempTable;
- (NSString *)description;
- (void)setExpectedClass:(Class)arg1;
- (BOOL)_checkExpectedClass:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithArrayNoCopy:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

