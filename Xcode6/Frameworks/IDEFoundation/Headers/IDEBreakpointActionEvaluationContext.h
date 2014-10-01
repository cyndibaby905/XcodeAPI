

#import <Foundation/Foundation.h>

@class IDEConsoleAdaptor;

@protocol IDEDebugSession;

@interface IDEBreakpointActionEvaluationContext : NSObject
{
    id <IDEDebugSession> _debugSession;
    IDEConsoleAdaptor *_consoleAdaptor;
    unsigned long long _selectedThreadIndex;
    unsigned long long _selectedFrameIndex;
}

@property(readonly) unsigned long long selectedFrameIndex; // @synthesize selectedFrameIndex=_selectedFrameIndex;
@property(readonly) unsigned long long selectedThreadIndex; // @synthesize selectedThreadIndex=_selectedThreadIndex;
@property(readonly) IDEConsoleAdaptor *consoleAdaptor; // @synthesize consoleAdaptor=_consoleAdaptor;
@property(readonly) id <IDEDebugSession> debugSession; // @synthesize debugSession=_debugSession;
- (id)initWithDebugSession:(id)arg1 consoleAdaptor:(id)arg2 selectedThreadIndex:(unsigned long long)arg3 selectedFrameIndex:(unsigned long long)arg4;

@end

