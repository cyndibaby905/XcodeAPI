

#import <Foundation/Foundation.h>

@class DVTConcreteMapTable;

__attribute__((visibility("hidden")))
@interface DVTConcreteMapTableValueEnumerator : NSEnumerator
{
    DVTConcreteMapTable *mapTable;
    unsigned long long counter;
}

+ (id)enumeratorWithMapTable:(id)arg1;
- (void)dealloc;
- (id)nextObject;

@end

