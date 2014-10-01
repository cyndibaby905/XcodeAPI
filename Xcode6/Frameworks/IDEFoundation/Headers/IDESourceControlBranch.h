

#import <Foundation/Foundation.h>

@class IDESourceControlRepository, IDESourceControlRevision, IDESourceControlWorkingCopyConfiguration, NSString;

@interface IDESourceControlBranch : NSObject
{
    NSString *_name;
    IDESourceControlWorkingCopyConfiguration *_wcc;
    IDESourceControlRepository *_remote;
    BOOL _isMainBranch;
    BOOL _orphaned;
    BOOL _isNewBranch;
    IDESourceControlRevision *_currentRevision;
}

@property(retain) IDESourceControlRevision *currentRevision; // @synthesize currentRevision=_currentRevision;
@property(readonly) BOOL isNewBranch; // @synthesize isNewBranch=_isNewBranch;
@property BOOL orphaned; // @synthesize orphaned=_orphaned;
@property(readonly) BOOL isMainBranch; // @synthesize isMainBranch=_isMainBranch;
@property(retain) IDESourceControlRepository *remote; // @synthesize remote=_remote;
@property(readonly) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
@property(readonly) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)other;
- (id)nameOfTrackingBranch:(CDUnknownBlockType)arg1;
- (id)workingTree:(id)arg1 parentBranchesWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)repository:(id)arg1 currentRevisionWithCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSString *repositoryURLString;
- (NSString *)description;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithNewBranchName:(id)arg1;
- (id)initWithName:(id)arg1 workingCopyConfiguration:(id)arg2 isMainBranch:(BOOL)arg3;

@end

