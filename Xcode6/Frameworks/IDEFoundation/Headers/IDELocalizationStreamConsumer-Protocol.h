

#import <Foundation/Foundation.h>

@class NSError;

@protocol IDELocalizationStreamConsumer <NSObject>
- (void)onCompleted;
- (void)onError:(NSError *)arg1;
- (void)onNext:(id)arg1;
@end

