

#import <Foundation/Foundation.h>

@class IDEIssueProvider;

@interface IDEWorkspaceIntegrityIssueProviderContext : NSObject
{
    IDEIssueProvider *_issueProvider;
    id <IDEIntegrityLogDataSource> _dataSource;
    unsigned long long _hash;
}

@property(readonly) id <IDEIntegrityLogDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
- (NSString *)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (id)initWithIssueManager:(id)arg1 dataSource:(id)arg2;

@end

