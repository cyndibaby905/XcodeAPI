

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class NSString;

@interface IDEActivityLogAppendTextChangeEvent : IDEActivityLogChangeEvent
{
    NSString *_textString;
}

@property(readonly) NSString *textString; // @synthesize textString=_textString;
- (NSString *)description;
- (id)initWithSection:(id)arg1 textString:(id)arg2;

@end

