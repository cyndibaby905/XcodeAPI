

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTLogAspect, DVTStackBacktrace;

@protocol DVTSigningCertificateSourceDelegate;

@interface DVTSigningCertificateSource : NSObject <DVTInvalidation>
{
    id <DVTSigningCertificateSourceDelegate> _delegate;
    DVTLogAspect *_logAspect;
}

+ (void)initialize;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain, nonatomic) id <DVTSigningCertificateSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_keychainUnknownEvent;
- (void)_keychainKeyAddedOrDeleted;
- (void)_keychainCertificateDeleted:(struct OpaqueSecCertificateRef *)arg1;
- (void)_keychainCertificateAdded:(struct OpaqueSecCertificateRef *)arg1;
- (void)_stopListeningForKeychainEvents;
- (void)_startListeningForKeychainEvents;
- (id)_fetchSigningCertificates;
- (id)allSigningCertificates;
- (id)initWithLogAspect:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

