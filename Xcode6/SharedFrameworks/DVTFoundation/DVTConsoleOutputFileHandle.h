

#import <Foundation/Foundation.h>

@interface DVTConsoleOutputFileHandle : NSFileHandle
{
    BOOL _shouldEmitColor;
    unsigned long long _terminalWidth;
}

- (void)resetColors;
- (void)printf:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2;

@end

