

#import <IDEFoundation/IDEIssueProvider.h>

@class DVTMapTable, DVTObservingToken;

@interface IDEWorkspaceIntegrityIssueProvider : IDEIssueProvider
{
    id _modelObjectDidChangeObserver;
    DVTObservingToken *_referencedContainersObserverToken;
    DVTMapTable *_referencedContainersToIssueObserverTokensMapTable;
    DVTMapTable *_referencedContainersToProviderContextsMapTable;
    DVTObservingToken *_blueprintsObserverToken;
    DVTMapTable *_blueprintsToIssueObserverTokensMapTable;
    DVTMapTable *_blueprintsToProviderContextsMapTable;
}

+ (int)providerType;
+ (void)initialize;
- (id)ideModelObjectTypeIdentifier;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)_blueprintsDidChange;
- (void)_referencedContainersDidChange;
- (id)_integrityIssuesForDataSource:(id)arg1;
- (id)_issueForMessage:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end

