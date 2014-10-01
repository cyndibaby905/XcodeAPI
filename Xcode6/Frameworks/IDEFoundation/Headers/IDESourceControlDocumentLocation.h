

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSString;

@interface IDESourceControlDocumentLocation : DVTDocumentLocation
{
    NSString *_branchName;
    NSString *_revisionName;
}

@property(readonly) NSString *revisionName; // @synthesize revisionName=_revisionName;
@property(readonly) NSString *branchName; // @synthesize branchName=_branchName;
- (NSString *)description;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)workingTreeItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentLocation:(id)arg1 branchName:(id)arg2 revisionName:(id)arg3;
- (id)initWithDocumentURL:(id)arg1 branchName:(id)arg2 revisionName:(id)arg3;

@end

