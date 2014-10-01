

#import <Foundation/Foundation.h>

@interface DVTLogger : NSObject
{
}

+ (void)removeActiveLogger:(id)arg1;
+ (void)addActiveLogger:(id)arg1;
+ (id)activeLoggers;
+ (void)initialize;
- (void)decreaseIndentLevelForAspect:(id)arg1;
- (void)increaseIndentLevelForAspect:(id)arg1;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;
- (id)stringForIndentLevel:(unsigned long long)arg1;
- (id)threadPrefixString;

@end

