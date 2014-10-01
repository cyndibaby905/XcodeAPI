

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class NSSet;

@interface IDEActivityLogStopRecordingChangeEvent : IDEActivityLogChangeEvent
{
    NSSet *_supersections;
}

@property(readonly) NSSet *supersections; // @synthesize supersections=_supersections;
- (NSString *)description;
- (id)initWithSection:(id)arg1 supersections:(id)arg2;

@end

