

#import <Foundation/Foundation.h>

@class DVTCustomDataSpecifier, IDESourceControlWorkingCopyConfiguration, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL;

@interface IDESourceControlProject : NSObject
{
    NSMutableArray *_workingCopyConfigurations;
    unsigned long long _wccHash;
    BOOL _favorite;
    NSString *_name;
    NSString *_uniqueIdentifier;
    NSURL *_projectURL;
    NSString *_relativePathToProject;
    IDESourceControlWorkingCopyConfiguration *_projectWCC;
    unsigned long long _type;
    NSMutableArray *_configurationsInCurrentWorkspace;
    DVTCustomDataSpecifier *_customDataSpecifier;
    NSMutableDictionary *_originForConfigurationDictionary;
    NSMutableDictionary *_relativeInstallPathForConfigurationDictionary;
    NSMutableDictionary *_repositoryRootForConfigurationDictionary;
    NSMutableDictionary *_requiredConfigurationsDictionary;
}

@property(retain) NSMutableDictionary *requiredConfigurationsDictionary; // @synthesize requiredConfigurationsDictionary=_requiredConfigurationsDictionary;
@property(retain) NSMutableDictionary *repositoryRootForConfigurationDictionary; // @synthesize repositoryRootForConfigurationDictionary=_repositoryRootForConfigurationDictionary;
@property(retain) NSMutableDictionary *relativeInstallPathForConfigurationDictionary; // @synthesize relativeInstallPathForConfigurationDictionary=_relativeInstallPathForConfigurationDictionary;
@property(retain) NSMutableDictionary *originForConfigurationDictionary; // @synthesize originForConfigurationDictionary=_originForConfigurationDictionary;
@property(retain) DVTCustomDataSpecifier *customDataSpecifier; // @synthesize customDataSpecifier=_customDataSpecifier;
@property(getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(retain) NSMutableArray *configurationsInCurrentWorkspace; // @synthesize configurationsInCurrentWorkspace=_configurationsInCurrentWorkspace;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) IDESourceControlWorkingCopyConfiguration *projectWCC; // @synthesize projectWCC=_projectWCC;
@property(copy) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
@property(copy) NSURL *projectURL; // @synthesize projectURL=_projectURL;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *displayURL;
- (void)getRepositoryForConfiguration:(id)arg1 sourceControlManager:(id)arg2;
- (id)missingConfigurationsForWorkspace:(id)arg1;
- (id)checkoutURLForConfiguration:(id)arg1;
- (void)setState:(unsigned long long)arg1 forWorkingTree:(id)arg2 withWorkspace:(id)arg3;
- (unsigned long long)stateForWorkingCopyConfiguration:(id)arg1;
- (void)setState:(unsigned long long)arg1 forWorkingCopyConfigurationStateDictionary:(id)arg2;
- (id)stateDictionaryForWorkingCopyConfiguration:(id)arg1;
- (unsigned long long)stateForWorkingTree:(id)arg1;
- (id)_workingCopyConfigurationForRepositoryOrigin:(id)arg1 withWorkingCopyConfigurations:(id)arg2;
- (id)workingCopyConfigurationForRepositoryOrigin:(id)arg1;
- (id)repositoryRootForConfiguration:(id)arg1;
- (void)setRelativeInstallPath:(id)arg1 forConfiguration:(id)arg2;
- (id)relativeInstallPathForConfiguration:(id)arg1;
- (void)setOrigin:(id)arg1 forConfiguration:(id)arg2;
- (id)originForConfiguration:(id)arg1;
- (void)removeWorkingCopyConfiguration:(id)arg1;
- (void)addWorkingCopyConfiguration:(id)arg1;
@property(retain) NSArray *workingCopyConfigurations; // @synthesize workingCopyConfigurations=_workingCopyConfigurations;
@property(readonly) NSSet *relativeWorkingCopyPaths;
- (id)bestMatchForConfiguration:(id)arg1 ofProject:(id)arg2 inOtherProject:(id)arg3;
- (void)mergeWithProject:(id)arg1;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (void)writeToFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)readFromFilePath:(id)arg1 error:(id *)arg2;
- (void)writeToBundleOfWorkspace:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeFromBundleOfWorkspace:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)readFromBundleOfWorkspace:(id)arg1 error:(id *)arg2;
- (BOOL)readFromDictionary:(id)arg1 sourceControlManager:(id)arg2 error:(id *)arg3;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 sourceControlManager:(id)arg2;
- (void)_setupProjectInfoForNewWorkingTree:(id)arg1 withWorkspace:(id)arg2;
- (void)_sortConfigurations;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

@end

