

#import <DVTFoundation/DTDKCertificateService.h>

@class NSData, NSString;

@interface DTDKSubmitCSRService : DTDKCertificateService
{
    unsigned long long _certType;
    NSData *_certificateSigningRequest;
    NSString *_certificateEmail;
    NSString *_certificateCommonName;
}

+ (id)keyPathsForValuesAffectingCertificateRequestStatusString;
+ (id)keyPathsForValuesAffectingCertificateRequestStatusCode;
+ (id)keyPathsForValuesAffectingCertificateRequestID;
+ (id)serviceForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3 withCommonName:(id)arg4 andEmailAddress:(id)arg5;
+ (id)serviceForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3;
@property(copy) NSString *certificateCommonName; // @synthesize certificateCommonName=_certificateCommonName;
@property(copy) NSString *certificateEmail; // @synthesize certificateEmail=_certificateEmail;
@property(copy) NSData *certificateSigningRequest; // @synthesize certificateSigningRequest=_certificateSigningRequest;
@property unsigned long long certType; // @synthesize certType=_certType;
- (void)_internalExecute;
@property(readonly) NSString *certificateRequestStatusString;
@property(readonly) int certificateRequestStatusCode;
@property(readonly) NSString *certificateRequestID;

@end

