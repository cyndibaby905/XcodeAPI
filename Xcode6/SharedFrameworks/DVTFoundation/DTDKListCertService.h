

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSArray;

@interface DTDKListCertService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingCertificateSerialNumber;
+ (id)guaranteedComprehensiveResponseKeys;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2;
- (BOOL)_handlePortalResultCode:(long long)arg1;
@property(readonly) NSArray *certificates;

@end

