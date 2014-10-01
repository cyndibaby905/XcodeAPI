

#import <Foundation/Foundation.h>

@interface DVTMessageTrace : NSObject
{
}

+ (void)reportDetail:(char *)arg1 collecting:(CDUnknownBlockType)arg2;
+ (void)report:(char *)arg1 success:(BOOL)arg2 reason:(id)arg3;
+ (void)report:(char *)arg1 timeResult:(double)arg2 deresolver:(CDUnknownBlockType)arg3;
+ (void)report:(char *)arg1 number:(long long)arg2 deresolver:(CDUnknownBlockType)arg3;
+ (void)reportSummarized:(char *)arg1 collecting:(CDUnknownBlockType)arg2;
+ (void)reportSummarized:(char *)arg1 ID:(id)arg2 rawLog:(id)arg3;
+ (void)reportSummarized:(char *)arg1 ID:(id)arg2;
+ (void)report:(char *)arg1 ID:(id)arg2;
+ (void)reportSummarized:(char *)arg1;
+ (void)reportHit:(char *)arg1;
+ (void)reportForDomain:(char *)arg1 summarize:(BOOL)arg2 collecting:(CDUnknownBlockType)arg3;
+ (double)delay:(double)arg1;
+ (void)initialize;

@end

