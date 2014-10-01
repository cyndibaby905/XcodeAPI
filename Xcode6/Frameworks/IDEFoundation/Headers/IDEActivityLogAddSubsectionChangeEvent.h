

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class IDEActivityLogSection;

@interface IDEActivityLogAddSubsectionChangeEvent : IDEActivityLogChangeEvent
{
    IDEActivityLogSection *_subsection;
}

@property(readonly) IDEActivityLogSection *subsection; // @synthesize subsection=_subsection;
- (NSString *)description;
- (id)addedChild;
- (id)initWithSection:(id)arg1 subsection:(id)arg2;

@end

