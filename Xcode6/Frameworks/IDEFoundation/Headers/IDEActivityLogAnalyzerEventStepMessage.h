

#import <IDEFoundation/IDEActivityLogAnalyzerStepMessage.h>

@class NSString;

@interface IDEActivityLogAnalyzerEventStepMessage : IDEActivityLogAnalyzerStepMessage
{
    NSString *_description;
    unsigned long long _callDepth;
}

- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)locations;
- (void)setCallDepth:(unsigned long long)arg1;
- (unsigned long long)callDepth;
- (void)setDescription:(id)arg1;
- (NSString *)description;
- (unsigned long long)totalNumberOfWarnings;

@end

