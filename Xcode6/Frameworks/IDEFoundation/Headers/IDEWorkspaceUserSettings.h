

#import <IDEFoundation/IDEWorkspaceSettings.h>

@class NSString;

@interface IDEWorkspaceUserSettings : IDEWorkspaceSettings
{
}

+ (BOOL)automaticallyNotifiesObserversForIssueFilterStyle;
+ (BOOL)automaticallyNotifiesObserversForLiveSourceIssuesEnabled;
+ (BOOL)automaticallyNotifiesObserversForHasAskedToTakeAutomaticSnapshotBeforeSignificantChanges;
+ (BOOL)automaticallyNotifiesObserversForTakeSnapshotsBeforeSignificantChanges;
+ (BOOL)automaticallyNotifiesObserversForSnapshotCustomLocation;
+ (BOOL)automaticallyNotifiesObserversForSnapshotLocationStyle;
+ (BOOL)automaticallyNotifiesObserversForCustomBuildIntermediatesPath;
+ (BOOL)automaticallyNotifiesObserversForCustomBuildProductsPath;
+ (BOOL)automaticallyNotifiesObserversForSharedBuildFolderName;
+ (BOOL)automaticallyNotifiesObserversForCustomBuildLocationType;
+ (BOOL)automaticallyNotifiesObserversForBuildLocationStyle;
+ (BOOL)automaticallyNotifiesObserversForDerivedDataCustomLocation;
+ (BOOL)automaticallyNotifiesObserversForDerivedDataLocationStyle;
- (void)loadSettings;
- (void)saveSettings;
@property int issueFilterStyle;
@property BOOL liveSourceIssuesEnabled;
@property BOOL hasAskedToTakeAutomaticSnapshotBeforeSignificantChanges;
@property BOOL takeSnapshotsBeforeSignificantChanges;
@property(retain) NSString *snapshotCustomLocation;
@property int snapshotLocationStyle;
@property(retain) NSString *customBuildIntermediatesPath;
@property(retain) NSString *customBuildProductsPath;
@property(retain) NSString *sharedBuildFolderName;
@property int customBuildLocationType;
@property int buildLocationStyle;
@property(retain) NSString *derivedDataCustomLocation;
@property int derivedDataLocationStyle;
- (id)settingsOwnership;

@end
