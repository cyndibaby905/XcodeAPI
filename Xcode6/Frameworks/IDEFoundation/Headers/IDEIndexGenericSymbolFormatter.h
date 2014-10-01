

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEIndexSymbolFormatter-Protocol.h>

@class NSString;

@interface IDEIndexGenericSymbolFormatter : NSObject <IDEIndexSymbolFormatter>
{
}

- (id)qualifiedDisplayNameForSymbol:(id)arg1;
- (id)displayNameForSymbol:(id)arg1;
- (id)initWithSourceCodeLanguage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

