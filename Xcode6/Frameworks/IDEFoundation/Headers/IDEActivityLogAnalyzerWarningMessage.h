

#import <IDEFoundation/IDEActivityLogMessage.h>

@interface IDEActivityLogAnalyzerWarningMessage : IDEActivityLogMessage
{
}

+ (id)analyzerWarningType;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (unsigned long long)totalNumberOfAnalyzerWarnings;
- (unsigned long long)totalNumberOfWarnings;
- (BOOL)isAnalyzerWarningMessage;

@end

