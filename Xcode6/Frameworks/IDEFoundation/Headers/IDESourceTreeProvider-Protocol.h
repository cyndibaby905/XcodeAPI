

#import <Foundation/Foundation.h>

@class NSString;

@protocol IDESourceTreeProvider <NSObject>
+ (NSString *)stringByExpandingSourceTreeReferencesInString:(NSString *)arg1;
@end

