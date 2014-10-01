

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTMacroExpansionIntegerMetric : NSObject
{
    NSString *_label;
    unsigned long long *_sampleCounts;
    NSRange _valueRange;
}

@property(readonly) unsigned long long *sampleCounts; // @synthesize sampleCounts=_sampleCounts;
@property(readonly) NSRange valueRange; // @synthesize valueRange=_valueRange;
@property(readonly) NSString *label; // @synthesize label=_label;
- (id)longDescription;
- (void)addValue:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 valueRange:(NSRange)arg2;

@end

