

#import <IDEFoundation/IDEBreakpointAction.h>

@class NSString;

@interface IDEDebuggerCommandBreakpointAction : IDEBreakpointAction
{
    NSString *_consoleCommand;
}

+ (id)propertiesAffectingPersistenceState;
@property(copy) NSString *consoleCommand; // @synthesize consoleCommand=_consoleCommand;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (void)_debuggerCommandActionCommonInit;
- (id)init;

@end

