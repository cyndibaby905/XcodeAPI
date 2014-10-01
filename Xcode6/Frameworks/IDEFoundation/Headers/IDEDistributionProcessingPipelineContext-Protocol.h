

#import <Foundation/Foundation.h>

@class DVTLogAspect, NSString;

@protocol IDEDistributionProcessingPipelineContext <NSObject>
@property(readonly) DVTLogAspect *logAspect;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2 inDictionaryForKey:(NSString *)arg3;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
@end

