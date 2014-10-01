

#import <IDEFoundation/IDEIndexSymbolWithDefiningOccurrenceCollection.h>

@interface IDEIndexTestMethodCollection : IDEIndexSymbolWithDefiningOccurrenceCollection
{
    NSObject<NSFastEnumeration> *_classes;
    NSDictionary *_classesByID;
}

- (id)instantiateRow:(struct sqlite3_stmt *)arg1;
- (id)tempTableSchema;
- (void)setClasses:(id)arg1;

@end

