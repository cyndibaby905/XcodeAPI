

#import <Foundation/Foundation.h>

@class DVTXMLUnarchiver;

@protocol DVTXMLUnarchiverDelegate <NSObject>

@optional
- (void)XMLUnarchiver:(DVTXMLUnarchiver *)arg1 didReadToPosition:(long long)arg2 ofTotal:(long long)arg3;
@end

