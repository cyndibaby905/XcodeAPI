

#import <Foundation/Foundation.h>

@class NSString;

@interface IDESchemeActionTestFailureSummary : NSObject
{
    BOOL _isPerformanceFailure;
    NSString *_message;
    NSString *_fileName;
    long long _lineNumber;
}

@property(readonly) BOOL isPerformanceFailure; // @synthesize isPerformanceFailure=_isPerformanceFailure;
@property(readonly) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, copy) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy) NSString *message; // @synthesize message=_message;
- (BOOL)isEqualToTestFailureSummary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithMessage:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 isPerformanceFailure:(BOOL)arg4;

@end

