

#import <IDEFoundation/IDEIndexContainerSymbol.h>

@interface IDEIndexProtocolSymbol : IDEIndexContainerSymbol
{
}

- (id)allImplementingClasses;
- (id)implementingClasses;
- (id)subProtocols;
- (id)allSuperProtocols;
- (id)superProtocols;
- (id)properties;
- (id)instanceMethods;
- (id)classMethods;

@end

