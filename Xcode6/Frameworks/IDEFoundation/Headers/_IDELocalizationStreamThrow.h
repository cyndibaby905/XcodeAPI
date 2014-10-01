

#import <IDEFoundation/IDELocalizationStream.h>

@class NSError;

@interface _IDELocalizationStreamThrow : IDELocalizationStream
{
    NSError *_error;
}

+ (id)withError:(id)arg1;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)onError:(id)arg1;
- (id)subscribe:(id)arg1;

@end

