

#import <IDEFoundation/IDEBreakpointAction.h>

@class NSString;

@interface IDEShellCommandBreakpointAction : IDEBreakpointAction
{
    BOOL _waitUntilDone;
    NSString *_command;
    NSString *_arguments;
}

+ (id)propertiesAffectingPersistenceState;
@property BOOL waitUntilDone; // @synthesize waitUntilDone=_waitUntilDone;
@property(copy, nonatomic) NSString *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
- (void)setWaitUntilDoneFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)_stringForFileHandleData:(id)arg1;
- (id)_taskWithLaunchPath:(id)arg1 arguments:(id)arg2 consoleAdaptor:(id)arg3;
- (id)_errorMessageForShellCommandValidity:(int)arg1 shellCommand:(id)arg2;
- (int)_commandValidity:(id)arg1;
- (id)_fullPathOfCommand:(int *)arg1;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (id)_argumentsArrayForBreakpoint:(id)arg1;
- (void)_extractExpressionsAndMacrosFromCommandAndArguments;
- (void)_shellCommandActionCommonInit;
- (id)init;

@end

