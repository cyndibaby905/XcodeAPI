

#import <Foundation/Foundation.h>

@class DVTFilePath, NSDictionary;

@interface IDEWorkspaceArenaInfo : NSObject
{
    NSDictionary *_infoDict;
    DVTFilePath *_workspacePath;
}

+ (id)workspaceArenaInfoFromFileAtPath:(id)arg1 error:(id *)arg2;
+ (id)workspaceArenaInfoWithWorkspacePath:(id)arg1;
- (BOOL)writeToFileAtPath:(id)arg1 withRelativeWorkspacePath:(BOOL)arg2 error:(id *)arg3;
@property(readonly) DVTFilePath *workspacePath;

@end
