

#import <Foundation/Foundation.h>

@class NSString;

@interface IDESchemeCommand : NSObject
{
    BOOL _appleInternalOnly;
    BOOL _supportsSingleFileProcessing;
    BOOL _shouldLaunch;
    BOOL _shouldTest;
    BOOL _shouldProfile;
    BOOL _shouldArchive;
    BOOL _shouldInstall;
    BOOL _shouldGenerateOptimizationProfile;
    NSString *_commandName;
    NSString *_commandNameGerund;
}

+ (id)availablePrimitiveSchemeCommands;
+ (id)allNonAppleInternalPrimitiveSchemeCommands;
+ (id)allPrimitiveSchemeCommands;
+ (id)availableSchemeCommands;
+ (id)allNonAppleInternalSchemeCommands;
+ (id)allSchemeCommands;
+ (id)installSchemeCommand;
+ (id)integrateSchemeCommand;
+ (id)testForPGOSchemeCommand;
+ (id)launchForPGOSchemeCommand;
+ (id)analyzeSchemeCommand;
+ (id)archiveSchemeCommand;
+ (id)profileSchemeCommand;
+ (id)testSchemeCommand;
+ (id)launchSchemeCommand;
@property(readonly, nonatomic) BOOL shouldGenerateOptimizationProfile; // @synthesize shouldGenerateOptimizationProfile=_shouldGenerateOptimizationProfile;
@property(readonly, nonatomic) BOOL shouldInstall; // @synthesize shouldInstall=_shouldInstall;
@property(readonly, nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(readonly, nonatomic) BOOL shouldProfile; // @synthesize shouldProfile=_shouldProfile;
@property(readonly, nonatomic) BOOL shouldTest; // @synthesize shouldTest=_shouldTest;
@property(readonly, nonatomic) BOOL shouldLaunch; // @synthesize shouldLaunch=_shouldLaunch;
@property(readonly, nonatomic) BOOL supportsSingleFileProcessing; // @synthesize supportsSingleFileProcessing=_supportsSingleFileProcessing;
@property(readonly, nonatomic, getter=isAppleInternalOnly) BOOL appleInternalOnly; // @synthesize appleInternalOnly=_appleInternalOnly;
@property(readonly, copy, nonatomic) NSString *commandNameGerund; // @synthesize commandNameGerund=_commandNameGerund;
@property(readonly, copy, nonatomic) NSString *commandName; // @synthesize commandName=_commandName;
- (NSString *)description;
- (id)initWithCommandName:(id)arg1 gerund:(id)arg2 appleInternalOnly:(BOOL)arg3;
- (id)init;

@end

