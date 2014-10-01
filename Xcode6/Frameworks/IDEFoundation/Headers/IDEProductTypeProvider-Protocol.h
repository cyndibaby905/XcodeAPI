

#import <Foundation/Foundation.h>

@class DVTPlatform, IDEProductType, NSString;

@protocol IDEProductTypeProvider <NSObject>
+ (IDEProductType *)productTypeForIdentifier:(NSString *)arg1 platform:(DVTPlatform *)arg2;
@end

