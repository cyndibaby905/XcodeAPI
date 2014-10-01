

#import <IDEFoundation/IDELocalizationStream.h>

@interface _IDELocalizationStreamConcat : IDELocalizationStream
{
    id <IDELocalizationStreamPublisher> _first;
    id <IDELocalizationStreamPublisher> _second;
}

+ (id)withFirst:(id)arg1 second:(id)arg2;
@property(retain) id <IDELocalizationStreamPublisher> second; // @synthesize second=_second;
@property(retain) id <IDELocalizationStreamPublisher> first; // @synthesize first=_first;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (id)subscribe:(id)arg1;

@end

