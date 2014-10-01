

#import <Foundation/Foundation.h>

@class DVTExtension;

@interface _IDEDeferredInitializationInvocation : NSObject
{
    Class _initializerClass;
    int _options;
    DVTExtension *_extension;
}

- (void)invokeWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)initWithInitalizerClass:(Class)arg1 options:(int)arg2 extension:(id)arg3;

@end

