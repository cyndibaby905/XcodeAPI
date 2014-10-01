

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>

@class IDEOverridingBuildProperties, IDERunDestination, IDESchemeCommand, IDEWorkspaceArenaSnapshot, NSString;

@protocol IDEPrimitiveSchemeCommand;

@interface IDEBuildParameters : NSObject <NSCopying, NSMutableCopying>
{
    IDEWorkspaceArenaSnapshot *_workspaceArenaSnapshot;
    NSString *_buildAction;
    IDESchemeCommand<IDEPrimitiveSchemeCommand> *_schemeCommand;
    NSString *_configurationName;
    IDERunDestination *_activeRunDestination;
    NSString *_activeArchitecture;
    IDEOverridingBuildProperties *_overridingProperties;
    NSString *_stateKey;
    unsigned long long _hash;
}

@property(readonly, copy) IDEOverridingBuildProperties *overridingProperties; // @synthesize overridingProperties=_overridingProperties;
@property(readonly, copy) NSString *activeArchitecture; // @synthesize activeArchitecture=_activeArchitecture;
@property(readonly) IDERunDestination *activeRunDestination; // @synthesize activeRunDestination=_activeRunDestination;
@property(readonly, copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly) IDESchemeCommand<IDEPrimitiveSchemeCommand> *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(readonly, copy) NSString *buildAction; // @synthesize buildAction=_buildAction;
@property(readonly, copy) IDEWorkspaceArenaSnapshot *workspaceArenaSnapshot; // @synthesize workspaceArenaSnapshot=_workspaceArenaSnapshot;
- (id)dvt_detailedDebugDescription;
- (NSString *)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (id)_componentPropertyNames;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithMutability:(BOOL)arg1;
- (id)init;

@end

