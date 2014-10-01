

#import <Foundation/Foundation.h>

@class NSString;

@protocol DVTStringRepresentationPersistable <NSObject>
- (NSString *)dvt_persistableStringRepresentation;
- (id)dvt_initFromPersistableStringRepresentation:(NSString *)arg1 error:(id *)arg2;
@end

