

#import <IDEFoundation/IDEActivityLogMessage.h>

@class NSString;

@interface IDEActivityLogActionMessage : IDEActivityLogMessage
{
    NSString *_actionIdentifier;
}

@property(copy) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (id)initWithAction:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 location:(id)arg4;

@end

