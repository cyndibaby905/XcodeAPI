

#import <Foundation/Foundation.h>

@class DVTFilePath, DVTPlatform, DVTSearchPath, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface DVTSDK : NSObject
{
    DVTPlatform *_platform;
    NSString *_canonicalName;
    NSString *_displayName;
    NSString *_operatingSystemVersion;
    DVTFilePath *_sdkPath;
    NSString *_docSetFeedName;
    NSURL *_docSetFeedURL;
    NSString *_alternateSDKName;
    NSArray *_supportedBuildToolComponents;
    NSArray *_librarySearchPaths;
    NSDictionary *_infoDictionary;
    NSString *_propertyConditionName;
    NSString *_minimalDisplayName;
    NSDictionary *_defaultProperties;
    NSNumber *_isInternal;
    NSNumber *_isBaseSDK;
    DVTSearchPath *_commandLineToolSearchPath;
    NSDictionary *_versionInfo;
    NSArray *_toolchains;
    NSArray *_toolchainNames;
}

+ (id)_localizedSDKNameForCanonicalName:(id)arg1;
+ (id)_localizedFamilyNameForCanonicalName:(id)arg1;
+ (id)_absolutePathForSDKPathString:(id)arg1;
+ (void)_setSDK:(id)arg1 forCanonicalName:(id)arg2;
+ (id)_sdkForResolvedAbsolutePath:(id)arg1;
+ (void)_setSDK:(id)arg1 forResolvedAbsolutePath:(id)arg2;

+ (id)sdksInDirectory:(id)arg1 forPlatform:(id)arg2;
+ (instancetype)sdkInDirectory:(id)arg1 forPlatform:(id)arg2;
+ (instancetype)sdkForPath:(id)arg1 forceCreate:(BOOL)arg2;
+ (instancetype)sdkForPath:(id)arg1;
+ (BOOL)sdkForBootSystemRequiresSpecialTreatment;
+ (instancetype)sdkForBootSystemOrNil;
+ (instancetype)sdkForBootSystem;
+ (instancetype)sdkForNameOrPath:(id)arg1 withBasePath:(id)arg2 forceCreate:(BOOL)arg3;
+ (id)sdksForFamily:(id)arg1;
+ (instancetype)sdkForCanonicalName:(id)arg1;
+ (id)knownSDKs;
+ (BOOL)shouldAllowBootSystemSDK;
+ (void)initialize;
@property(readonly, copy) NSArray *toolchainNames; // @synthesize toolchainNames=_toolchainNames;
@property(readonly, copy) NSDictionary *defaultProperties; // @synthesize defaultProperties=_defaultProperties;
@property(readonly, copy) NSArray *toolchains; // @synthesize toolchains=_toolchains;
@property(readonly, copy) NSURL *docSetFeedURL; // @synthesize docSetFeedURL=_docSetFeedURL;
@property(readonly, copy) NSString *docSetFeedName; // @synthesize docSetFeedName=_docSetFeedName;
@property(readonly, copy) NSArray *librarySearchPaths; // @synthesize librarySearchPaths=_librarySearchPaths;
@property(readonly, copy) NSString *alternateSDKName; // @synthesize alternateSDKName=_alternateSDKName;
@property(readonly, copy) NSArray *supportedBuildToolComponents; // @synthesize supportedBuildToolComponents=_supportedBuildToolComponents;
@property(readonly, copy) NSString *propertyConditionName; // @synthesize propertyConditionName=_propertyConditionName;
@property(readonly, copy) NSString *minimalDisplayName; // @synthesize minimalDisplayName=_minimalDisplayName;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
@property(readonly, copy) DVTFilePath *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(readonly, copy) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly, copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (NSString *)description;
- (id)commandLineToolSearchPath;
@property(readonly) NSDictionary *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(readonly, getter=isBaseSDK) BOOL baseSDK;
@property(readonly, getter=isInternal) BOOL internal;
@property(retain) DVTPlatform *platform;
- (instancetype)initWithFilePath:(id)arg1;
- (instancetype)initWithFilePath:(id)arg1 infoDictionary:(id)arg2;

@end

