

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class IDEActivityLogMessage;

@interface IDEActivityLogAddSubmessageChangeEvent : IDEActivityLogChangeEvent
{
    IDEActivityLogMessage *_supermessage;
    IDEActivityLogMessage *_submessage;
}

@property(readonly) IDEActivityLogMessage *submessage; // @synthesize submessage=_submessage;
@property(readonly) IDEActivityLogMessage *supermessage; // @synthesize supermessage=_supermessage;
- (NSString *)description;
- (id)addedChild;
- (id)changedParent;
- (id)initWithSection:(id)arg1 supermessage:(id)arg2 submessage:(id)arg3;
- (id)initWithSection:(id)arg1 submessage:(id)arg2;

@end

