

#import <Foundation/Foundation.h>

@class DVTWeakInterposer, NSArray;

@protocol DVTPackageInstallerHelperDelegate;

@interface DVTFirstLaunchPackageInstallationHelper : NSObject
{
    DVTWeakInterposer *_delegate_dvtWeakInterposer;
    BOOL _packagesOnly;
    NSArray *_packagesToInstall;
}

+ (void)initialize;
@property(retain) NSArray *packagesToInstall; // @synthesize packagesToInstall=_packagesToInstall;
- (id)_determinePackagesToInstall;
- (void)installPackagesWithAuthRef:(struct AuthorizationOpaqueRef *)arg1;
- (id)_downloadablesToInstall;
- (id)_packageURLsToInstall;
- (id)_allPackagesInPackagesFolder;
- (id)_allPackagesInfo;
- (BOOL)_needToInstallMobileDevicePackage:(id)arg1;
- (BOOL)_needToCheckMobileDevicePackage;
- (void)_createCacheFile;
- (id)_cacheFilePath;
- (id)darwinUserCacheDirectoryPath;
- (void)_createCacheFileIfNeeded:(id)arg1;
- (id)initWithDelegate:(id)arg1 packagesOnly:(BOOL)arg2;
@property __weak id <DVTPackageInstallerHelperDelegate> delegate;

@end

