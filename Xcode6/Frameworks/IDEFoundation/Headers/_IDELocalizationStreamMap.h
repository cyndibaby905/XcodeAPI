

#import <IDEFoundation/IDELocalizationStream.h>

@interface _IDELocalizationStreamMap : IDELocalizationStream
{
    BOOL _shouldComplete;
    id <IDELocalizationStreamPublisher> _publisher;
    CDUnknownBlockType _work;
    unsigned long long _outstandingWork;
}

+ (id)withPublisher:(id)arg1 withWork:(CDUnknownBlockType)arg2;
@property BOOL shouldComplete; // @synthesize shouldComplete=_shouldComplete;
@property unsigned long long outstandingWork; // @synthesize outstandingWork=_outstandingWork;
@property(copy) CDUnknownBlockType work; // @synthesize work=_work;
@property(retain) id <IDELocalizationStreamPublisher> publisher; // @synthesize publisher=_publisher;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (id)subscribe:(id)arg1;

@end

