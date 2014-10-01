

#import <DVTFoundation/DVTPortalOperation.h>

@interface DVTDownloadProfileOperation : DVTPortalOperation
{
}

+ (id)operationWithSingleTeamToken:(id)arg1 appIdId:(id)arg2 andPlatform:(id)arg3;
+ (id)operationWithSingleTeamToken:(id)arg1 profileIds:(id)arg2 andPlatform:(id)arg3;
+ (id)operationWithSingleTeamToken:(id)arg1 profileId:(id)arg2 andPlatform:(id)arg3;
- (_Bool)_shouldRetryOnServiceError:(id)arg1;

@end

