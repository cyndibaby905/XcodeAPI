

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTStackBacktraceFrame : NSObject
{
    unsigned long long _stackAddress;
    unsigned long long _lineNumber;
    NSString *_symbolName;
    NSString *_fileName;
    NSString *_symbolOwnerName;
}

@property(copy) NSString *symbolOwnerName; // @synthesize symbolOwnerName=_symbolOwnerName;
@property(copy) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property unsigned long long stackAddress; // @synthesize stackAddress=_stackAddress;
- (id)frameStringRepresentation;

@end

