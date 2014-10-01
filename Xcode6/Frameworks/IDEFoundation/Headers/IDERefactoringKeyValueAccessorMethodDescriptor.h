

#import <Foundation/Foundation.h>

@class NSString;

@interface IDERefactoringKeyValueAccessorMethodDescriptor : NSObject
{
    NSString *_methodName;
    int _keyStyle;
    unsigned long long _indexOfKey;
}

@property(readonly) unsigned long long indexOfKey; // @synthesize indexOfKey=_indexOfKey;
@property(readonly) int keyStyle; // @synthesize keyStyle=_keyStyle;
@property(readonly) NSString *methodName; // @synthesize methodName=_methodName;
- (NSString *)description;
- (id)initWithMethodName:(const char *)arg1 keyStyle:(int)arg2 indexOfKey:(unsigned long long)arg3;

@end

