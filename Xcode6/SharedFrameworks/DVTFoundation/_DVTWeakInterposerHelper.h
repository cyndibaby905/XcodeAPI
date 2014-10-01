

#import <Foundation/Foundation.h>

@class DVTWeakInterposer_ProxyHelperReference;

@interface _DVTWeakInterposerHelper : NSObject
{
    BOOL _assertOnRetain;
    BOOL _isAsserting;
    DVTWeakInterposer_ProxyHelperReference *_interposer;
    id _representedObject;
}

@property id representedObject; // @synthesize representedObject=_representedObject;
@property(retain) DVTWeakInterposer_ProxyHelperReference *interposer; // @synthesize interposer=_interposer;
- (void)dealloc;
- (id)retain;

@end

