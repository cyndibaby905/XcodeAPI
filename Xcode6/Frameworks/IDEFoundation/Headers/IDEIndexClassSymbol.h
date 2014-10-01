

#import <IDEFoundation/IDEIndexContainerSymbol.h>

@class IDEIndexCollection;

@interface IDEIndexClassSymbol : IDEIndexContainerSymbol
{
    IDEIndexCollection *_subClasses;
}

- (id)allInterfaces;
- (id)interfaces;
- (id)allProtocols;
- (id)protocols;
- (id)allOccurrencesOfMembers:(id)arg1;
- (id)allSubclasses;
- (id)subclasses;
- (id)allSuperclasses;
- (id)superclasses;
- (id)categories;
- (id)ibOutletCollectionProperties;
- (id)ibOutletCollectionVariables;
- (id)ibOutletCollections;
- (id)ibOutletProperties;
- (id)ibOutletVariables;
- (id)ibOutlets;
- (id)ibActionMethods;
- (id)properties;
- (id)instanceVariables;
- (id)classVariables;
- (id)instanceMethods;
- (id)classMethods;

@end

