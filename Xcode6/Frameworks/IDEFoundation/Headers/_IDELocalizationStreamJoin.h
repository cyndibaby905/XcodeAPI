

#import <IDEFoundation/IDELocalizationStream.h>

@interface _IDELocalizationStreamJoin : IDELocalizationStream
{
    id <IDELocalizationStreamPublisher> _publisher;
    id <IDELocalizationStreamPublisher> _joined;
}

+ (id)withPublisher:(id)arg1;
@property(retain) id <IDELocalizationStreamPublisher> joined; // @synthesize joined=_joined;
@property(retain) id <IDELocalizationStreamPublisher> publisher; // @synthesize publisher=_publisher;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (id)subscribe:(id)arg1;

@end

