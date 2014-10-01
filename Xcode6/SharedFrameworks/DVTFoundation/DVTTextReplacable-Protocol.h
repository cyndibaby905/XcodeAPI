

#import <Foundation/Foundation.h>

@class NSArray, NSString, NSURL;

@protocol DVTTextReplacable <NSObject>
- (BOOL)replaceFindResults:(NSArray *)arg1 withString:(NSString *)arg2 withError:(id *)arg3;

@optional
- (BOOL)replaceFindResults:(NSArray *)arg1 inSelection:(NSRange)arg2 withString:(NSString *)arg3 withError:(id *)arg4;
- (BOOL)replaceTextWithContentsOfURL:(NSURL *)arg1 error:(id *)arg2;
@end

