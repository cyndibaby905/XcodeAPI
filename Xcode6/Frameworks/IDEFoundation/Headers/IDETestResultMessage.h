

#import <Foundation/Foundation.h>

@class NSNumber, NSString;

@interface IDETestResultMessage : NSObject
{
    NSString *_text;
    unsigned long long _messageType;
    NSString *_filePath;
    NSNumber *_lineNumber;
}

@property(readonly, copy) NSNumber *lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, copy) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(readonly, copy) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 messageType:(unsigned long long)arg2 filePath:(id)arg3 lineNumber:(id)arg4;

@end

