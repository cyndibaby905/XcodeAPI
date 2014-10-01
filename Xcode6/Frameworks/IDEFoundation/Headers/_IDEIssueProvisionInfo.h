

#import <Foundation/Foundation.h>

@class DVTMapTable, IDEContainer, IDEIssueProvider, IDEIssueProviderSession, NSArray, NSMutableArray;

@interface _IDEIssueProvisionInfo : NSObject
{
    id <IDEBlueprint> _blueprint;
    IDEContainer *_container;
    NSMutableArray *_issues;
    DVTMapTable *_issueToGroupingObjectsMap;
    IDEIssueProviderSession *_session;
}

@property(readonly) NSMutableArray *_mutableIssues; // @synthesize _mutableIssues=_issues;
@property(readonly) IDEIssueProviderSession *session; // @synthesize session=_session;
@property(copy) DVTMapTable *issueToGroupingObjectsMap; // @synthesize issueToGroupingObjectsMap=_issueToGroupingObjectsMap;
@property(readonly) __weak IDEContainer *container; // @synthesize container=_container;
@property(readonly) __weak id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (void)removeIssues:(id)arg1;
- (void)addIssues:(id)arg1;
@property(readonly) NSArray *issues;
@property(readonly) IDEIssueProvider *issueProvider;
- (id)initWithBlueprint:(id)arg1 container:(id)arg2 issues:(id)arg3 session:(id)arg4;

@end

