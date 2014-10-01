

#import <Foundation/Foundation.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IDEUIATestHostTask : NSObject
{
    BOOL _isTaskOuputComplete;
    BOOL _isTaskErrorComplete;
    NSString *_taskOutputString;
    NSString *_taskErrorString;
    NSDictionary *_results;
    NSString *_path;
    NSArray *_arguments;
    NSNumber *_timeout;
}

+ (void)initialize;
@property(retain) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSDictionary *results; // @synthesize results=_results;
@property(retain) NSString *taskErrorString; // @synthesize taskErrorString=_taskErrorString;
@property(retain) NSString *taskOutputString; // @synthesize taskOutputString=_taskOutputString;
@property BOOL isTaskErrorComplete; // @synthesize isTaskErrorComplete=_isTaskErrorComplete;
@property BOOL isTaskOuputComplete; // @synthesize isTaskOuputComplete=_isTaskOuputComplete;
- (BOOL)run;
- (void)_getTaskErrorData:(id)arg1;
- (void)_getTaskOutputData:(id)arg1;
- (id)initWithPath:(id)arg1 withArguments:(id)arg2 timeout:(id)arg3;
- (id)init;

@end

