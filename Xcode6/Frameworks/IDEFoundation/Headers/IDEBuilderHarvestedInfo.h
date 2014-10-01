

#import <Foundation/Foundation.h>

@class DVTMacroExpansionScope;

@interface IDEBuilderHarvestedInfo : NSObject
{
    DVTMacroExpansionScope *_macroExpansionScope;
    BOOL _isImmutable;
}

@property(readonly) BOOL isImmutable; // @synthesize isImmutable=_isImmutable;
@property(copy) DVTMacroExpansionScope *macroExpansionScope;
- (void)makeImmutable;
- (id)init;

@end

