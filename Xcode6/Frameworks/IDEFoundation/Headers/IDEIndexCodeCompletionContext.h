

#import <Foundation/Foundation.h>

@class NSSet, NSString;

@interface IDEIndexCodeCompletionContext : NSObject
{
    unsigned long long _contexts;
    unsigned int _containerKind;
    NSString *_containerUSR;
    BOOL _containerIsIncomplete;
    NSString *_partialSelector;
    NSSet *_includedFiles;
}

@property(copy) NSSet *includedFiles; // @synthesize includedFiles=_includedFiles;
@property(copy) NSString *partialSelector; // @synthesize partialSelector=_partialSelector;
@property BOOL containerIsIncomplete; // @synthesize containerIsIncomplete=_containerIsIncomplete;
@property(copy) NSString *containerResolution; // @synthesize containerResolution=_containerUSR;
@property unsigned int containerKind; // @synthesize containerKind=_containerKind;
@property unsigned long long contexts; // @synthesize contexts=_contexts;

@end

