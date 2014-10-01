

#import <IDEFoundation/IDESchemeActionIssueSummary.h>

@class NSString;

@interface IDESchemeActionTestFailureIssueSummary : IDESchemeActionIssueSummary
{
    NSString *_testCaseName;
}

@property(copy) NSString *testCaseName; // @synthesize testCaseName=_testCaseName;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 creatingWorkspaceFilePath:(id)arg2;
- (id)initWithIssueType:(id)arg1 message:(id)arg2 producingTarget:(id)arg3 documentLocation:(id)arg4 creatingWorkspaceFilePath:(id)arg5 testCaseName:(id)arg6;
- (id)initWithIssueType:(id)arg1 message:(id)arg2 producingTarget:(id)arg3 documentLocation:(id)arg4 creatingWorkspaceFilePath:(id)arg5;

@end

