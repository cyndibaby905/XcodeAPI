

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTOperation, DVTStackBacktrace, IDESourceControlRepository, IDESourceControlRequest, NSError, NSMutableData, NSString, NSURLAuthenticationChallenge, NSURLConnection;

@interface IDESourceControlCredentialsValidator : NSObject <DVTInvalidation>
{
    NSURLAuthenticationChallenge *_challenge;
    NSURLConnection *_connection;
    NSMutableData *m_receivedData;
    BOOL _testSSLCertificate;
    BOOL _wasOriginallyAuthenticationRequest;
    IDESourceControlRequest *_currentRequest;
    BOOL _canShowCertificatePanel;
    int _requestType;
    IDESourceControlRepository *_repository;
    DVTOperation *_completionOperation;
    NSError *_currentError;
}

+ (void)initialize;
@property(retain) NSError *currentError; // @synthesize currentError=_currentError;
@property int requestType; // @synthesize requestType=_requestType;
@property(retain) DVTOperation *completionOperation; // @synthesize completionOperation=_completionOperation;
@property(readonly) __weak IDESourceControlRepository *repository; // @synthesize repository=_repository;
@property BOOL canShowCertificatePanel; // @synthesize canShowCertificatePanel=_canShowCertificatePanel;
- (void)primitiveInvalidate;
- (void)cancel;
- (void)callCompletionBlockWithError:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)writeAuthenticationHintsForChallenge:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)showCertificatePanelForChallenge:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performTestOfType:(int)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)validateCredentialsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

