

#import <DVTFoundation/DVTPortalOperation.h>

@interface DVTDownloadCertificateOperation : DVTPortalOperation
{
    BOOL _shouldRetryDownload;
}

+ (id)operationWithSingleTeamToken:(id)arg1 certificateType:(unsigned long long)arg2 andPlatform:(id)arg3;
@property(nonatomic) BOOL shouldRetryDownload; // @synthesize shouldRetryDownload=_shouldRetryDownload;
- (_Bool)_shouldRetryOnServiceError:(id)arg1;
- (void)_failure:(id)arg1;

@end

