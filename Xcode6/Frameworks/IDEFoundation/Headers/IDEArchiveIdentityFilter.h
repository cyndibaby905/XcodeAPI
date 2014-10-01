

#import <Foundation/Foundation.h>

@class NSSet, NSString;

@interface IDEArchiveIdentityFilter : NSObject
{
    NSString *_identifier;
}

+ (id)filterWithIdentifier:(id)arg1;
+ (id)filterWithExtension:(id)arg1;
+ (id)allFilters;
+ (id)_createFilterFromExtension:(id)arg1;
+ (id)_identifiersToFiltersMapping;
+ (id)_extensionLock;
+ (id)_extensionPoint;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSSet *allowedCertificateTypes;
- (CDUnknownBlockType)identityComparator;
- (_Bool)shouldIncludeIdentity:(id)arg1;
- (id)initWithExtension:(id)arg1;

@end

