

#import <IDEFoundation/IDEIndexSymbol.h>

@class IDEIndexContainerSymbol;

@interface IDEIndexCallableSymbol : IDEIndexSymbol
{
    IDEIndexContainerSymbol *_containerSymbol;
}

- (id)callsCancelWhen:(CDUnknownBlockType)arg1;
- (id)calls;
- (id)typeOfArgument:(unsigned long long)arg1;
- (unsigned long long)numArguments;
- (id)returnType;
- (id)property;
- (id)overridingSymbols;
- (id)overriddenSymbols;
- (void)setContainerSymbol:(id)arg1;
- (id)containerSymbol;

@end

