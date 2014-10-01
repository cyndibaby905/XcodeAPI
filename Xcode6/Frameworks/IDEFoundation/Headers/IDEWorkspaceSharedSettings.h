

#import <IDEFoundation/IDEWorkspaceSettings.h>

@interface IDEWorkspaceSharedSettings : IDEWorkspaceSettings
{
}

@property BOOL autocreateContextsIfNeeded;
- (id)settingsOwnership;

@end

