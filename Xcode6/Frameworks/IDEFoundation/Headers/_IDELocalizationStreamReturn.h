

#import <IDEFoundation/IDELocalizationStream.h>

@class NSMutableArray;

@interface _IDELocalizationStreamReturn : IDELocalizationStream
{
    NSMutableArray *_remainingDataToPublish;
}

+ (id)withArray:(id)arg1;
@property(retain) NSMutableArray *remainingDataToPublish; // @synthesize remainingDataToPublish=_remainingDataToPublish;
- (void)onCompleted;
- (void)onNext:(id)arg1;
- (void)_next;
- (id)subscribe:(id)arg1;

@end

