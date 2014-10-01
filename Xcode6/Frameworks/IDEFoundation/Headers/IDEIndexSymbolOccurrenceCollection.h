

#import <IDEFoundation/IDEIndexCollection.h>

@class IDEIndexSymbol;

@interface IDEIndexSymbolOccurrenceCollection : IDEIndexCollection
{
    IDEIndexSymbol *_correspondingSymbol;
}

@property(retain, nonatomic) IDEIndexSymbol *correspondingSymbol; // @synthesize correspondingSymbol=_correspondingSymbol;
- (id)instantiateRow:(struct sqlite3_stmt *)arg1;
- (id)tempTableSchema;

@end

