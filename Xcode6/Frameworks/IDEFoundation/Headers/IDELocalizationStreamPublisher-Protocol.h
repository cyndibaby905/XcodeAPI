

#import <Foundation/Foundation.h>

@protocol IDELocalizationStreamPublisher <NSObject>
- (id <DVTCancellable>)subscribe:(id <IDELocalizationStreamConsumer>)arg1;
@end

