

#import <IDEFoundation/IDEBuildParameters.h>

@class IDEOverridingBuildProperties, IDERunDestination, IDESchemeCommand, IDEWorkspaceArenaSnapshot;

@protocol IDEPrimitiveSchemeCommand;

@interface IDEMutableBuildParameters : IDEBuildParameters
{
}

@property(copy) IDEOverridingBuildProperties *overridingProperties; // @dynamic overridingProperties;
@property(copy) NSString *activeArchitecture; // @dynamic activeArchitecture;
@property(retain) IDERunDestination *activeRunDestination; // @dynamic activeRunDestination;
@property(copy) NSString *configurationName; // @dynamic configurationName;
@property(retain) IDESchemeCommand<IDEPrimitiveSchemeCommand> *schemeCommand; // @dynamic schemeCommand;
@property(copy) NSString *buildAction; // @dynamic buildAction;
@property(copy) IDEWorkspaceArenaSnapshot *workspaceArenaSnapshot; // @dynamic workspaceArenaSnapshot;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

