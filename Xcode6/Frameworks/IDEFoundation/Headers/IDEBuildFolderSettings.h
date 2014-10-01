

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEBuildFolderSettings : NSObject
{
    int buildLocationStyle;
    NSString *sharedBuildFolderName;
    int customBuildLocationType;
    NSString *customBuildProductsPath;
    NSString *customBuildIntermediatesPath;
}

+ (id)buildFolderSettingsForWorkspaceSettings:(id)arg1;
- (NSString *)description;

@end

