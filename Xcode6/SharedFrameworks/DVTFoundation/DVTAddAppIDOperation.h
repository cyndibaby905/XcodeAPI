

#import <DVTFoundation/DVTPortalOperation.h>

@interface DVTAddAppIDOperation : DVTPortalOperation
{
}

+ (id)operationWithSingleTeamToken:(id)arg1 name:(id)arg2 andPlatform:(id)arg3;
+ (id)operationWithSingleTeamToken:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 andPlatform:(id)arg4;
+ (id)operationWithSingleTeamToken:(id)arg1 name:(id)arg2 prefix:(id)arg3 bundleIdentifier:(id)arg4 andPlatform:(id)arg5;

@end

