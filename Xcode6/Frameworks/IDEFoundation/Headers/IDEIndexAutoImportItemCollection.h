

#import <IDEFoundation/IDEIndexCollection.h>

@class DVTSourceCodeSymbolKind;

@interface IDEIndexAutoImportItemCollection : IDEIndexCollection
{
    DVTSourceCodeSymbolKind *_symbolKind;
}

@property(retain, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
- (id)instantiateRow:(struct sqlite3_stmt *)arg1;
- (id)tempTableSchema;

@end

