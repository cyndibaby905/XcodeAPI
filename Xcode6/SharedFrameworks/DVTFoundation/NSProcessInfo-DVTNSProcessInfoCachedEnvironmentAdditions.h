

#import <Foundation/Foundation.h>

@interface NSProcessInfo (DVTNSProcessInfoCachedEnvironmentAdditions)
- (id)dvt_cachedEnvironment;
- (void)dvt_removeEnvironmentVariable:(id)arg1;
- (void)dvt_setValue:(id)arg1 forEnvironmentVariable:(id)arg2;
@end

