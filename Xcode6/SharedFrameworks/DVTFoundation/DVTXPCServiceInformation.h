

#import <DVTFoundation/DVTProcessInformation.h>

@class NSArray, NSDictionary, NSString;

@interface DVTXPCServiceInformation : DVTProcessInformation
{
    NSDictionary *_infoPlist;
    BOOL _startSuspended;
    int _xpcParentPid;
    NSString *_xpcServiceName;
    NSDictionary *_environment;
    NSArray *_arguments;
    NSString *_pathToInterpose;
    NSString *_fullPath;
}

@property(retain) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(retain) NSString *pathToInterpose; // @synthesize pathToInterpose=_pathToInterpose;
@property BOOL startSuspended; // @synthesize startSuspended=_startSuspended;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSDictionary *environment; // @synthesize environment=_environment;
@property(retain) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property int xpcParentPid; // @synthesize xpcParentPid=_xpcParentPid;
- (BOOL)isWidgetExtension;
- (id)extensionType;
- (id)extensionInfo;
- (id)_infoPlist;
- (id)displayName;
- (BOOL)isDebuggable;
- (NSString *)description;
- (id)initWithServiceName:(id)arg1 pid:(int)arg2 parentPID:(int)arg3;

@end

