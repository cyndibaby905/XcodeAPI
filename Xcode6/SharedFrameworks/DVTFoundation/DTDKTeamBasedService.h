

#import <DVTFoundation/DTDKDeveloperPortalService.h>

@class NSString;

@interface DTDKTeamBasedService : DTDKDeveloperPortalService
{
}

+ (id)_service:(id)arg1 requestPropertyList:(id)arg2;
+ (id)_createRequestDictionaryForTeam:(id)arg1 andPlatform:(id)arg2;
+ (id)_createRequestDictionaryForTeam:(id)arg1;
- (void)_success;
- (void)_failure:(id)arg1;
@property(readonly, copy) NSString *platform;
@property(readonly, copy) NSString *teamID;

@end

