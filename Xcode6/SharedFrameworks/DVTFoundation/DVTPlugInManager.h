

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTPlugInLocator;

@interface DVTPlugInManager : NSObject

+ (void)_setDefaultPlugInManager:(DVTPlugInManager *)manager;
- (id)_invalidExtensionWithIdentifier:(id)arg1;
- (id)_plugInCachePath;
- (id)_applicationCachesPath;
- (id)_toolsVersionName;
- (void)_createPlugInObjectsFromCache;
- (BOOL)_savePlugInCacheWithScanRecords:(id)arg1 error:(id *)arg2;
- (BOOL)_removePlugInCacheAndReturnError:(id *)arg1;
- (BOOL)_removePlugInCacheAtPath:(id)arg1 error:(id *)arg2;
- (id)_plugInCacheSaveFailedErrorWithUnderlyingError:(id)arg1;
- (BOOL)_loadPlugInCache:(id *)arg1;
- (BOOL)_cacheCoversPlugInsWithScanRecords:(id)arg1;
- (id)_modificationDateOfFileAtPath:(id)arg1;
- (void)_preLoadPlugIns;
- (BOOL)_checkPresenceOfRequiredPlugIns:(id)arg1 error:(id *)arg2;
- (void)_registerPlugInsFromScanRecords:(id)arg1;
- (void)_pruneUnusablePlugInsAndScanRecords:(id)arg1;
- (id)_plugInsToIgnore;
- (void)_recordSanitizedPluginStatus:(id)arg1 errorMessage:(id)arg2;
- (void)_addSanitizedNonApplePlugInStatusForBundle:(id)arg1 reason:(id)arg2;
- (void)_createPlugInObjectsFromScanRecords:(id)arg1;
- (void)_applyActivationRulesToScanRecords:(id)arg1;
- (id)_scanForPlugInsInDirectories:(id)arg1 skippingDuplicatesOfPlugIns:(id)arg2;
- (BOOL)_scanForPlugIns:(id *)arg1;
- (id)_scanRecordForBundle:(id)arg1 atPath:(id)arg2;
- (BOOL)_isInitialScan;
- (id)_defaultPathExtensions;
- (id)_defaultApplicationSupportSubdirectory;
- (id)_extensionsForExtensionPoint:(id)arg1 matchingPredicate:(id)arg2;
- (id)_hostAppName;
- (id)_hostAppContainingPath;

+ (BOOL)enumerateExtensionDataForPluginAtPath:(NSString *)path error:(NSError **)error withBlock:(CDUnknownBlockType)block;
+ (instancetype)defaultPlugInManager;
@property(retain) DVTPlugInLocator *plugInLocator; // @synthesize plugInLocator=_plugInLocator;
@property BOOL shouldClearPlugInCaches; // @synthesize shouldClearPlugInCaches=_shouldClearPlugInCaches;
@property(readonly) BOOL usePlugInCache;
- (BOOL)shouldPerformConsistencyCheck;
@property(readonly) NSSet *sanitizedNonApplePlugInStatuses;
@property(readonly, copy) NSUUID *plugInHostUUID;
@property BOOL hasScannedForPlugIns; // @dynamic hasScannedForPlugIns;
@property(readonly, copy) NSArray *defaultSearchPaths;
@property(readonly, copy) NSArray *extraSearchPaths;
- (id)sharedExtensionsForExtensionPoint:(id)point matchingPredicate:(id)predicate;
- (id)sharedExtensionWithIdentifier:(id)identifier;
- (id)extensionWithIdentifier:(id)identifier;
- (id)extensionPointWithIdentifier:(id)identifier;
- (id)plugInWithIdentifier:(id)identifier;
- (BOOL)scanForPlugIns:(id *)arg1;
- (instancetype)init;

// Remaining properties
@property(copy) NSSet *defaultPlugInCapabilities; // @dynamic defaultPlugInCapabilities;
@property(copy) NSSet *exposedCapabilities; // @dynamic exposedCapabilities;
@property(readonly) NSMutableSet *mutableDefaultPlugInCapabilities; // @dynamic mutableDefaultPlugInCapabilities;
@property(readonly) NSMutableSet *mutableExposedCapabilities; // @dynamic mutableExposedCapabilities;
@property(readonly) NSMutableSet *mutablePathExtensions; // @dynamic mutablePathExtensions;
@property(readonly) NSMutableSet *mutableRequiredPlugInIdentifiers; // @dynamic mutableRequiredPlugInIdentifiers;
@property(readonly) NSMutableArray *mutableSearchPaths; // @dynamic mutableSearchPaths;
@property(copy) NSSet *pathExtensions; // @dynamic pathExtensions;
@property(copy) NSSet *requiredPlugInIdentifiers; // @dynamic requiredPlugInIdentifiers;
@property(copy) NSArray *searchPaths; // @dynamic searchPaths;

@end

