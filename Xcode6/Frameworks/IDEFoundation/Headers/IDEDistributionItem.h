

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTFilePath, IDEArchive, NSArray, NSDictionary, NSString;

@interface IDEDistributionItem : NSObject <NSCopying>
{
    BOOL _canHaveProvisioningProfile;
    IDEArchive *_archive;
    DVTFilePath *_path;
    IDEDistributionItem *_parent;
    NSArray *_childItems;
    NSString *_teamID;
    NSString *_appID;
    NSString *_appIDWithoutPrefix;
    NSDictionary *_infoDictionary;
    NSDictionary *_entitlements;
    NSDictionary *_archivedUserEntitlements;
}

+ (id)flattenDistributionItems:(id)arg1;
+ (id)embeddedProvisioningProfileForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)canHaveProvisioningProfileForItemAtPath:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
+ (unsigned int)machOFileTypeAtPath:(id)arg1 error:(id *)arg2;
+ (id)archivedUserEntitlementsForItemAtPath:(id)arg1 archive:(id)arg2 error:(id *)arg3;
+ (id)infoDictionaryForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)itemWithArchive:(id)arg1 path:(id)arg2 childItems:(id)arg3 logAspect:(id)arg4 error:(id *)arg5;
@property(readonly, nonatomic) BOOL canHaveProvisioningProfile; // @synthesize canHaveProvisioningProfile=_canHaveProvisioningProfile;
@property(readonly, nonatomic) NSDictionary *archivedUserEntitlements; // @synthesize archivedUserEntitlements=_archivedUserEntitlements;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly, nonatomic) NSString *appIDWithoutPrefix; // @synthesize appIDWithoutPrefix=_appIDWithoutPrefix;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property __weak IDEDistributionItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) DVTFilePath *path; // @synthesize path=_path;
@property(readonly, nonatomic) IDEArchive *archive; // @synthesize archive=_archive;
- (id)debugDescription;
- (NSString *)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *bundleID;
- (id)initWithArchive:(id)arg1 path:(id)arg2 infoDictionary:(id)arg3 canHaveProvisioningProfile:(BOOL)arg4 teamID:(id)arg5 appID:(id)arg6 appIDWithoutPrefix:(id)arg7 entitlements:(id)arg8 archivedUserEntitlements:(id)arg9 childItems:(id)arg10;

@end

