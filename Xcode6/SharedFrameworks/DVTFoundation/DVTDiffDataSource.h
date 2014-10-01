

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTDiffDataSource : NSObject <NSCopying>
{
    id _content;
    NSString *_label;
    unsigned long long _timestamp;
    struct _DVTDiffContextFlags _dcFlags;
}

+ (id)diffDataSourceWithContent:(id)arg1;
@property struct _DVTDiffContextFlags dcFlags; // @synthesize dcFlags=_dcFlags;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)tokenStringWithTokenRange:(NSRange)arg1;
- (id)tokenStringWithPrefix:(id)arg1 tokenRange:(NSRange)arg2;
- (void)appendTokenStringToString:(id)arg1 tokenRange:(NSRange)arg2;
- (void)appendTokenStringToString:(id)arg1 prefix:(id)arg2 tokenRange:(NSRange)arg3;
- (void)appendLabelToString:(id)arg1 prefix:(id)arg2;
- (unsigned long long)diffTokenHashWithRange:(NSRange)arg1;
- (unsigned long long)diffTokenHashInDiffDescriptor:(id)arg1 range:(NSRange)arg2;
- (long long)numberOfDiffTokens;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (struct _DVTDiffToken)diffTokenAtIndex:(long long)arg1;
- (void)getDiffTokens:(struct _DVTDiffToken *)arg1 inDiffDescriptor:(id)arg2 inRange:(NSRange)arg3;
- (struct _DVTDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (BOOL)isEqual:(id)other;
- (BOOL)isEqualToDiffDataSource:(id)arg1;
@property(retain) NSString *label; // @synthesize label=_label;
- (id)THREAD_arrangedContent;
- (id)arrangedContent;
@property(readonly) id THREAD_content;
@property(retain) id content; // @synthesize content=_content;
- (BOOL)_setContent:(id)arg1;
- (void)didChangeContent;
- (void)willChangeContent;
- (void)didChange;
- (NSString *)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithContent:(id)arg1;

@end

