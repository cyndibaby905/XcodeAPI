

#import <Foundation/Foundation.h>

@class NSDictionary, NSMutableDictionary;

@protocol DVTPropertyListEncoding <NSObject>
- (void)encodeIntoPropertyList:(NSMutableDictionary *)arg1;
- (void)awakeWithPropertyList:(NSDictionary *)arg1;
- (id)initWithPropertyList:(NSDictionary *)arg1 owner:(id)arg2;
@end

