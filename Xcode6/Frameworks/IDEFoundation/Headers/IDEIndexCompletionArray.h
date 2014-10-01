

#import <Foundation/Foundation.h>

@interface IDEIndexCompletionArray : NSMutableArray
{
    NSMutableArray *_array;
    void *_completionResults;
}

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCodeCompleteResults:(void *)arg1;

@end

