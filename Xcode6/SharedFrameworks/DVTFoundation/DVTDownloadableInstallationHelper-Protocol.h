

#import <Foundation/Foundation.h>

@class NSString;

@protocol DVTDownloadableInstallationHelper <NSObject>
- (void)downloadableNamed:(NSString *)arg1 needsTerminationOfAppsWithBundleIdentifier:(NSString *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
@end

