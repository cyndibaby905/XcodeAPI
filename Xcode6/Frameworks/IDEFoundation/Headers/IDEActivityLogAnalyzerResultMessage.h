

#import <IDEFoundation/IDEActivityLogMessage.h>

@class NSString;

@interface IDEActivityLogAnalyzerResultMessage : IDEActivityLogMessage
{
    NSString *_resultType;
    long long _keyEventIndex;
}

+ (id)analyzerMessageType;
@property long long keyEventIndex; // @synthesize keyEventIndex=_keyEventIndex;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)resultCategory;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (unsigned long long)totalNumberOfAnalyzerResults;
- (unsigned long long)totalNumberOfWarnings;

@end

