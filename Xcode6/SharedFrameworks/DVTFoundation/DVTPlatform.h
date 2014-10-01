

#import <Foundation/Foundation.h>

@class DVTExtendedPlatformInfo, DVTFilePath, DVTHashTable, DVTPlatformFamily, DVTVersion, NSArray, NSDictionary, NSSet, NSString;

@interface DVTPlatform : NSObject
{
    NSString *_identifier;
    NSArray *_alternateNames;
    NSString *_name;
    DVTPlatformFamily *_family;
    DVTVersion *_minimumSDKVersion;
    NSString *_platformDirectoryName;
    DVTFilePath *_platformPath;
    NSString *_userDescription;
    BOOL _isDeploymentPlatform;
    DVTFilePath *_iconPath;
    NSDictionary *_propertyListDictionary;
    NSDictionary *_internalPropertyListDictionary;
    DVTHashTable *_SDKs;
    NSDictionary *_deviceProperties;
    NSString *_platformVersion;
}

+ (id)_preferredArchitectureForPlatformWithIdentifier:(id)arg1;
+ (void)_loadPlatformAtPath:(id)arg1;
+ (id)_propertyDictionaryForPlatformAtPath:(id)arg1;
+ (void)_mapPlatformPath:(id)arg1 toPlatform:(id)arg2;
+ (id)_allPlatformsByIdentifierValues;
+ (void)_mapPlatformIdentifier:(id)arg1 toPlatform:(id)arg2;
+ (void)_mapPlatformName:(id)arg1 toPlatform:(id)arg2 isAlias:(BOOL)arg3;

+ (NSArray *)extraPlatformFolders;
+ (instancetype)defaultPlatform;
+ (BOOL)loadAllPlatformsReturningError:(NSError **)error;
+ (NSArray *)allPlatforms;
+ (void)registerPlatform:(DVTPlatform *)platform;
+ (instancetype)platformForPath:(DVTFilePath *)path;
+ (instancetype)platformForIdentifier:(NSString *)identifier;
+ (instancetype)platformForUserDescription:(NSString *)userDesc;
+ (instancetype)platformForName:(NSString *)name;
+ (void)initialize;
@property(readonly, copy) NSString *platformVersion; // @synthesize platformVersion=_platformVersion;
@property(readonly, copy) NSDictionary *deviceProperties; // @synthesize deviceProperties=_deviceProperties;
@property(readonly) DVTFilePath *iconPath; // @synthesize iconPath=_iconPath;
@property(readonly) BOOL isDeploymentPlatform; // @synthesize isDeploymentPlatform=_isDeploymentPlatform;
@property(readonly, copy) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(readonly) DVTFilePath *platformPath; // @synthesize platformPath=_platformPath;
@property(readonly, copy) NSString *platformDirectoryName; // @synthesize platformDirectoryName=_platformDirectoryName;
@property(readonly) DVTVersion *minimumSDKVersion; // @synthesize minimumSDKVersion=_minimumSDKVersion;
@property(readonly) DVTPlatformFamily *family; // @synthesize family=_family;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSArray *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (NSString *)description;
@property(readonly, copy) NSSet *SDKs;
- (void)addSDK:(id)arg1;
- (id)internalPropertyListDictionary;
- (id)propertyListDictionary;
- (instancetype)initWithPath:(DVTFilePath *)path;
- (id)initWithPropertyListDictionary:(id)plist path:(id)path;
@property(readonly) DVTExtendedPlatformInfo *dvt_extendedInfo;

@end

