

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTExtension, DVTStackBacktrace, IDEIssueManager, IDEIssueProviderSession, NSString;

@interface IDEIssueProvider : NSObject <DVTInvalidation>
{
    IDEIssueManager *_issueManager;
    DVTExtension *_extension;
    IDEIssueProviderSession *_session;
}

+ (int)providerType;
+ (void)initialize;
@property(retain) IDEIssueProviderSession *_session; // @synthesize _session;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain) IDEIssueManager *issueManager; // @synthesize issueManager=_issueManager;
- (BOOL)allowsExistingIssuesToBeCoalesced;
- (BOOL)allowsNewIssuesToBeCoalesced;
@property(readonly) BOOL _filterIssuesByActiveScheme;
- (id)logDocumentLocationForIssue:(id)arg1;
- (id)activityLogRecordForIssue:(id)arg1;
- (void)endProviderSession;
- (void)startProviderSession;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)removeIssues:(id)arg1 forProviderContext:(id)arg2;
- (void)addIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
- (void)setIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

