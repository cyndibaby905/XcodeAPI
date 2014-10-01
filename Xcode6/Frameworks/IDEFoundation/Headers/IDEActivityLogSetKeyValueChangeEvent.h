

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class NSString, NSValue;

@interface IDEActivityLogSetKeyValueChangeEvent : IDEActivityLogChangeEvent
{
    NSString *_key;
    NSValue *_value;
}

@property(readonly) NSValue *value; // @synthesize value=_value;
@property(readonly) NSString *key; // @synthesize key=_key;
- (NSString *)description;
- (id)initWithSection:(id)arg1 key:(id)arg2 value:(id)arg3;

@end

