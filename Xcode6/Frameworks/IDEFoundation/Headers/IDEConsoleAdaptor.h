

#import <Foundation/Foundation.h>
#import <IDEFoundation/IDEConsoleAdaptorDelegateProtocol-Protocol.h>

@class NSFileHandle, NSMutableArray, NSMutableData, NSString, NSTimer;

@interface IDEConsoleAdaptor : NSObject
{
    NSString *_type;
    dispatch_queue_t _writeSerialQueue;
    NSTimer *_endOfStandardOutputReadTimer;
    NSTimer *_endOfStandardErrorReadTimer;
    BOOL _finishedReceivingData;
    BOOL _ignoreFutureOutput;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSMutableData *_currentOutputOverflow;
    NSMutableData *_currentErrorOverflow;
    NSTimer *_targetOutputOverflowTimer;
    id <IDEConsoleAdaptorDelegateProtocol> _delegate;
    unsigned long long _currNumStoredChars;
    struct __CFDictionary *_completeContent;
    struct __CFArray *_completeContentSequences;
    struct __CFArray *_standardInputSequences;
    struct __CFArray *_standardOutputSequences;
    struct __CFArray *_standardErrorSequences;
    NSMutableArray *_fileReadTokenArray;
}

+ (id)standardErrorItemsForAdaptors:(id)arg1;
+ (id)standardOutputItemsForAdaptors:(id)arg1;
+ (id)standardInputItemsForAdaptors:(id)arg1;
+ (id)allConsoleItemsForAdaptors:(id)arg1;
+ (id)_itemsForAdaptors:(id)arg1 sequencesSelector:(SEL)arg2;
+ (unsigned long long)_nextContentSequence;
+ (void)initialize;
@property(readonly) struct __CFArray *standardErrorSequences; // @synthesize standardErrorSequences=_standardErrorSequences;
@property(readonly) struct __CFArray *standardOutputSequences; // @synthesize standardOutputSequences=_standardOutputSequences;
@property(readonly) struct __CFArray *standardInputSequences; // @synthesize standardInputSequences=_standardInputSequences;
@property(readonly) struct __CFArray *completeContentSequences; // @synthesize completeContentSequences=_completeContentSequences;
@property(readonly) struct __CFDictionary *completeContent; // @synthesize completeContent=_completeContent;
@property(retain) id <IDEConsoleAdaptorDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property BOOL ignoreFutureOutput; // @synthesize ignoreFutureOutput=_ignoreFutureOutput;
@property BOOL finishedReceivingData; // @synthesize finishedReceivingData=_finishedReceivingData;
@property(readonly) NSString *type; // @synthesize type=_type;
- (id)standardErrorItems;
- (id)standardOutputItems;
- (id)standardInputItems;
- (id)allConsoleItems;
- (id)_itemsForSequences:(struct __CFArray *)arg1;
- (void)_setStandardError:(id)arg1;
- (void)_setStandardOutput:(id)arg1;
- (void)_addObserverToReadCompletion:(id)arg1 selector:(SEL)arg2;
- (void)_getError:(id)arg1;
- (void)_getOutput:(id)arg1;
- (void)_timerFiredToCheckEndOfRead:(id)arg1;
- (void)_fileHandleCompletedRead:(id)arg1;
- (id)_getData:(id)arg1 overflowBuffer:(id *)arg2;
- (void)_timerFiredForTargetOutputOverflow:(id)arg1;
- (void)_setStandardInput:(id)arg1;
- (void)outputForStandardError:(id)arg1;
- (void)outputForStandardOutput:(id)arg1;
- (void)outputForStandardOutput:(id)arg1 isPrompt:(BOOL)arg2 isOutputRequestedByUser:(BOOL)arg3;
- (void)_postOnMainThreadForNotification:(id)arg1 consoleItem:(id)arg2;
- (void)inputForStandardInput:(id)arg1;
- (void)inputFromConsole:(id)arg1 echo:(BOOL)arg2;
- (void)makeExpired;
- (void)_makeExpired;
- (void)_addToCompleteContent:(id)arg1 andSupportingSequences:(struct __CFArray *)arg2;
- (BOOL)_removeSequence:(unsigned long long)arg1 fromSupportingSequences:(struct __CFArray *)arg2;
- (NSString *)description;
- (void)dealloc;
- (id)initWithType:(id)arg1 standardInput:(id)arg2 standardOutput:(id)arg3 standardError:(id)arg4;

@end

