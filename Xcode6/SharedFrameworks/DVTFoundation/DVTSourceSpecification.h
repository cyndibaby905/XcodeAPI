

#import <Foundation/Foundation.h>

@class NSDictionary, NSString;

@interface DVTSourceSpecification : NSObject
{
    NSString *_identifier;
    NSString *_superSpecIdentifier;
    DVTSourceSpecification *_superSpecification;
    NSDictionary *_properties;
}

+ (id)localizedSpecificationTypeName;
+ (id)specificationRegistry;
+ (id)specificationRegistryName;
+ (id)_subSpecificationsOfSpecification:(id)arg1;
+ (id)registeredSpecifications;
+ (id)specificationsForIdentifiers:(id)arg1;
+ (id)specificationForIdentifier:(id)arg1;
+ (void)registerSpecificationTypeBaseClass:(Class)arg1;
+ (id)registerSpecificationProxiesFromPropertyListsInDirectory:(id)arg1 recursively:(BOOL)arg2;
+ (id)registerSpecificationProxiesFromPropertyListsInDirectory:(id)arg1 recursively:(BOOL)arg2 inBundle:(id)arg3;
+ (BOOL)_shouldRecurseIntoDirectoryNamed:(id)arg1 ofType:(id)arg2;
+ (id)_registerSpecificationProxiesOfType:(id)arg1 fromDictionaryOrArray:(id)arg2 inDirectory:(id)arg3 bundle:(id)arg4 sourceDescription:(id)arg5;
+ (id)registerSpecificationProxyFromPropertyList:(id)arg1;
+ (id)_pathExensionsToTypesRegistry;
+ (id)_typesToSpecTypeBaseClassesRegistry;
+ (id)specificationTypePathExtensions;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (void)registerSpecificationOrProxy:(id)arg1;
+ (void)initialize;
+ (void)searchForAndRegisterAllAvailableSpecifications;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly) NSString *superSpecIdentifier; // @synthesize superSpecIdentifier=_superSpecIdentifier;
- (NSString *)description;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)name;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)_objectForKeyIgnoringInheritance:(id)arg1;
- (long long)nameCompare:(id)arg1;
- (long long)identifierCompare:(id)arg1;
- (id)subSpecifications;
- (BOOL)isKindOfSpecification:(id)arg1;
@property(readonly) DVTSourceSpecification *superSpecification; // @synthesize superSpecification=_superSpecification;
- (BOOL)isMissingSpecificationProxy;
- (id)initAsMissingSpecificationProxyWithIdentifier:(id)arg1 name:(id)arg2 description:(id)arg3;
- (id)initWithPropertyListDictionary:(id)arg1;

@end

