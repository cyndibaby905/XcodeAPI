

#import <DVTFoundation/DVTOperation.h>

@class IDESourceControlRequest, NSArray, NSString;

@interface IDESourceControlOperation : DVTOperation
{
    NSArray *_result;
    IDESourceControlRequest *_request;
    NSString *_rawInput;
    NSString *_rawStandardOutput;
    NSString *_rawErrorOutput;
    unsigned int _scmPowerAssertion;
    BOOL _waitToParseData;
    BOOL _allowsSleep;
    BOOL _userInitiated;
}

@property BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property BOOL allowsSleep; // @synthesize allowsSleep=_allowsSleep;
@property BOOL waitToParseData; // @synthesize waitToParseData=_waitToParseData;
@property(readonly) IDESourceControlRequest *request; // @synthesize request=_request;
@property(retain) NSArray *result; // @synthesize result=_result;
- (void)cancel;
@property(retain) NSString *rawErrorOutput; // @synthesize rawErrorOutput=_rawErrorOutput;
@property(retain) NSString *rawStandardOutput; // @synthesize rawStandardOutput=_rawStandardOutput;
@property(retain) NSString *rawInput; // @synthesize rawInput=_rawInput;
- (void)main;
- (id)initWithRequest:(id)arg1;

@end

