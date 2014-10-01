

#import <Foundation/Foundation.h>

@class IDEActivityLogSection;

@interface IDEActivityLogChangeEvent : NSObject
{
    IDEActivityLogSection *_section;
}

+ (id)stopRecordingEventWithSection:(id)arg1 supersections:(id)arg2;
+ (id)setValueEventWithSection:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)appendTextEventWithSection:(id)arg1 textString:(id)arg2;
+ (id)addSubmessageEventWithSection:(id)arg1 supermessage:(id)arg2 submessage:(id)arg3;
+ (id)addSubsectionEventWithSection:(id)arg1 subsection:(id)arg2;
@property(readonly) IDEActivityLogSection *section; // @synthesize section=_section;
- (NSString *)description;
- (id)addedChild;
- (id)changedParent;
- (id)initWithSection:(id)arg1;

@end

