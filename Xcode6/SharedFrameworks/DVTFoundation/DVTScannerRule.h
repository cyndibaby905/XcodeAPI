

#import <Foundation/Foundation.h>

@class DVTSourceScanner, NSSet;

@interface DVTScannerRule : NSObject
{
    long long _token;
    NSSet *_tokenSet;
    BOOL _optional;
    BOOL _allowMultiple;
    DVTSourceScanner *_scanner;
}

@property(readonly) DVTSourceScanner *scanner; // @synthesize scanner=_scanner;
@property(readonly) BOOL allowMultiple; // @synthesize allowMultiple=_allowMultiple;
@property(readonly) BOOL optional; // @synthesize optional=_optional;
- (BOOL)matchesToken:(long long)arg1;
- (id)initWithString:(id)arg1;

@end

