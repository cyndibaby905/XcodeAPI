

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDESourceControlPatchNode-Protocol.h>

@class IDESourceControlManager, IDESourceControlWorkingTree, NSMutableArray, NSString;

@interface IDESourceControlPatchWorkingTreeNode : NSObject <IDESourceControlPatchNode>
{
    IDESourceControlWorkingTree *_workingTree;
    NSMutableArray *_children;
    IDESourceControlManager *_scm;
    NSString *_baseRevision;
}

@property(copy) NSString *baseRevision; // @synthesize baseRevision=_baseRevision;
@property(readonly) NSMutableArray *children; // @synthesize children=_children;
@property(readonly) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
@property __weak IDESourceControlManager *scm; // @synthesize scm=_scm;
- (id)initWithTree:(id)arg1;
- (void)addNodes:(id)arg1;
- (id)modifiedItems;
- (BOOL)resolved;
- (id)representedObject;
- (id)fileWrapper;
- (id)indexInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

