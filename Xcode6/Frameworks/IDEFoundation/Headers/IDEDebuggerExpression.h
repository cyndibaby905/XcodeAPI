

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEDebuggerExpression : NSObject
{
    NSString *_expressionString;
    NSString *_result;
}

@property(copy) NSString *result; // @synthesize result=_result;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (void)resetResult;
- (BOOL)hasBeenEvaluated;
- (id)initWithExpressionString:(id)arg1;

@end

