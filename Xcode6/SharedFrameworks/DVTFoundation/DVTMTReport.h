

#import <Foundation/Foundation.h>

@interface DVTMTReport : NSObject
{
    struct __asl_object_s *_message;
}

@property struct __asl_object_s *message; // @synthesize message=_message;
- (void)recordRawLog:(id)arg1;
- (void)recordSuccess:(BOOL)arg1 reason:(id)arg2;
- (void)recordID:(id)arg1 forKey:(char *)arg2;
- (void)recordNumber:(long long)arg1 forKey:(char *)arg2;
- (void)recordNumber:(long long)arg1 forKey:(char *)arg2 deresolver:(CDUnknownBlockType)arg3;
- (void)recordTimeResult:(double)arg1 forKey:(char *)arg2;
- (void)recordTimeResult:(double)arg1 forKey:(char *)arg2 deresolver:(CDUnknownBlockType)arg3;
- (void)logReport;
- (void)dealloc;
- (void)_freeMsg;
- (id)initWithDomain:(char *)arg1 summarize:(BOOL)arg2;

@end

