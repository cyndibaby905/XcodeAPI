

#import <DVTFoundation/DVTDownloadProfileOperation.h>

@interface DVTDownloadTeamProfileOperation : DVTDownloadProfileOperation
{
}

+ (id)operationWithSingleTeamToken:(id)arg1 appIdIds:(id)arg2 andPlatform:(id)arg3;
+ (id)operationWithSingleTeamToken:(id)arg1 appIdId:(id)arg2 andPlatform:(id)arg3;
- (_Bool)_shouldRetryOnServiceError:(id)arg1;

@end

