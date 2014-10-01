

#import <DVTFoundation/DTDKCertificateService.h>

@class NSArray;

@interface DTDKListCSRsService : DTDKCertificateService
{
}

+ (id)keyPathsForValuesAffectingCertRequests;
+ (id)serviceForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3;
@property(readonly) NSArray *certRequests;

@end

