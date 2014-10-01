

#import <DVTFoundation/DVTDownloadableOperation.h>

@class DVTDownloadable, DVTDownloadableManager;

@interface DVTDownloadableOperationDownload : DVTDownloadableOperation
{
    DVTDownloadableManager *_manager;
    DVTDownloadable *_downloadable;
    struct AuthorizationOpaqueRef *_authRef;
}

@property(readonly) DVTDownloadable *downloadable; // @synthesize downloadable=_downloadable;
- (void)cancel;
- (void)downloadableOperationMain;
- (void)setError:(id)arg1;
- (id)initWithDownloadable:(id)arg1 userRequested:(BOOL)arg2 authorization:(struct AuthorizationOpaqueRef *)arg3 manager:(id)arg4;

@end

