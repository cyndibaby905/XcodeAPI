

#import <IDEFoundation/IDEIndexContainerSymbol.h>

@interface IDEIndexCategorySymbol : IDEIndexContainerSymbol
{
}

- (id)relatedClass;
- (id)properties;
- (id)instanceVariables;
- (id)instanceMethods;
- (id)classMethods;

@end

