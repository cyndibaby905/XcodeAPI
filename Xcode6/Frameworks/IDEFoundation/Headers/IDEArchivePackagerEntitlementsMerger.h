

#import <Foundation/Foundation.h>

@interface IDEArchivePackagerEntitlementsMerger : NSObject
{
}

+ (id)genericallyDefinedProfileKeysToSkipWhenCopyingFromProfile;
+ (id)sharedMerger;
- (id)entitlementsByMergingProfileEntitlements:(id)arg1 appEntitlements:(id)arg2 bundleIdentifier:(id)arg3 warnings:(id)arg4 error:(id *)arg5;

@end

