

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTSimpleSerialization-Protocol.h>
#import <Foundation/Foundation.h>

@class NSString;

@interface IDEConsoleItem : NSObject <DVTSimpleSerialization, NSSecureCoding>
{
    NSString *_adaptorType;
    NSString *_content;
    double _timestamp;
    int _kind;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingOutputRequestedByUser;
+ (id)keyPathsForValuesAffectingPrompt;
+ (id)keyPathsForValuesAffectingOutput;
+ (id)keyPathsForValuesAffectingInput;
@property int kind; // @synthesize kind=_kind;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSString *content; // @synthesize content=_content;
@property(readonly) NSString *adaptorType; // @synthesize adaptorType=_adaptorType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
@property(readonly, getter=isError) BOOL error;
- (void)setError:(BOOL)arg1;
@property(readonly, getter=isOutputRequestedByUser) BOOL outputRequestedByUser;
- (void)setOutputRequestedByUser:(BOOL)arg1;
@property(readonly, getter=isPrompt) BOOL prompt;
- (void)setPrompt:(BOOL)arg1;
@property(readonly, getter=isOutput) BOOL output;
- (void)setOutput:(BOOL)arg1;
@property(readonly, getter=isInput) BOOL input;
- (void)setInput:(BOOL)arg1;
- (NSString *)description;
- (id)initWithAdaptorType:(id)arg1 content:(id)arg2 kind:(int)arg3;

@end

