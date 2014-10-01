

#import <Foundation/Foundation.h>

@class DVTDocumentLocation, DVTFilePath, NSString;

@interface IDESchemeActionIssueSummary : NSObject
{
    NSString *_issueType;
    NSString *_message;
    NSString *_producingTarget;
    DVTDocumentLocation *_documentLocationInCreatingWorkspace;
    DVTFilePath *_creatingWorkspaceFilePath;
}

@property(retain) DVTFilePath *creatingWorkspaceFilePath; // @synthesize creatingWorkspaceFilePath=_creatingWorkspaceFilePath;
@property(copy) DVTDocumentLocation *documentLocationInCreatingWorkspace; // @synthesize documentLocationInCreatingWorkspace=_documentLocationInCreatingWorkspace;
@property(copy) NSString *producingTarget; // @synthesize producingTarget=_producingTarget;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *issueType; // @synthesize issueType=_issueType;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (id)documentLocationInLocalWorkspace:(id)arg1;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 creatingWorkspaceFilePath:(id)arg2;
- (id)initWithIssueType:(id)arg1 message:(id)arg2 producingTarget:(id)arg3 documentLocation:(id)arg4 creatingWorkspaceFilePath:(id)arg5;

@end

