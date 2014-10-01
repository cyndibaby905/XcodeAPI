

#import <DVTFoundation/DVTDeveloperPaths.h>

@class DVTFilePath;

@interface IDEDeveloperPaths : DVTDeveloperPaths
{
    DVTFilePath *_distributionArchivesLocation;
    id _distributionArchivesLocationNotificatonToken;
    id _distributionArchivesSourceTreesNotificationToken;
    DVTFilePath *_snapshotsDirectory;
    id _snapshotsDirectoryNotificatonToken;
    id _snapshotsDirectorySourceTreesNotificationToken;
}

- (id)templateSearchPath;
- (id)defaultWorkspaceDerivedDataLocation;
- (id)defaultDistributionArchivesLocation;
- (id)distributionArchivesLocation;
- (id)defaultSnapshotsDirectory;
- (id)snapshotsDirectory;
- (id)corePlugInSearchPathForPlatform:(id)arg1;

@end

