

#import <DVTFoundation/DTDKDeveloperPortalService.h>

@class NSData;

@interface DTDKCertificateAuthorityService : DTDKDeveloperPortalService
{
    NSData *_certificateData;
}

- (void)_internalExecute;
+ (id)_serviceForURL:(NSURL *)url;

+ (instancetype)serviceForDeveloperID;
+ (instancetype)serviceForWWDR;

@property(retain) NSData *certificateData; // @synthesize certificateData=_certificateData;

@end

