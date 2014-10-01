

#import <IDEFoundation/IDEActivityLogMessage.h>

@interface IDEActivityLogAnalyzerStepMessage : IDEActivityLogMessage
{
    long long _parentIndex;
}

@property long long parentIndex; // @synthesize parentIndex=_parentIndex;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (unsigned long long)totalNumberOfWarnings;
- (BOOL)isAnalyzerStepMessage;

@end

