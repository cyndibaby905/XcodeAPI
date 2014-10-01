

#import <DVTFoundation/DTDKCertificateService.h>

@class NSArray;

@interface DTDKDownloadCertService : DTDKCertificateService
{
}

+ (id)keyPathsForValuesAffectingCertificateSerialNumbers;
+ (id)keyPathsForValuesAffectingCertificateContents;
+ (id)keyPathsForValuesAffectingCertificates;
+ (id)serviceForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3;
@property(readonly) NSArray *certificateSerialNumbers;
@property(readonly) NSArray *certificateContents;
@property(readonly) NSArray *certificates;

@end

