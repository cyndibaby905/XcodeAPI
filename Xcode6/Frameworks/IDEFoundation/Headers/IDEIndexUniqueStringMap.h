

#import <Foundation/Foundation.h>

@class NSMapTable;

@interface IDEIndexUniqueStringMap : NSObject
{
    NSMapTable *_mapTable;
}

- (id)stringWithString:(id)arg1;
- (id)stringWithUTF8String:(const char *)arg1;
- (void)dealloc;
- (id)init;

@end

