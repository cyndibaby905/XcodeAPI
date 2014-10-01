

#import <Foundation/Foundation.h>

@class DVTFilePath, IDEArchivedApplication, IDEArchivedContent, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface IDEArchive : NSObject
{
    DVTFilePath *_path;
    NSMutableDictionary *_infoDictionary;
    IDEArchivedContent *_archivedContent;
    BOOL _savePending;
    BOOL _estimateInProgress;
    NSArray *_topLevelDistributionItems;
}

+ (long long)_computedApproximateAppStoreFileSizeForArchiveContentPath:(id)arg1 forPlatform:(id)arg2;
+ (long long)_fileSizeForPathString:(id)arg1;
+ (BOOL)_zipDirectoryAtPath:(id)arg1 destination:(id)arg2 excluding:(id)arg3;
+ (id)_availableArchivePathInDirectory:(id)arg1 withName:(id)arg2 creationDate:(id)arg3 usingFileManager:(id)arg4;
+ (id)_archivePathOverride;
+ (id)_archivePlistPathForArchivePath:(id)arg1;
+ (BOOL)_copyProductDefinitionPlistFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_copydSYMsFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (id)_createArchiveWithName:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
+ (id)_folderPathForArchiveWithDate:(id)arg1;
+ (id)createArchiveWithName:(id)arg1 schemeName:(id)arg2 platform:(id)arg3 products:(id)arg4 auxiliaryFiles:(id)arg5 usingFileManager:(id)arg6 error:(id *)arg7;
+ (id)installArchiveWithArchivePath:(id)arg1 usingFileManager:(id)arg2;
+ (id)archiveWithArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingProductDefinitionPlistPath;
+ (id)_productDefinitionPlistPathForArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingDSYMDirectoryPath;
+ (id)_dSYMDirectoryPathForArchivePath:(id)arg1;
+ (id)keyPathsForValuesAffectingProductsDirectoryPath;
+ (id)_productsDirectoryPathForArchivePath:(id)arg1;
@property BOOL estimateInProgress; // @synthesize estimateInProgress=_estimateInProgress;
@property(readonly) IDEArchivedContent *archivedContent; // @synthesize archivedContent=_archivedContent;
@property(retain) DVTFilePath *path; // @synthesize path=_path;
- (id)topLevelDistributionItemsWithLogAspect:(id)arg1 error:(id *)arg2;
- (id)_distributionItemForPath:(id)arg1 pathsToItems:(id)arg2 pathsToChildPaths:(id)arg3 logAspect:(id)arg4 error:(id *)arg5;
- (id)expandedCustomEntitlementsForItemAtPath:(id)arg1 error:(id *)arg2;
- (void)estimateSizeInBackgroundForPlatform:(id)arg1;
- (void)_saveArchive:(id)arg1;
- (void)markDirty;
- (id)objectForEnterpriseDistributionKey:(id)arg1;
- (void)setObject:(id)arg1 forEnterpriseDistributionKey:(id)arg2;
@property(copy) NSDictionary *enterpriseDistributionManifest;
@property(copy) NSString *statusString;
@property(copy) NSString *comment;
@property long long estimatedAppStoreFileSize;
@property BOOL estimatedAppStoreFileSizeIsValid;
@property(readonly) NSDate *creationDate;
@property(readonly) unsigned long long version;
@property(readonly) NSString *schemeName;
@property(copy) NSString *name;
@property(readonly) DVTFilePath *productDefinitionPlistPath;
@property(readonly) DVTFilePath *dSYMDirectoryPath;
@property(readonly) DVTFilePath *productsDirectoryPath;
@property(readonly) NSMutableDictionary *infoDictionary;
@property(readonly) IDEArchivedApplication *application;
- (id)_initWithPath:(id)arg1 infoDictionary:(id)arg2;

@end

