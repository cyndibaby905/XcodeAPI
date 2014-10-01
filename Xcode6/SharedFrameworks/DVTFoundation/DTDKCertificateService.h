

#import <DVTFoundation/DTDKTeamBasedService.h>

@interface DTDKCertificateService : DTDKTeamBasedService
{
}

+ (id)_createRequestDictionaryForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3;
+ (id)_createRequestDictionaryForTeam:(id)arg1 andPlatform:(id)arg2;
- (void)_success;
- (void)_failure:(id)arg1;
@property(readonly) unsigned long long certificateType;

@end

