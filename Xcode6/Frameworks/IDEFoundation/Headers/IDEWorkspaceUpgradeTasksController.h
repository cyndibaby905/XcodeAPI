

#import <Foundation/Foundation.h>

@class IDEWorkspace;

@interface IDEWorkspaceUpgradeTasksController : NSObject
{
    IDEWorkspace *_workspace;
}

@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)processUpgradeTasks;
- (id)initWithWorkspace:(id)arg1;

@end

