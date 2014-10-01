

#import <IDEFoundation/IDEDiagnosticActivityLogMessage.h>

@interface IDEClangDiagnosticActivityLogMessage : IDEDiagnosticActivityLogMessage
{
    int _diagnosticSeverity;
}

+ (void)initialize;
- (int)diagnosticSeverity;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 workingDirectory:(id)arg4 documentURL:(id)arg5;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 workingDirectory:(id)arg4;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 documentURL:(id)arg4;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 documentURL:(id)arg3;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2;

@end

